#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	srand(time(0));
	const int size = 1000;
	int user_size;
	cout << "Введіть размір масива: ";
	cin >> user_size;
	
	int numbers[size];
	for (int i = 0; i < user_size; i++) {
		numbers[i] = rand() % 200 - 100;
	}
	int min = numbers[0];
	int max = numbers[0];
	for (int i = 1; i < user_size; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
		else if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	cout << "Масив: ";
	for (int i = 0; i < user_size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Мінімальний елемент: " << min << endl;
	cout << "Максимальний елемент: " << max << endl;
    return 0;
}

