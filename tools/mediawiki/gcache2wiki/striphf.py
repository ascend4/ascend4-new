#!/usr/bin/env python
# Filter to strip the header and footer stuff from the cached page

from BeautifulSoup import *
import sys

print "Reading file",sys.argv[1],"..."

f = open(sys.argv[1]).read()

print "Parsing whole page..."

s = BeautifulSoup(f);

title = s.title.string

if(title[-9:] != " - ASCEND"):
	print "Incorrect title '%s'" % s.title.string
	sys.exit(1)

title = title[:-9]
print "  page title = '%s'" % title

import re
r = re.compile("<!-- start content -->(.*)<!-- end content -->",re.S);

pagecontent = r.search(f).group(1)

print "Parsing page content..."
s1 = BeautifulSoup(pagecontent)

def replace_templates(soup):
	for t in soup.findAll("div",{"id":"task","class":"notice metadata"}):
		t.replaceWith(NavigableString("{{task}}"))

def strip_contents(soup):
	c = soup.find('table',{'id':'toc','class':'toc','summary':'Contents'})
	if c:
		c.extract()

def strip_script(soup):
	for s in soup.findAll('script'):
		s.extract()

def strip_highlight(soup):
	for a1 in soup.findAll('p'):
		if a1.find('style',{'type':"text/css"}):
			n1 = a1.nextSibling
			if str(n1.string).strip() != "/* Highlighting theme definition: */":
				print "NO MATCH"
				sys.exit(1)
			n2 = n1.nextSibling
			#print "REMOVING",str(a1)
			a1.extract()
			#print "REMOVING N1",str(n1)
			n1.extract()
			n3 = n2.nextSibling
			#print "REMOVING N2",str(n2)
			n2.extract()
			n4= n3.nextSibling
			#print "REMOVING N3",str(n3)
			n3.extract()
			pre = n4.nextSibling
			#print "REMOVING N4",str(n4)
			n4.extract()

			if pre.name != 'pre':
				print "ERROR parsing syntax-highlighting:",pre
				sys.exit(1)
			for x in pre.findAll('b',{'style':True}):
				x1 = NavigableString(str(x.string))
				x.replaceWith(x1)
	
			for x in pre.findAll('span',{'class':True}):
				x1 = NavigableString(str(x.renderContents()))
				x.replaceWith(x1)

			t = Tag(soup,"src",[("lang",'a4c')])
			t.insert(0, NavigableString(str(pre.renderContents()).strip()))
			pre.replaceWith(t)

def strip_anchors(soup):
	for a1 in soup.findAll('a',{'name':True}):
		print "ANCHOR:",a1
		a1.extract()

def wikify_headings(soup):
	for h in soup.findAll(['h1','h2','h3','h4','h5','h6']):
		if not h.find('span',{'class':'mw-headline'}):
			print "HEADING: SKIPPING:",h
			continue
		print "HEADING:",h
		level = int(str(h.name)[1:])
		h2 = NavigableString("="*level + h.span.renderContents() + "="*level)
		h.replaceWith(h2)

def wikify_paragraphs(soup):
	for p in soup.findAll('p'):
		#print "PARA",str(p)
		if p.renderContents() is None:
			p.replaceWith(NavigableString("\n"))
		else:
			p.replaceWith(NavigableString("\n" + p.renderContents() + "\n"))

def strip_printfooter(soup):
	soup.find('div',{'class':'printfooter'}).extract()

def wikify_categories(soup):
	cats = soup.find("div",{"id":"catlinks"})
	if not cats:
		return
	r2 = re.compile("/[A-Z][a-z_0-9-]*")
	cc = []
	for a in cats.findAll("a"):
		if str(a['href']) == "/Special:Categories":
			#print "CATEGORIES LINK ignored"
			a.extract()
		elif r2.match(a['href']):
			t = NavigableString("[[" + a['href'][1:] + "]]\n")
			print "  categ:",t.strip()
			cc.append(t)
	#print "CATS:",cc
	#cats.replace(cc)
	for c in cc:
		cats.parent.append(c)
	cats.extract()

def wikify_images(soup):
	for a in soup.findAll("a",{'class':'image'}):
		if a.img:
			if a.img['alt'][0:6] == "Image:":
				print "IMG",a.img['alt'][6:]
			elif a['href'][0:6] == "/File:":
				print "IMG",a['href'][6:]
				a1 = NavigableString("[[Image:" + a['href'][6:] + "]]")
				a.replaceWith(a1)
			else:
				print "CAN'T PROCESS IMAGE LINK",a

def wikify_links(soup):
	rr1 = re.compile(" ")
	def linkified(s):
		s = rr1.sub("_",s)
		s = s[0:1].upper() + s[1:]
		return s

	r = re.compile("^http://")
	r2 = re.compile("/[A-Z][a-z_0-9-]*")
	for a in soup.findAll('a',{'href':True}):
		#print "LINK:",a.parent
		if r.match(a['href']):
			t = NavigableString("[" + a['href'] + " " + a.renderContents() + "]")
			a.replaceWith(t)
			print " --> ",t

		elif r2.match(a['href']):
			if linkified(a.renderContents()) == a['href'][1:]:
				t = NavigableString("[[" + a.renderContents() + "]]")
			else:
				t = NavigableString("[[" + a['href'][1:] + "|" + a.renderContents() + "]]")
			a.replaceWith(t)
			print " --> ",t

def wikify_bold(soup):
	for b in soup.findAll("b"):
		#print "BOLD:",b
		b2 = NavigableString("'''" + b.renderContents() + "'''")
		b.replaceWith(b2)

def wikify_italics(soup):
	for i in soup.findAll("i"):
		i.replaceWith("''" + i.renderContents() + "''")

replace_templates(s1)
strip_contents(s1)
strip_script(s1)
strip_printfooter(s1)
strip_highlight(s1)
strip_anchors(s1)
wikify_headings(s1)
wikify_paragraphs(s1)
wikify_categories(s1)
s1 = BeautifulSoup(str(s1))
wikify_bold(s1)
s1 = BeautifulSoup(str(s1))
wikify_italics(s1)
s1 = BeautifulSoup(str(s1))
wikify_images(s1)
wikify_links(s1)
#sys.exit(1)
print str(s1)


