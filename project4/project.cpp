
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
   

     string month_1 = "Январь";
     string month_2 = "Февраль";
     string month_3 = "Март";
     string month_4 = "Апрель";
     string month_5 = "Май";
     string month_6 = "Июнь";
     string month_7 = "Июль";
     string month_8 = "Август";
     string month_9 = "Сентябрь";
     string month_10 = "Октябрь";
     string month_11 = "Ноябрь";
     string month_12 = "Декабрь";
     short a;

     cout << "[ + ] Месяца года." << endl;
     cout << "[1]" << month_1 << endl;
     cout << "[2]" << month_2 << endl;
     cout << "[3]" << month_3 << endl;
     cout << "[4]" << month_4 << endl;
     cout << "[5]" << month_5 << endl;
     cout << "[6]" << month_6 << endl;
     cout << "[7]" << month_7 << endl;
     cout << "[8]" << month_8 << endl;
     cout << "[9]" << month_9 << endl;
     cout << "[10]" << month_10 << endl;
     cout << "[11]" << month_11 << endl;
     cout << "[12]" << month_12 << endl;
     cout << "Введите номер месяца: ";
     cin >> a;
     switch (a) {
     case 1:
         cout << "Выбран месяц " << month_1;
         break;
     case 2:
         cout << "Выбран месяц " << month_2;
         break;
     case 3:
         cout << "Выбран месяц " << month_3;
         break;
     case 4:
         cout << "Выбран месяц " << month_4;
         break;
     case 5:
         cout << "Выбран месяц " << month_5;
         break;
     case 6:
         cout << "Выбран месяц " << month_6;
         break;
     case 7:
         cout << "Выбран месяц " << month_7;
         break;
     case 8:
         cout << "Выбран месяц " << month_8;
         break;
     case 9:
         cout << "Выбран месяц " << month_9;
         break;
     case 10:
         cout << "Выбран месяц " << month_10;
         break;
     case 11:
         cout << "Выбран месяц " << month_11;
         break;
     case 12:
         cout << "Выбран месяц " << month_12;
         break;

     default:
         cout << "Вы ввели неверное значение!!!";
         break;
     }


    return 0;
    int _; cin >> _;
}
