#include <string>
#include "isKPeriodic.h"

bool isKPeriodic(const std::string &str, const size_t k)
{
	if(!k || str.empty() || str.size() % k)
	{
		return false;
	}

	for(size_t i = k; i <= str.size() - k; i += k)
	{
		for(size_t j = 0; j < k; ++j)
		{
			if(str[i + j] != str[j])
			{
				return false;
			}
		}
	}

	return true;
}
