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
			std::cout <<'\n';
		} 
		else {
			fin.close();
			std::cout << "There is not that file! " << '\n';
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

		std::cout << '\n';
	}

	system("pause");

	return 0;

}
