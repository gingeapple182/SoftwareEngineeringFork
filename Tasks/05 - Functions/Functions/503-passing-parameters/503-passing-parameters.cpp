#include <iostream>
using namespace std;

void displayBanner(int stringLen);
void displayInBanner(string message);

int main()
{
	const string message = "Help I'm trapped inside this box";

	//using the void functions above
	displayInBanner(message);
	cout << "  I ESCAPED" << endl;

	//Tell the calling shell all is well
	return 0;
}

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayInBanner(string message)
{
	int L = message.length();			//L is now a LOCAL variable

		//Write the banner above
		displayBanner(L);

		cout << "* ";				//Leading *
		cout << message;			//Message
		cout << " *" << endl;		//Trailing *

		//Write the banner below
		displayBanner(L);
}