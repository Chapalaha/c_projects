
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
   

    const int SIZE = 10;

    int arr_int[SIZE]{ 111, 2213, 3123, 12, 4323, 1232, 566, 5644, 8797, 3256 };

    char arr_char[SIZE]{ 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i','o', 'p' };

    short arr_short[SIZE]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    long arr_long[SIZE]{ 7654321, 235326, 24546425, 8676456, 353245, 5426633, 1346445, 457464, 42564676, 14654745 };

    bool arr_bool[SIZE]{ false, true, false, true, false, true, false, false, false, true };

    double arr_double[SIZE]{ 1.56, 5.46, 2.36, 3.87, 2.68, 9.47, 12.53, 4.34, 34.26, 55.71 };

    float arr_float[SIZE]{ 3.6, 7.2, 75.1, 9.4, 14.4, 45.8, 8.8, 23.6, 65.1, 94.8 };

    string arr_string[SIZE]{ "Автомобиль", "Сыр", "Облако", "Белка", "Лодка", "Лошадь", "Птица","Рыба", "Лиса", "Ёж" };

    short count = 1;

    cout << "[" << count << "] " "Массив с типом данных int" << endl;
    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_int[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных char" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_char[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных short" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_short[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных long" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_long[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных bool" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_bool[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных double" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_double[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных float" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_float[i] << endl;
    }
    count++;
    cout << endl << endl;
    cout << "[" << count << "] " "Массив с типом данных string" << endl;

    for (short i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << arr_string[i] << endl;
    }





    return 0;
    int _; cin >> _;
}
