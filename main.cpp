#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	
	double arr[6];
	for (int i = 0; i < 6; i++) {
		cout << "¬вед≥ть прибуток за м≥с€ць " << i+1 << ": ";
		cin >> arr[i];
	}
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		sum += arr[i];
	}
	cout << "—ума прибутку за п≥вр≥чч€: " << sum << endl;
    return 0;
}

