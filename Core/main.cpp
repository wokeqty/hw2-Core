#include <iostream>
#include <cstdlib>
#include <ctime>

#include "generator.h"

using namespace std;


int main() {
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		cout << rand() << endl;
	}
	cout << "hello world" << endl;
	return 0;
}