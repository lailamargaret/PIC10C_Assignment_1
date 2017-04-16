#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;



// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {
	//seed random numbers
	srand((int)time(0));


	/* --STATEMENTS-- */

	Card c;
	cout << c.get_english_rank()<< endl;
	cout << c.get_spanish_rank() << endl;

	cout << c.get_english_suit() << endl;
	cout << c.get_spanish_suit() << endl;

	return 0;
}