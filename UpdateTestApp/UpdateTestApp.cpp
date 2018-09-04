// UpdateTestApp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ManagedInterface.h"


int main()
{	
	//try {
		ManagedInterface ^thing = gcnew ManagedInterface();
		thing->callDisplayVersion();
	//}
	//catch () {

	//}
    return 0;
}

