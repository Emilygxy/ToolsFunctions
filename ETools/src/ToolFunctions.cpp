#include "ToolFunctions.h"
#include<sstream>
#include <iomanip>

namespace eTools
{
	float FormatValueToFloat1(float val, int fixed)
	{
		std::ostringstream oss;
		std::string result;
		oss << std::fixed << std::setprecision(fixed) << val;

		return float(std::atof(oss.str().c_str()));
	}
	std::string FormatValueToString(float val, int fixed)
	{
		std::string str = std::to_string(val);
		if (fixed == 1)
		{
			float newNum = val * 10.0f + 0.5f;
			float finalNum = newNum / 10.0f;
			str = std::to_string(finalNum);
		}
		else if (fixed == 2)
		{
			float newNum = val * 100.0f + 0.5f;
			float finalNum = newNum / 100.0f;
			str = std::to_string(finalNum);
		}
		else if (fixed == 3)
		{
			float newNum = val * 1000.0f + 0.5f;
			float finalNum = newNum / 1000.0f;
			str = std::to_string(finalNum);
		}
		else if (fixed == 4)
		{
			float newNum = val * 10000.0f + 0.5f;
			float finalNum = newNum / 10000.0f;
			str = std::to_string(finalNum);
		}
		else if (fixed == 5)
		{
			float newNum = val * 100000.0f + 0.5f;
			float finalNum = newNum / 100000.0f;
			str = std::to_string(finalNum);
		}

		return str.substr(0, str.find(".") + fixed + 1);
	}

	float FormatValueToFloat(float val, int fixed)
	{
		auto result = FormatValueToString(val,fixed);
		return float(std::atof(result.c_str()));
	}

}