//========================================================================
// FILENAME		: 2-19.cpp
// CREATED		: October 18 2016<Creation date>
// AUTHOR		: Sam Luu Tong (SLT) aka Sambrothza
// DESCRIPTION	: Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers.
//
//------------------------------------------------------------------------
//
// <REVISION> 	<DATE/AUTHOR> 			<CHANGE DESCRIPTION>
// 1.0 			<18-10-16 / SLT> 		<Initial version>
//========================================================================

#include <iostream>

int main()
{
	// Define inputs of integers
	int a, b, c;
	
	std::cout << "Input three different integers: ";
	std::cin >> a >> b >> c;
	
	// Sum
	std::cout << "Sum is " << a + b + c << std::endl;
	
	// Average
	std::cout << "Average is " << (a + b + c)/3 << std::endl;
	
	// Product
	std::cout << "Product is " << a * b * c << std::endl;
	
	// Smallest
	if(a < b && a < c)
		std::cout << "Smallest is " << a << std::endl;
	else if(b < c && b < a) 
		std::cout << "Smallest is " << b << std::endl;
	else
		std::cout << "Smallest is " << c << std::endl;

	// Largest
	if(a > b && a > c)
		std::cout << "Largest is " << a << std::endl;
	else if(b > c && b > a) 
		std::cout << "Largest is " << b << std::endl;
	else
		std::cout << "Largest is " << c << std::endl;
		
	return 0;
}