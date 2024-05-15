#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int number[5] = { 1, 2, 3, 4, 5 };
	cout << "Массив: ";
	cout << number[0] << " " << number[1] << " " << number[2] << " " << number[3] << " " << number[4] << endl;
	for (int i = 4; i >= 0; i--) {
		cout << number[i] << " ";
    }
    return 0;
}

