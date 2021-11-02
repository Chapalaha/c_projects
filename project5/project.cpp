
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
   

      string r_word_1 = "Дом";
      string r_word_2 = "Дорога";
      string r_word_3 = "Школа";
      string r_word_4 = "Яблоко";
      string r_word_5 = "Солнце";
      string r_word_6 = "Автобус";
      string r_word_7 = "Метро";
      string r_word_8 = "Машина";
      string r_word_9 = "Кот";
      string r_word_10 = "Собака";
      string r_word_11 = "Птица";
      string r_word_12 = "Крыса";
      string r_word_13 = "Лиса";
      string r_word_14 = "Мышь";
      string r_word_15 = "Змея";


      string e_word_1 = "House";
      string e_word_2 = "Road";
      string e_word_3 = "School";
      string e_word_4 = "Apple";
      string e_word_5 = "Sun";
      string e_word_6 = "Bus";
      string e_word_7 = "Metro";
      string e_word_8 = "Car";
      string e_word_9 = "Cat";
      string e_word_10 = "Dog";
      string e_word_11 = "Bird";
      string e_word_12 = "Rat";
      string e_word_13 = "Fox";
      string e_word_14 = "Mouse";
      string e_word_15 = "Snake";


      cout << "[ + ] Переводчик." << endl;
      cout << "[1]" << "Русские слова" << endl;
      cout << "[2]" << "Английские слова" << endl;
      cout << "[3]" << "Выйти" << endl;
      cout << "Введите число: ";
      short number_1;
      cin >> number_1;
      switch (number_1)
      {
      case 1:
          cout << "Словарь русских слов" << endl;
          cout << "[1]" << r_word_1 << endl;
          cout << "[2]" << r_word_2 << endl;
          cout << "[3]" << r_word_3 << endl;
          cout << "[4]" << r_word_4 << endl;
          cout << "[5]" << r_word_5 << endl;
          cout << "[6]" << r_word_6 << endl;
          cout << "[7]" << r_word_7 << endl;
          cout << "[8]" << r_word_8 << endl;
          cout << "[9]" << r_word_9 << endl;
          cout << "[10]" << r_word_10 << endl;
          cout << "[11]" << r_word_11 << endl;
          cout << "[12]" << r_word_12 << endl;
          cout << "[13]" << r_word_13 << endl;
          cout << "[14]" << r_word_14 << endl;
          cout << "[15]" << r_word_15 << endl;
          cout << "Выберите слово: ";
          int number_2;
          cin >> number_2;
          switch (number_2) {
          case 1:
              cout << "Перевод " << r_word_1 << "->" << e_word_1;
              break;
          case 2:
              cout << "Перевод " << r_word_2 << "->" << e_word_2;
              break;
          case 3:
              cout << "Перевод " << r_word_3 << "->" << e_word_3;
              break;
          case 4:
              cout << "Перевод " << r_word_4 << "->" << e_word_4;
              break;
          case 5:
              cout << "Перевод " << r_word_5 << "->" << e_word_5;
              break;
          case 6:
              cout << "Перевод " << r_word_6 << "->" << e_word_6;
              break;
          case 7:
              cout << "Перевод " << r_word_7 << "->" << e_word_7;
              break;
          case 8:
              cout << "Перевод " << r_word_8 << "->" << e_word_8;
              break;
          case 9:
              cout << "Перевод " << r_word_9 << "->" << e_word_9;
              break;
          case 10:
              cout << "Перевод " << r_word_10 << "->" << e_word_10;
              break;
          case 11:
              cout << "Перевод " << r_word_11 << "->" << e_word_11;
              break;
          case 12:
              cout << "Перевод " << r_word_12 << "->" << e_word_12;
              break;
          case 13:
              cout << "Перевод " << r_word_13 << "->" << e_word_13;
              break;
          case 14:
              cout << "Перевод " << r_word_14 << "->" << e_word_14;
              break;
          case 15:
              cout << "Перевод " << r_word_15 << "->" << e_word_15;
              break;

          default:
              cout << "Вы ввели неверное значение!!!";
              break;
          }
          break;


      case 2:
          cout << "Словарь английских слов" << endl;
          cout << "[1]" << e_word_1 << endl;
          cout << "[2]" << e_word_2 << endl;
          cout << "[3]" << e_word_3 << endl;
          cout << "[4]" << e_word_4 << endl;
          cout << "[5]" << e_word_5 << endl;
          cout << "[6]" << e_word_6 << endl;
          cout << "[7]" << e_word_7 << endl;
          cout << "[8]" << e_word_8 << endl;
          cout << "[9]" << e_word_9 << endl;
          cout << "[10]" << e_word_10 << endl;
          cout << "[11]" << e_word_11 << endl;
          cout << "[12]" << e_word_12 << endl;
          cout << "[13]" << e_word_13 << endl;
          cout << "[14]" << e_word_14 << endl;
          cout << "[15]" << e_word_15 << endl;


          cout << "Выберите слово: ";
          int number_3;
          cin >> number_3;
          switch (number_3) {
          case 1:
              cout << "Перевод " << e_word_1 << "->" << r_word_1;
              break;
          case 2:
              cout << "Перевод " << e_word_2 << "->" << r_word_2;
              break;
          case 3:
              cout << "Перевод " << e_word_3 << "->" << r_word_3;
              break;
          case 4:
              cout << "Перевод " << e_word_4 << "->" << r_word_4;
              break;
          case 5:
              cout << "Перевод " << e_word_5 << "->" << r_word_5;
              break;
          case 6:
              cout << "Перевод " << e_word_6 << "->" << r_word_6;
              break;
          case 7:
              cout << "Перевод " << e_word_7 << "->" << r_word_7;
              break;
          case 8:
              cout << "Перевод " << e_word_8 << "->" << r_word_8;
              break;
          case 9:
              cout << "Перевод " << e_word_9 << "->" << r_word_9;
              break;
          case 10:
              cout << "Перевод " << e_word_10 << "->" << r_word_10;
              break;
          case 11:
              cout << "Перевод " << e_word_11 << "->" << r_word_11;
              break;
          case 12:
              cout << "Перевод " << e_word_12 << "->" << r_word_12;
              break;
          case 13:
              cout << "Перевод " << e_word_13 << "->" << r_word_13;
              break;
          case 14:
              cout << "Перевод " << e_word_14 << "->" << r_word_14;
              break;
          case 15:
              cout << "Перевод " << e_word_15 << "->" << r_word_15;
              break;
          default:
              cout << "Вы ввели неверное значение!!!";
              break;
          }
          break;


      default:
          cout << "Вы ввели неверное значение!!!";
          break;

      }


    return 0;
    int _; cin >> _;
}
