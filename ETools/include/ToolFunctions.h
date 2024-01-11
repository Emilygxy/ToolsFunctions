#pragma once
#include <string>

namespace eTools
{
	/* @Discription Retained decimal places
	** @Parameter val means input number.
	** @Parameter fixed indicates the number of decimal places to be retained.
	*/
	float FormatValueToFloat(float val, int fixed);
	std::string FormatValueToString(float val, int fixed);
	float FormatValueToFloat1(float val, int fixed);
}