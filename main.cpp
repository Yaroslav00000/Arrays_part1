#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int diapazon1, diapazon2;
    double month[12];
    for (int i = 0; i < 12; i++) {
        cout << "������ �������� �� ����� " << i + 1 << ": ";
        cin >> month[i];
    }
	cout << "������ ������� �������� (�� 1 �� 12): ";
	cin >> diapazon1;
	cout << "������ ����� �������� (�� 1 �� 12): ";
	cin >> diapazon2;
	if (diapazon1 < 1 || diapazon1 > 12 || diapazon2 < 1 || diapazon2 > 12) {
		cout << "�� ����� ������� �������!" << endl;
		return 0;
	}
	int maxzp = diapazon1 - 1;
	double maxprif = month[diapazon1 - 1];
	for (int i = diapazon1; i < diapazon2; i++) {
		if (month[i] > maxprif) {
			maxprif = month[i];
			maxzp = i;
		}
	}
	int minzp = diapazon1 - 1;
	double minprif = month[diapazon1 - 1];
	for (int i = diapazon1; i < diapazon2; i++) {
		if (month[i] < minprif) {
			minprif = month[i];
			minzp = i;
		}
	}
	cout << "������������ �������� � ����� " << maxzp + 1 << " � ������� " << maxprif << endl;
	cout << "̳�������� �������� � ����� " << minzp + 1 << " � ������� " << minprif << endl;
    return 0;
}

