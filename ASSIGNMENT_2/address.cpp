//Operating Systems Assignment 2
//Michael Vanderbilt and Matthew Chan
//Convert virtual address to physical address using
//page system
//Page is 4 kB or 4096 bytes. Divide virtual address
//by 4096 to determine page location and modulo to
//determine offset location on page.

#include<stdlib.h>
#include<iostream>

using namespace std;

void address_translation(unsigned int address) {
	cout<<"The address "<<address<<" contains"<<"\n";
	cout<<"page number = "<<address/4096<<"\n";
	cout<<"offset = "<<address%4096<<"\n";
}


int main (int argc, char* argv[]) {
unsigned int address = stoi(argv[1]);
address_translation(address);
return 0;
}

