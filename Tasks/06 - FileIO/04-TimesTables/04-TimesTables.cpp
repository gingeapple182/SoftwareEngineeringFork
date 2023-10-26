#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream sendToTheFrench;
	sendToTheFrench.open("eggplant.txt");

	if (sendToTheFrench.is_open() == false) {
		cerr << "Cannot create the file you twit" << endl;
		return -1;
	}

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			sendToTheFrench << r * c << "\t";
		}
		sendToTheFrench << endl;
	}
	sendToTheFrench << endl;

	return 0;
}