#include "Sally.h"
#include <iostream>
using namespace std;

int main() {

	Sally so; //Right after so (sally object are constructor will be called) Which displays
	//I am the constructor to the screen. Then it runs the program and the follwing runs:
	cout << "omg what's on my shoe!" << endl;
}
//What happens right outside man after the program has run:
//When it c++ gets to the end of the program it destroys all objects. This is where the
//deconstructor will be called by defualt.