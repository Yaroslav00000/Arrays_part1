#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	const int size = 4;
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
	int sum_between_min_and_max = 0;
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] < max) {
			max = arr[i];
		}
		for (int i = min; i < max; i++) {
		    sum_between_min_and_max *= arr[i];
		}
	}
	cout << "Сума елементів масиву, розташованих між мінімальним і максимальним елементами = " << sum_between_min_and_max << endl;
    return 0;
}

