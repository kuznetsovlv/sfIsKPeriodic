#include <iostream>
#include <string>
#include "isKPeriodic.h"

void test(const std::string &str, const size_t k)
{
	if(isKPeriodic(str, k))
	{
		std::cout << "The string \"" << str << "\" is " << k << "-periodic." << std::endl;
	}
	else
	{
		std::cout << "The string \"" << str << "\" is not " << k << "-periodic." << std::endl;
	}
}

int main()
{
	test("abcabcabcabc", 3);
	test("abcabcabcabc", 6);
	test("abcabcabcabc", 9);
	test("abcabcabcabc", 4);

	test("abcabcabcabca", 3);
	test("ababab", 2);
	test("ababab", 1);
	test("aaaaaa", 1);

	return 0;
}
