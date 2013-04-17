#include <iostream>
#include <vector>
#include "Link.h"
#include "VM.h"

using namespace std;

//Network State File will be read and fields will be populated on the basis of this

class DataCenter
{
	private:
		long noOfVMs;
		long noOfSlots;
		vector<VM*> virtualMachines;
		vector<Link*> connectedLinks;
	public:
		DataCenter(/*parameter list*/) // Parameterized Constructor
		{
			//assign number of VMs
			//assign number of slots
			//initialize vm vector to null
			//initialize link vector to null
		}
		addVM()
		{
			//adding a VM to the vm vector based on the no of VMs and input file
		}
		addLinks()
		{
			//adding links between data centers
		}
}
