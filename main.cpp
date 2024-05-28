#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	const int size = 6;
	int arr[size];
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30 - 15;
		cout << arr[i] << " ";
	}
	cout << endl;
	int sum_min = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			sum_min += arr[i];
		}
	}
	cout << "Сума від'ємних елементів масиву = " << sum_min << endl;
	int sum_between_min_and_max = 1;
	int min = arr[0];
	int max = arr[0];
	int index_min = 0, index_max = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			index_min = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			index_max = i;
		}
	}
	if (index_min > index_max)
	{
		for (int i = index_min - 1; i > index_max; i--) {
			sum_between_min_and_max *= arr[i];
		}
	}
	else
	{
		for (int i = index_min + 1; i < index_max; i++) {
			sum_between_min_and_max *= arr[i];

		}
	}
	cout << "Добуток елементів масиву, розташованих між мінімальним і максимальним елементами = " << sum_between_min_and_max << endl;
	int product_even_numbers = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			product_even_numbers *= arr[i];
		}
	}
	cout << "Добуток парних елементів масиву = " << product_even_numbers << endl;
	return 0;
	int first_neg = -1, last_neg = -1, sum_between_neg = 0;
	
	cout << "Сума елементів масиву, розташованих між першим й останнім від'ємними елементами = " << sum_between_neg << endl;
    return 0;
}

