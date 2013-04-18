#include <iostream>
#include <vector>
#include "Link.h"
#include "DataCenter.h"

using namespace std;

class VirtualMachine
{
	private:
		long vmid;
		//long clusterid;
		DataCenter *host_dc;
		vector<VirtualMachine*> connected_vms;
		vector<VirtualMachine*> traffic_to_vms;
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
		//void assignToCluster()
		//{
		//}
}

