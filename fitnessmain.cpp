#include <iostream>
#include <fstream>
#include <string>
#include "FITNESSTRACKER.H"

using namespace std;



int main()
{
	fitnessTracker fit;

	fit.calculateMetabolism();
	fit.weightManagement();
	fit.calculateMacros();
	fit.printInformation();
   
	

	system("PAUSE");
    return 0;



}
