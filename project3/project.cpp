
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "Калькулятор." << endl;
    cout << "[+] складывать" << endl;
    cout << "[-] вычитать" << endl;
    cout << "[*] умножать" << endl;
    cout << "[/] делить" << endl;
    cout << "[%] деление от остатка" << endl;

    double number_1;
    double number_2;
    double number_3;
    cout << "[] Введите первое число: ";
    cin >> number_1;
    cout << "[] Введите второе число: ";
    cin >> number_2;


    char symbol = ' ';
    cout << "[] Введите знак: ";
    cin >> symbol;
    if (symbol == '+') {
        number_3 = number_1 + number_2;
        cout << "Результат: " << number_1 << " + " << number_2 << " = " << number_3;
    }
    else if (symbol == '-') {
        number_3 = number_1 - number_2;
        cout << "Результат: " << number_1 << " - " << number_2 << " = " << number_3;
    }
    else if (symbol == '*') {
        number_3 = number_1 * number_2;
        cout << "Результат: " << number_1 << " * " << number_2 << " = " << number_3;
    }
    else if (symbol == '/') {
        if (number_1 == 0 or number_2 == 0) {
            cout << "Делить на 0 нельзя!!!";
        }
        else {
            number_3 = number_1 / number_2;
            cout << "Результат: " << number_1 << " / " << number_2 << " = " << number_3;
        }
    }
    else if (symbol == '%') {
        
        if (number_1 == 0 or number_2 == 0) {
            cout << "Делить на 0 нельзя!!!";
        }
        else {
            number_3 = (int)number_1 % (int)number_2;
            cout << "Результат: " << number_1 << " % " << number_2 << " = " << number_3;
        }
    }
    else {
        cout << "Несуществующий оперратор!!!";
    }

    return 0;
    int _; cin >> _;
}
