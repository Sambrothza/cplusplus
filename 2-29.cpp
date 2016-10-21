//========================================================================
// FILENAME		: 2-29.cpp
// CREATED		: October 21 2016
// AUTHOR		: Sam Luu Tong (SLT) aka Sambrothza
// DESCRIPTION	: Write a table with an integer, squared value, cubic value, and square root from 0-10.
//
//------------------------------------------------------------------------
//
// <REVISION> 	<DATE/AUTHOR> 			<CHANGE DESCRIPTION>
// 1.0 			<21-10-16 / SLT> 		<Initial version>
//========================================================================

#include <iostream>
#include <math.h> // For sqrt() function
int main()
{
	std::cout << "integer\tsquare\tcube\tsqrt" << std::endl;
	
	for(int i = 0; i < 11; i++)
	{
		std::cout << i << "\t" << i*i << "\t" << i*i*i << "\t" << sqrt(i) << std::endl;
	}
	return 0;
}