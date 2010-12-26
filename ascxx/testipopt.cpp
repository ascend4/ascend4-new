#include "library.h"
#include "simulation.h"
#include "solver.h"
#include "solverreporter.h"

#include <iostream>
using namespace std;

int main(void){

	Library L;
	L.load("test/ipopt/formula.a4c");
	Type t = L.findType("formula");
	Simulation S = t.getSimulation("S");
	SolverReporter R;
	try{
		S.solve(Solver("IPOPT"),R);
	}catch(runtime_error &e){
		cerr << "ERROR in solving:" << e.what() << endl;
		exit(1);
	}
	S.run(t.getMethod("self_test"));

	L.clear();
}
