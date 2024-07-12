// Branches Program - Calculating the roots of a quadratic equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
using namespace std;


int main() {


    //Run01 a = 1 ,b = -3 , c = 4;
    //Run02 a = -4, b = 12, c = -9;
    //Run03 = a = 2, b= -11, c = 5;

    double values(double a, double b, double c);
    double a;
    double b;
    double c;


    //Ask the user to enter values for a, b, and c. For example, print "a = " to the console and then read the value for a.
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;


    //Calculate and print the roots (if any). For a single root, print "r = <VALUE>". For 2 roots, print "r1 = <VALUE>" on one line and "r2 = <VALUE>" on the next.

    double discriminantRoots = pow(b, 2) - 4 * a * c;
    double positive_root = (((-b) + sqrt(discriminantRoots)) / (2 * a));
    double negative_root = (((-b) - sqrt(discriminantRoots)) / (2 * a));


    //Determine if the equation has 0, 1, or 2 roots. Print a message displaying the number of roots, for example: "The equation has 2 roots" or "The equation has 1 root" (Technically 1 solution is called a double root, but we’ll just call it 1 root for this activity).

    if (discriminantRoots < 0) {
        cout << "The equation has 0 real roots. \n";

    }
    else if (discriminantRoots == 0) {
        cout << "The equation has 1 real root. \n";
        cout << " r = " << positive_root;

    }
    else if (discriminantRoots >= 0) {
        cout << "The equation has 2 real roots. \n";
        cout << " r1 = " << negative_root << "\n";
        cout << " r2 = " << positive_root << "\n";
    }



}
