#include <iostream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	std::string name;

	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << std::endl;

	return 0;
}