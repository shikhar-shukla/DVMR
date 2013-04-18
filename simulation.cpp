#include <iostream>
#include <vector>
#include "DataCenter.h"
#include "Link.h"
#include "VirtualMachine.h"

using namespace std;

float getReplacementCost(/*parameter list*/) //returns float cost to indicate
										 	 //feasibility of repalcement
{
	//cost function
	//based on heuristic algorithm
}

void performReplacement(/*parameter list*/)
{
	//replacement function
	//based on heuristic algorithm
}

void main()
{
	//create network topology
	//populate data structures according to input
	//Perform clustering
	//call getReplacementCost() to calculate cost of moving clusters
	//if possible, call performReplacement() to replace cluster
	//if not, move to the next cluster and call getReplacementCost()
	//Keep going till all clusters are taken under consideration
	//Once all clusters are done with, ????
}
