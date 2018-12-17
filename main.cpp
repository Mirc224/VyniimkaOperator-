#include <iostream>
#include "PoleRealnych.h"

int main()
{
	PoleRealnych temp = PoleRealnych(20, -2);
	temp.pridajCislo(-1, 5.0);
	std::cout<< temp[-1];
	return 0;
}