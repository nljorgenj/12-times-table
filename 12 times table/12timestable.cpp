#include <iostream>


using namespace std;

int main() {

	int twelve[13];

	for (int i = 0; i < 13; i++) {
		twelve[i] = 12 * i;
	}

	for (int i = 0; i < 13; i++) {
		cout << "12 * " << i << " = " << twelve[i] << endl;
	}


	return 0;
}