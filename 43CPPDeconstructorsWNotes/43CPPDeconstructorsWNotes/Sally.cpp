#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally() {

	cout << "I am the consructor" << endl;
}


Sally::~Sally() {

	cout << "I am the deconstructor" << endl;
}

//A deconstuctor is code that runs automatically upon distruction of you object.  At end of program
//when memory is getting freed, program is ending and objects are being destroyed this runs.
//As soon as object is destroyed this runs.

//Whenever you are creating a deconstuctor can not carry parameters. It also has no return.  Not even void.

//There is no deconstructor overloading.  You have 1 deconstuctor and that is it.
