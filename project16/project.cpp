#include <iostream>
using namespace std;

void clearCon() {
	system("cls");
	cout << "Консоль очищенна :)" << endl;
	exit(0);	
}

void changeColorCon() {
	system("color A0");
}

void changeColorText() {
	system("color 0A");
}

void getSizeInt() {
	cout << "Размер типа данных INT: " << sizeof(int) << " байта";
}

void getSizeChar() {
	cout << "Размер типа данных CHAR: " << sizeof(char) << " байта";
}

void getSizeDouble() {
	cout << "Размер типа данных DOUBLE: " << sizeof(double) << " байта";
}

void getSizeFloat() {
	cout << "Размер типа данных FLOAT: " << sizeof(float) << " байта";
}

void getSizeBool() {
	cout << "Размер типа данных BOOL: " << sizeof(bool) << " байта";
}


void showMessage() {
	cout << "“Привет, я функция”";
}

void showSquare() {
	short length_sq = 5;
	short lenght_sq2 = length_sq;
	cout << endl;
	while (lenght_sq2 != 0) {
		short lenght_sq3 = length_sq;
		while (lenght_sq3 != 0) {
			cout << "#" << " ";
			lenght_sq3 -= 1;
		}
		cout << endl;
		lenght_sq2 -= 1;
	}
}


int main()
{
	setlocale(0, "");
	int number_Fun;
	cout << "[ + ] Программа - “Функции”" << endl << endl;
	cout << "[1] Очищение консоли" << endl;
	cout << "[2] Изменение цвета фона консоли" << endl;
	cout << "[3] Изменение цвета текста консоли" << endl;
	cout << "[4] Вывод размера типа данных INT" << endl;
	cout << "[5] Вывод размера типа данных CHAR" << endl;
	cout << "[6] Вывод размера типа данных DOUBLE" << endl;
	cout << "[7] Вывод размера типа данных FLOAT" << endl;
	cout << "[8] Вывод размера типа данных BOOL" << endl;
	cout << "[9] Вывод сообщения “Привет, я функция”" << endl;
	cout << "[10] Вывод квадрата 5x5" << endl << endl;
	cout << "Выберите функцию: ";
	
	cin >> number_Fun;
	switch (number_Fun)
	{
	case 1: 
		clearCon();	
		  break;

	case 2:	
		changeColorCon();
	break;

	case 3:	
		changeColorText();
	break;

	case 4:	
		getSizeInt();
	break;

	case 5:	
		getSizeChar();
	break;

	case 6:	
		getSizeDouble();	
	break;

	case 7:	
		getSizeFloat();	
	break;

	case 8:	
		getSizeBool();	
	break;

	case 9:	
		showMessage();
	break;

	case 10:	
		showSquare();	
	break;
	default:
	{
		system("cls");
		cout << "Вы ввели некорректное значение!!!";
	}
	break;
	}
	int _; cin >> _;
	return 0;
}
