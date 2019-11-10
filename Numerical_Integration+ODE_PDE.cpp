// Numerical_Integration+ODE_PDE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Integrate following function 1) y = lnx 

#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{

	double interval_width = 0.25; 
	double integral_value_Trapezoidal = 0.0, integral_value_Simpson = 0.0;

	
	double x[9] = { 1.0,1.25,1.5,1.75,2.0,2.25,2.5,2.75,3.0 };
	double ylnx[9] = { log(1.0), log(1.25), log(1.5), log(1.75), log(2.0), log(2.25), log(2.5), log(2.75), log(3.0) };
	
	//Trapezoidal Method
	double a = 0.5 * (log(1.0) + log(3.0)); //First + last ordinate
	double b = log(1.25) + log(1.5) + log(1.75) + log(2.0) + log(2.25) + log(2.5) + log(2.75);
	integral_value_Trapezoidal = interval_width * (a + b);
	
	
	 
	
	//Simpson Method
	double even = 4 * (log(1.25) + log(1.75) + log(2.25) + log(2.75));
	double odd =  2 * (log(1.0) + log(1.5) + log(2.0) + log(2.5) + log(3.0));
	double z = 0.3333333333 * interval_width;
	
	integral_value_Simpson = z * (log(1.0) + log(3.0) + even + odd);
	


	cout << " Actual Value y = lnx: " << (3 * log(3)) - 2<<endl;
	cout << "Using Trapezoidal y = lnx: " << integral_value_Trapezoidal << endl;
	cout << "Using Simpson y = lnx: " << integral_value_Simpson << endl;


	return 0;
}


