#include "Polynomial.h"
#include <iostream>
#include <ostream>
#include <vector>
#include <sstream>

using namespace std;

//Student: Fareed,Tejus,Kamil



Polynomial::Polynomial(vector<int> i) // initializes the polynomial class and will also initialize vector a
{
a=i;
o=i;// will initialize a base vector called original
}

Polynomial Polynomial::add(Polynomial b)// will add two vectors together, will need to be passed another class polynomial
{
        setV(o);//will reset the value of the base vector
	int sa= get_coefficients().size();
	int sb=b.get_coefficients().size();
        //will resize the vectors to the size of the largest vector
	if(sa>sb)
	{
            b.resize(sa);
	}
	if(sb>sa)
	{  
            resize(sb);
        }
        // will recheck to make sure both vectors are of the same length
    	if(b.get_coefficients().size()==get_coefficients().size())

        {
		for(int i=0;i<get_coefficients().size();i++)//will go through the length of the array
		{
			addv=b.get_coefficients()[i]+get_coefficients()[i];// will take the values at i and add them together and store them in an int
                        a[i]=addv;//will reassign vector a with the added values
		}
                Polynomial add(a);//will create another polynomial class called add
                return add;                
	}
}




Polynomial Polynomial::subtract(Polynomial b)// will subtract two vectors, will also need to be passed another polynomial class
{
        setV(o);
       //will store the sizes of the two vectors in ints
	int sa= get_coefficients().size(); 
	int sb=b.get_coefficients().size();
        //will resize the vectors to the largest value
	if(sa>sb)
	{
               b.resize(sa); 
	}
	if(sb>sa)
	{  
		resize(sb);
	}
    // will recheck to make sure the vectors are of same length
    if(b.get_coefficients().size()==get_coefficients().size())
         {
		for(int i=0;i<get_coefficients().size();i++)//will go through the length of the array
		{
			subtractv= get_coefficients()[i]- b.get_coefficients()[i];// will take the values at i and subtract them and store them in an int
                        a[i]=subtractv;//will reassign the values of a to the new subtracted value
		}
                Polynomial subtract(a);// will create another polynomial class to store the subtracted values
                return subtract;         
	}
}


// will resize the vector of the class
void Polynomial::resize(int size)
{
    a.resize(size);
}
    
    
// will multiply the vector by a scalar value
Polynomial Polynomial::scalar(int scalarV) 
{
        setV(o);
	int  newV;
	//will go through the length of the vector and multiply each number by the scalar value 
	for(int i=0;i<get_coefficients().size();i++)
	{
		newV=scalarV*get_coefficients()[i];
                a[i]=newV;//will re assign values of vector a to the new scalar values
		
	}
	Polynomial scalar(a);
        return scalar;
}


// will evaluate the polynomial at a certain value
double Polynomial::evaluate(double x)             
{ 
    setV(o);
    // will store the last value of the vector
    double horner = get_coefficients()[get_coefficients().size()-1];                    
	//will go through the length of the array starting from the second to last value
	for (int i= get_coefficients().size() - 2; i>=0; i--){
               //will use a recursive formula to solve the evaluation
		horner *= x;
                horner+= get_coefficients()[i];
	}
        return horner;
}


//will give the degree of the polynomial
int Polynomial::degree()    
{
        setV(o);
	int power;
	power=get_coefficients().size()-1;
	return power;
}


// an accessor method for the private vector a; 
vector<int>  Polynomial::get_coefficients()const
{	
    return a; 
        
	
}


// a set function that will reassign a to its original value
void Polynomial::setV(vector<int> s)
{
    a=s;
}



// will output the vector a in a polynomial format
string Polynomial::to_string() const
{
        using std::stringstream;
        stringstream holder;
        string output;
//will go through the length of the vector from the end to the start of the vector
for(int i=get_coefficients().size()-1;i>=0;i--)
{
 //will check if i is 0 to avoid errors
    if(i!=0)
    {
        //will make sure not to print 0s into the polynomial
        if(get_coefficients()[i]!=0)
          {   
                  holder<<get_coefficients()[i]<<"x^"<<i<<"+";
          }  
    }
    // will store the non x value
    else
    {
        holder<<get_coefficients()[i];
    }
}
//will convert the stringstream into a string
output= holder.str();
return output;
}


//will override the cout operator and will allow the user to cout functions of the class
ostream& operator<<(ostream& os,const Polynomial& obj)
{
    os << obj.Polynomial::to_string();
    return os;
}


















