import ascpy

L = ascpy.Library()

L.load('johnpye/rankine.a4c')

D = L.getAnnotationDatabase()

M = L.getModules()

blocktypes = set()

# convenience class for 'block' types in ASCEND
class BlockType:
	def __init__(self,typ):
		self.typ = typ
		self.inlets = set()
		self.outlets = set()
		nn = D.getNotes(typ,ascpy.SymChar("inline"),None)
		for n in nn:
			pass

	def get_inlets(self):
		pass

for m in M:
	T = L.getModuleTypes(m)
	for t in T:
		# 'block' types must not be parametric, because they must be able to
		# exist even without being connected, and parametric models impose
		# restrictions on the use of ARE_THE_SAME and similar.
		if t.hasParameters():
			continue
		x = D.getNotes(t,ascpy.SymChar("block"),ascpy.SymChar("SELF"))
		if x:
			blocktypes.add(t)

print "block types:"
if not blocktypes:
	print "NONE FOUND"
for t in blocktypes:
	print t.getName()

	nn = D.getNotes(t,ascpy.SymChar("block"),ascpy.SymChar("SELF"))
	for n in nn: 
		print "\t%s" % n.getText()
	nn = D.getTypeRefinedNotesLang(t,ascpy.SymChar("inline"))
	for n in nn:
		print "\t\t%s: %s" % (n.getId(), n.getText())	

