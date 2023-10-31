#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int dayNumber, z = 0;
	do {
		cout << "Введите номер недели: ";
		cin >> dayNumber;
		cout << endl;
		if (dayNumber > 7) {
			cout << "Такого дня недели не существует\nВведите номер повторно: ";
			cin >> dayNumber;
		}
		if (dayNumber == 1) {
			cout << "Понедельник: \n Практика \n";
		}
		if (dayNumber == 2) {
			cout << "Вторник: \n Практика \n";
		}
		if (dayNumber == 3) {
			cout << "Среда: \n Практика \n";
		}
		if (dayNumber == 4) {
			cout << "Четверг: \n Практика \n";
		}
		if (dayNumber == 5) {
			cout << "Пятница: \n Практика \n";
		}
		if (dayNumber == 6) {
			cout << "Суббота: \n Отдых \n";
		}
		if (dayNumber == 7) {
			cout << "Воскресенье: \n Отдых \n";
		}
	} while (z < 7);

	return 0;
}
