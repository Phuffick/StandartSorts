#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <time.h>



template <class tn>
class Array {
private:

	tn* a;
	int n;

public:

	Array(int N) {

		n = N;

		a = new tn[N];

		for (int i = 0; i < N; ++i) {

			a[i] = rand() % 40;

		}

	};

	Array(std::string FileName) {

		std::ifstream fin(FileName);

		if (fin.is_open()) {

			fin >> n;

			a = new tn[n];

			for (int i = 0; i < n; ++i)

				fin >> a[i];

			fin.close();

		}

	};

	~Array() {

		delete[] a;

	};

	int getN() {

		return n;

	};

	void PrintArray() {

		for (int i = 0; i < n; i++) {

			std::cout << a[i] << "; ";

		}

		std::cout << std::endl;

	};

	void FileOutputting(std::string FileName) {

		std::ofstream fout(FileName);

		for (int i = 0; i < n; i++) {

			fout << a[i] << "; ";

		}

		std::cout << std::endl;

	};

	void BubbleSort() {

		for (int i = 0; i < n; ++i)

			for (int j = 0; (j < n); ++j)

				if (a[j] > a[i])

					std::swap(a[i], a[j]);

	};

	void ChoiceSort() {

		int max;

		for (int i = 0; i < n; ++i) {

			max = i;

			for (int j = i + 1; (j < n); ++j) {

				if (a[j] > a[max])

					max = j;

			}

			std::swap(a[i], a[max]);

		}

	};

	void InsertSort() {

		for (int i = 1; i < n; ++i)

			for (int j = i; (j > 0) && (a[j] > a[j - 1]); --j)

				std::swap(a[j], a[j - 1]);

	};

	void BinaryFinnd(tn num) {

		bool flag = true;

		int left = 0;

		int right = n - 1;

		int mid = 0;

		while (flag && (left <= right))
		{
			mid = (left + right) / 2;

			if (a[mid] == num) {

				std::cout << "Number " << num << " with index " << mid << std::endl;

				flag = false;

			}

			if (a[mid] > num)

				right = mid - 1;

			if (a[mid] < num)

				left = mid + 1;

		}

		if (flag)

			std::cout << "There is not number " << num << std::endl;

	};

	template<class tn>
	friend std::ostream& operator << (std::ostream& out, tn& obj) {

		for (int i = 0; i < obj.getN(); i++) {

			out << obj.a[i] << "; ";

		}

		return out;

	};

};