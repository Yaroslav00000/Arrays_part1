#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	double arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "������ ������� ������� " << i + 1 << ": ";
		cin >> arr[i];
	}
	double perumetr = 0;
	for (int i = 0; i < 5; i++) {
		perumetr += arr[i];
	}
	cout << "�������� �'����������: " << perumetr << endl;
    return 0;
}

