#include <iostream>
#include "class.h"


int main() {

	std::string Name;

	std::cout << "Input name of the file: ";

	getline(std::cin, Name, '\n');

	if (!empty(Name)) {

		std::ifstream fin(Name);

		if (fin.is_open()) {

			fin.close();

			Array <int> arr(Name);

			arr.PrintArray();
			arr.ChoiceSort();
			arr.PrintArray();
			arr.BubbleSort();
			arr.PrintArray();
			arr.InsertSort();
			arr.PrintArray();
			arr.BinaryFinnd(38);
			std::cout << std::endl;
		}

		else {

			fin.close();

			std::cout << "There is not that file! " << std::endl;

		}

	}

	else {

		Array <int> arr(10);

		arr.PrintArray();
		arr.ChoiceSort();
		arr.PrintArray();
		arr.InsertSort();
		arr.PrintArray();
		arr.BubbleSort();
		arr.PrintArray();
		arr.BinaryFinnd(24);

		std::cout << std::endl;

	}

	system("pause");

	return 0;

}