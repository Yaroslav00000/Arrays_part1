#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double month[12];
	for (int i = 0; i < 12; i++) {
        cout << "������ �������� �� ����� " << i + 1 << ": ";
		cin >> month[i];
	}
    int maxpricezp = 0;
	double maxzp = month[0];
    for (int i = 1; i < 12; i++) {
        if (month[i] > maxzp)
        {
			maxzp = month[i];
			maxpricezp = i;
        }
    }
	int minpricezp = 0;
	double minzp = month[0];
	for (int i = 1; i < 12; i++) {
		if (month[i] < minzp)
		{
			minzp = month[i];
			minpricezp = i;
		}
	}
	cout << "������������ �������� ��� � ����� " << maxpricezp + 1 << " �� �� �������� " << maxzp << endl;
    return 0;
}

