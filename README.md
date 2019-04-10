C++ program built to do calculations of polynomials.



#About
	List of functions:

	-add(will require another Polynomial class as a parameter)
	-subtract(will require another Polynomial class as a parameter)
	-scalar(will require an int value)
	-evaluate(will require a double value)
	-get_coefficients()
	-degree()
	-newV(will require another vector<int>)
	-resize(will require an int value)

	Explanation of functions:

	add- will add two different polynomials together and output the result
	subtract- will subtract two different polynomials together and output the result
	scalar- will multiply the coefficients of the polynomial by a scalar value inputed by the user
	evaluate- will evaluate the polynomial at a certain value inputed by the user
	get_coefficients-will return the coefficients of the polynomial
	degree- will return the degree of the polynomial
	newV- will reassign the base vector of the class to its original value
	resize-will resize the base vector of the class to an int value inputed by the user




#Install
  --C++
   
#How to Run
  --g++ -o test Polynomial.cpp Polynomial.h test.cpp
  
  -- ./test          //to see the results

  --In the test.cpp, file you can input your own numbers.



#Results
	The results should show this
		  
	input
	The values of the vector u are --  2 4 1                                                                                                                                                                                         
	v was used to construct the polynomial -- 7x^3+3x^2+2x^1+1                                                                                                                                                                       
	m was used to contruct the polynomial -- 1x^2+4x^1+2                                                                                                                                                                             
	I can add polynomials by p.add(q) -- 7x^3+4x^2+6x^1+3                                                                                                                                                                            
	I can subtract polynomials by q.subtract(p) -- -7x^3+-3x^2+-2x^1+-1                                                                                                                                                              
	I can multiple by integer scalars p.scalar(-5) -- -35x^3+-15x^2+-10x^1+-5                                                                                                                                                        
	I can evaluate a polynomial at a duble q.evaluate(-1.54) -- -1.7884                                                                                                                                                              
	The degree of p is -- 3                                                                                                                                                                                                          
	The coefficents of q are  --  2 4 1 