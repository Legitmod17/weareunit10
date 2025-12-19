#include <iostream>
using namespace std;
int main() {
	setlocale(0, "ru");
	srand(time(NULL));
	int menu;
	int start = 1;
	int max = 10;
	int chance = 5;
	int guess;
	int wins = 0;

	cout << "[Меню]" << endl;
	cout << endl;
	cout << "[Начать игру]" << endl;
	cout << "[Выйти]" << endl;
	cin >> menu;

	if (menu == 2) {
		cout << "\x1b[31mВыход из системы..\x1b[0m" << endl;
		return 0;
	}

	if (menu == 1) {
	int num1, num2, num3;
	num1 = rand() % max + start;

	

	do {
		num2 = rand() % max + start;
	} while (num3 == num1 || num3 = num3);

	bool guessed1 = false;
	bool guessed2 = false;
	bool guesses2 = false;

	while (chance > 0 && wins < 3) {

	}









	}
