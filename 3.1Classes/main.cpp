#include <iostream>
#include "classes.h"
#include <string>
using namespace std::string_literals;
int main()
{
	Circle a;
	Circle c{ Point{0,0},1.0,Color{'R','G'},false};
	std::cout << c.getColor().getBordColor() << std::endl;
	return 0;
}