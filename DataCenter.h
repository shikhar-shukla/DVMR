#include <iostream>
#include <vector>
#include "Link.h"
#include "VirtualMachine.h"

using namespace std;

class DataCenter
{
	private:
		long dcid;
		long no_of_vms;
		long no_of_free_slots;
		vector<VirtualMachine*> virtual_machines;
		vector<Link*> connecte_links;
	public:
		DataCenter(/*parameter list*/) // Parameterized Constructor
		{
			//assign number of VMs
			//assign number of slots
			//initialize vm vector to null
			//initialize link vector to null
		}
		void addVM()
		{
			//adding a VM to the vm vector based on the no of VMs and input file
		}
		void addLinks()
		{
			//adding links between data centers
		}
}
