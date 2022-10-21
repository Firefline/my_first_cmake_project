#include <iostream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;

	return 0;
}