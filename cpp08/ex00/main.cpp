#include "easyfind.hpp"
#include <vector>
#include <array>

int main(void)
{
	std::vector<int> vect;
	vect.push_back(8);
	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(7);
	vect.push_back(28);
	vect.push_back(11);
	std::cout << "found '5' at " << easyfind(vect, 5) << std::endl;
	std::cout << "found '28' at " << easyfind(vect, 28) << std::endl;
	std::cout << "found '8' at " << easyfind(vect, 8) << std::endl;
}
