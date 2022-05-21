#include <iostream>
#include "Configuration.h"

using namespace std;

int main()
{
	cout << "Starting..." << endl;
	cout << "Version    = " << Version() << endl;
	cout << "Key        = " << Key() << endl;
	cout << "Environment= " << Environment() << endl;
	cout << endl << "Done" << endl;
	
}