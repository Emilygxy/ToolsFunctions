#include<iostream>
#include"ToolFunctions.h"

int main()
{
	float ad = 1.2356478f;
	std::cout<< eTools::FormatValueToFloat(ad,3) <<std::endl;
	return 0;
}