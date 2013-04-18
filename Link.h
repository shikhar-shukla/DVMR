#include <iostream>
#include <vector>
#include "DataCenter.h"
#include "VirtualMachine.h"

using namespace std;

class Link
{
	private:
		long linkid;
		DataCenter *end1;
		DataCenter *end2;
		float threshold;
		float utilization;
	public:
		Link(/*parameter list - dc1 nad dc2*/)
		{
			//create link object and initialize threshold and end points
		}
		float calcluateUtilization()
		{
			//calculate link utilization based on traffic and capacity
		}
}
