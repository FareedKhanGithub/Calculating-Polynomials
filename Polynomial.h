#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
using namespace std;

class Polynomial
{
	private://will create the vectors and int here for use throughout the methods
		vector<int> a;// the vector that is given to the class by the user
		vector<int> o; // the "original" vector will be used to store the initial vector passed to the class
                int addv;//will store the added values of vectors
		int subtractv;//will store the subtracted values of vectors
            
		
	public:
                
	Polynomial(vector<int> i);// will initialize the class and will be given a vector by the user
	Polynomial add(Polynomial b);//will add 2 polynomials
        void setV(vector<int> s);// will re assign the a vector back to the original value
        void resize(int size);//will resize the "a" vector
        Polynomial subtract(Polynomial b);//will subtract 2 polynomials
	double evaluate(double x);//will evaluate the polynomial at a double value
	Polynomial scalar(int scalarV);//will multiply the polynomial by a scalar value
	vector<int>  get_coefficients()const;//will return the coefficients of the base vector to the user
	int degree(); //will output the degree of the polynomial to the user
        string to_string() const;//will convert the vector into a polynomial format for the user
        friend ostream& operator<<(ostream& ,const Polynomial&);//will overide the cout function and allow output of polynomial functions
        // We are using the default deconstructor because the vector class will delete any user inputed memory.
        //For example, it will delete all the vectors we have passed into the polynomial classes.
};
 #endif 
