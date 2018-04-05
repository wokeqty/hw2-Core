#include <iostream>
#include <cstdlib>
#include <ctime>

#include "generator.h"

using namespace std;


int main() {
	srand(time(0));
	Generator generator;
	generator.generate();
	cout << "hello world" << endl;
	return 0;
}