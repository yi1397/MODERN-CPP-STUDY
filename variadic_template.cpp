#include <iostream>

template<typename First>
void print(const First& first)
{
	std::cout << first << " : " << typeid(first).name() << std::endl;
}

template<typename First, typename... Rest>
void print(const First& first, const Rest&... rest)
{
	std::cout << first << " : " << typeid(first).name() << std::endl;
	return print(rest...);
}

int main()
{
	print(1, 2, "asdf", 'a');
	return 0;
}