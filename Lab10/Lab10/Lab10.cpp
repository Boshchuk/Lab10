#include "stdafx.h" 
#include <iostream>
 #include <conio.h>
 #include <string>
using namespace std;

void Print(unsigned a)
{
	if (a)
	{
		Print(a >> 1);
		std::cout << (a & 1);
	}
}
int main()
{
	unsigned a;
	std::cin >> a;
	Print(a);
	return 0;
}