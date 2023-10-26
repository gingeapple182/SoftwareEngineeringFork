#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

void displayBanner()
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

int main()
{
	const string message = "How many pounds in a groundhogs mound if a groundhog pounds hog mounds";
	
	//Get the length of the string
	L = message.length();

	//Write the banner above
	displayBanner();
	
	cout << "* " << message << " *" << endl;

	//Write the banner below
	
	displayBanner();

	//Tell the calling shell all is well
	return 0;
}