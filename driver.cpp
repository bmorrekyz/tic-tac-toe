#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	/* create an input file stream object */
	ifstream inFile (argv[1], ifstream::in);

	/* validate that enough arguments were passed */
	if (argc == 2 && inFile.is_open()) 
	{
		cout << "input file is: " << argv[1] << endl;
	}

	/* display errors */
	else 
	{
		if (argc != 2) cerr << "Error: not enough arguments were passed." << endl;
		else { cerr << "Error: The input file was not found." << endl; }
		
	}


	return 0;
}