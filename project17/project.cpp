
#include <iostream>

using namespace std;

void Calculator(double numb1, double numb2, char symb) {
    system("cls");
    switch (symb)
    {
    case '+':
        cout << numb1 << " + " << numb2 << " = " << numb1 + numb2;
        break;
    case '-':
        cout << numb1 << " - " << numb2 << " = " << numb1 - numb2;
        break;
    case '*':
        cout << numb1 << " * " << numb2 << " = " << numb1 * numb2;
        break;
    case '/':
        cout << numb1 << " / " << numb2 << " = " << numb1 / numb2;
        break;
    case '%':
        cout << numb1 << " % " << numb2 << " = " << (int)numb1 % (int)numb2;
        break;
    case '^':
        cout << numb1 << "^" << numb2 << " = " << pow(numb1, numb2);
        break;
    case '!':
        cout << numb1 << " * " << numb2 << " + " << "15" << " = " << numb1 * numb2 + 15;
        break;
    case '?':
        cout << numb1 << "^" << numb2 << " - " << "100" << " = " << pow(numb1, numb2) - 100;
        break;
    default:
        break;
    }
    cout << endl;
    int _;cin >> _;
}

int main() {
    setlocale(0, "");

    double number_1;
    double number_2;


    cout << "Введите первое число: ";
    cin >> number_1;

    cout << "Введите второе число: ";
    cin >> number_2;
    system("cls");


    cout << "	Калькулятор" << endl;
    cout << "[1] Сложение" << endl;
    cout << "[2] Разность" << endl;
    cout << "[3] Умножение" << endl;
    cout << "[4] Деление" << endl;
    cout << "[5] Остаток от деления" << endl;
    cout << "[6] Первое число в степени второго" << endl;
    cout << "[7] Функция: n1 * n2 + 15" << endl;
    cout << "[8] Функция: n1^n2 - 100" << endl << endl;

    cout << "Выберете действие: ";
    int symbol;
    cin >> symbol;

    switch (symbol) {
    case 1:
        Calculator(number_1, number_2, '+');
        break;
    case 2:
        Calculator(number_1, number_2, '-');
        break;
    case 3:
        Calculator(number_1, number_2, '*');
        break;
    case 4:
        Calculator(number_1, number_2, '/');
        break;
    case 5:
        Calculator(number_1, number_2, '%');
        break;
    case 6:
        Calculator(number_1, number_2, '^');
        break;
    case 7:
        Calculator(number_1, number_2, '!');
        break;
    case 8:
        Calculator(number_1, number_2, '?');
        break;
    default: cout << "no found sign";
    }

}
