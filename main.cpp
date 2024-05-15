#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int diapazon1, diapazon2;
    double month[12];
    for (int i = 0; i < 12; i++) {
        cout << "¬вед≥ть прибуток за м≥с€ць " << i + 1 << ": ";
        cin >> month[i];
    }
	cout << "¬вед≥ть початок д≥апазону (в≥д 1 до 12): ";
	cin >> diapazon1;
	cout << "¬вед≥ть к≥нець д≥апазону (в≥д 1 до 12): ";
	cin >> diapazon2;
	if (diapazon1 < 1 || diapazon1 > 12 || diapazon2 < 1 || diapazon2 > 12) {
		cout << "¬и ввели нев≥рний д≥апазон!" << endl;
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
	cout << "ћаксимальний прибуток у м≥с€ц≥ " << maxzp + 1 << " ≥ дор≥внюЇ " << maxprif << endl;
	cout << "ћ≥н≥мальний прибуток у м≥с€ц≥ " << minzp + 1 << " ≥ дор≥внюЇ " << minprif << endl;
    return 0;
}

