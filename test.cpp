#include <vector>
#include <iostream>
#include "Polynomial.h"
using namespace std;

int main() 
{



//Create two vectors to be coefficient vectors
vector<int> v(4);

v[0]=1;
v[1]=2;
v[2]=3;
v[3]=7;

vector<int> u(3);

u[0] =2;
u[1] =4;
u[2] =1;



//Create to polynomials from the vectors above
Polynomial p(v);
Polynomial q(u);


vector<int>::iterator Iter;
cout << "The values of the vector v are -- ";
for(Iter =v.begin(); Iter != v.end(); Iter++)  cout<<" "<<*Iter;

cout<<endl;

cout << "The values of the vector u are -- ";
for(Iter =u.begin(); Iter != u.end(); Iter++)  cout<<" "<<*Iter;

cout<<endl;



cout << "v was used to construct the polynomial -- " << p << endl;
cout << "m was used to contruct the polynomial -- " << q <<endl;
cout << "I can add polynomials by p.add(q) -- " << p.add(q) << endl;
cout << "I can subtract polynomials by q.subtract(p) -- " << q.subtract(p) <<endl;
cout << "I can multiple by integer scalars p.scalar(-5) -- " << p.scalar(-5) <<endl;
cout << "I can evaluate a polynomial at a duble q.evaluate(-1.54) -- " << q.evaluate(-1.54) <<endl;
cout << "The degree of p is -- " << p.degree() <<endl;
cout << "The coefficents of q are  -- ";
vector<int> t = q.get_coefficients();
for(Iter =t.begin(); Iter != t.end(); Iter++)  cout<<" "<<*Iter;
cout<<endl;





return 0;
}
