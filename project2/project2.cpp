
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Программа Времена года." << endl;
    cout << "[1] Лето"<< endl;
    cout << "[2] Осень" << endl;
    cout << "[3] Зима" <<endl;
    cout << "[4] Весна" << endl;
    cout << "[-] Введите значение: ";
    int month;
    cin >> month;
    if (month == 1) {
        cout << "Сейчас лето, следует купить мороженное.";
    }else if (month == 2) {
        cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.";
    }else if (month == 3) {
        cout << "Сейчас зима, следует одеться очень тепло и пить горячие напитки.";
    }else if (month == 4) {
        cout << "Сейчас весна, следует надеть сапоги.";
    }else{
        cout << "Извините, но такого месяца нет!";
    }

    return 0;
    int _; cin >> _;
}
