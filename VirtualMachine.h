#include <iostream>
#include <vector>
#include "Link.h"
#include "DataCenter.h"

using namespace std;

class VirtualMachine
{
	private:
		long vmid;
		DataCenter *hostDC;
		vector<VirtualMachine*> connectedVMs;
		vector<VirtualMachine*> trafficToVMs;
	public:
		VirtualMachine(/*list of parameters*/) // Parameterized Constructor
		{
			//assign vmid
			//assign hosting DC
			//add linked list of connected VMs
		}
		float getTraffic()
		{
			//update traffic to and from VM in traffic vector
		}
		//void assignToCluster(){}
}

