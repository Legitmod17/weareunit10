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
			cout << "[ + ] Угаданных чисел: [ " << wins << " / 3 ]" << endl;
			cout << "[ + ] Попыток: [" << chance << ']' << endl;
			cout << endl;
			cout << "[>] Угадать число : ";
			cin >> guess;


			if (guess < 1 || guess > 10) {
				cout << "\x1b[33m[!] Ошибка! Введите число от 1 до 10\x1b[0m" << endl;
				cout << endl;



				cin.clear();
				cin.ignore(10000, '\n');
				continue;
			}

			else if (!guessed1 && guess == num1) {
				cout << "\x1bх[92m[ + ] Вы  угадали число!\x1b[0m" << endl;
				wins++;
				guessed1 = true;
			}

			else if (!guessed2 && guess == num2) {
				cout << "\92m[ + ] Вы угадали число!\x1b[0m" << endl;
				wins++;
				guessed1 = true;
			}

			else if (!guessed3 && guess == num3) {
				cout << "\92m[ + ] Вы угадали число!"\x1b[0m" << endl;
					wins++;
				guessed3 = true;
			}

			else {
				cout << "\x1b[31m[ - ] Вы не угадали число!\x1b[0m" << endl;
				chance--;
				cout << endl;
			}

		}

		if (wins == 3) {
			cout << "\x1b[92m[ ПОБЕДА! ] Вы угадали все 3 числа!x1b[0m" << endl;
		}

		else {
			cout << "\x1b[31m[ Проигрыш ] У вас закончились попытки!\x1b[0m" << endl;
		}
	}
	return 0;
	}
