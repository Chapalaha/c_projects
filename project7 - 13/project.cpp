
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
   

    cout << "[+]Фигуры" << endl << endl;

    cout << "Список фигур:" << endl;
    cout << "[1] Линия" << endl;
    cout << "[2] Квадрат" << endl;
    cout << "[3] Прямоугольник" << endl;
    cout << "[4] Треугольник" << endl;
    cout << "[5] Решётка" << endl;
    cout << "[6] Крестик" << endl;
    cout << "[7] Плюсик" << endl;
    cout << "Выберете фигуру: ";
    short number;
    cin >> number;
    if (number == 1) {
        system("cls");
        cout << "Вы выбрали линию." << endl << endl;
        cout << "Введите длинну линии: ";
        short counter = 0;
        short length_line;
        cin >> length_line;
        if (length_line <= 0) {
            cout << "Вы ввели некорректное значение!!!";
            exit(0);
        }
        cout << "Введите текстуру линии: ";
        char texture;
        cin >> texture;
        cout << "[1] По горизонтали" << endl << "[2] По вертикали" << endl;
        cout << "Выберете направление: ";
        short direction;
        cin >> direction;
        cout << endl;

        if (direction == 1) {
            while (counter < length_line) {
                cout << texture;
                counter += 1;
            }
        }
        else if (direction == 2) {
            while (counter < length_line) {
                cout << texture << endl;
                counter += 1;
            }
        }
        else {
            cout << "Такого направления нет!!!";
            exit(0);
        }
    }
    else if (number == 2) {
        system("cls");
        cout << "Выбор квадрата" << endl;
        cout << "[1] Заполненный" << endl;
        cout << "[2] Пустой" << endl;
        cout << "[3] Заполненный квадрат в пустом квадрате" << endl;

        cout << "Выберете вид квадрата: ";
        short number_sq;
        cin >> number_sq;
        if (number_sq == 1) {
            system("cls");
            cout << "Вы выбрали заполненный квадрат." << endl << endl;
            cout << "Введите общую длину сторон квадрата: ";
            short length_sq;
            cin >> length_sq;
            if (length_sq <= 0) {
                cout << "Вы ввели некорректное значение!!!";
                exit(0);
            }
            cout << "Введите текстуру линии: ";
            char texture;
            cin >> texture;
            cout << endl;
            short lenght_sq2 = length_sq;

            while (lenght_sq2 != 0) {
                short lenght_sq3 = length_sq;
                while (lenght_sq3 != 0) {
                    cout << texture << " ";
                    lenght_sq3 -= 1;
                }
                cout << endl;
                lenght_sq2 -= 1;
            }
        }

        else if (number_sq == 2)
        {
            system("cls");
            cout << "Вы выбрали пустой квадрат." << endl << endl;
            cout << "Введите общую длину сторон квадрата: ";
            short length_sq;
            cin >> length_sq;
            if (length_sq <= 0) {
                cout << "Вы ввели некорректное значение!!!";
                exit(0);
            }
            cout << "Введите текстуру линии: ";
            char texture;
            cin >> texture;
            cout << endl;
            short lenght_sq2 = length_sq;

            short space_1;
            short space_2;

            for (space_1 = 0; space_1 < length_sq; space_1++)
            {
                for (space_2 = 0; space_2 < length_sq; space_2++)
                {
                    if ((space_1 >= 1 and space_1 <= length_sq - 2) and (space_2 >= 1 and space_2 <= length_sq - 2)) {
                        cout << "  ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
                cout << endl;
            }

        }
        else  if (number_sq == 3) {
            system("cls");
            cout << "Вы выбрали квадрат в квадрате." << endl << endl;
            cout << "Введите общую длину сторон квадрата: ";
            short length_sq;
            cin >> length_sq;
            if (length_sq <= 0) {
                cout << "Вы ввели некорректное значение!!!";
                exit(0);
            }
            cout << "Введите текстуру квадрата: ";
            char texture;
            cin >> texture;
            cout << endl;
            short lenght_sq2 = length_sq;


            short space_1;
            short space_2;
            short space_3 = 2;

            for (space_1 = 0; space_1 < length_sq; space_1++)
            {
                for (space_2 = 0; space_2 < length_sq; space_2++)
                {
                    if ((space_1 >= space_3 and space_1 <= length_sq - 3) and (space_2 >= space_3 and space_2 <= length_sq - 3)) {
                        cout << texture << " ";
                    }
                    else if ((space_1 >= 1 and space_1 <= length_sq - 2) and (space_2 >= 1 and space_2 <= length_sq - 2)) {
                        cout << "  ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
                cout << endl;
            }


        }
        else {
            cout << "Такого квадрата нет!!!";
            exit(0);
        }

    }
    else if (number == 3) {
        system("cls");
        cout << "Выбор прямоугольника" << endl;
        cout << "[1] Заполненный" << endl;
        cout << "[2] Пустой" << endl;
        cout << "Выберете вид прямоугольника: ";
        short number_re;
        cin >> number_re;
        if (number_re == 1) {
            system("cls");
            cout << "Вы выбрали заполненный прямоугольник." << endl << endl;
            cout << "Введите  длину  прямоугольника: ";
            short length_re;
            cin >> length_re;
            if (length_re <= 0) {
                cout << "Вы ввели некорректную длинну!!!";
                exit(0);
            }
            cout << "Введите  ширину  прямоугольника: ";
            short width_re;
            cin >> width_re;
            if (width_re <= 0) {
                cout << "Вы ввели некорректную ширину!!!";
                exit(0);
            }
            if (length_re == width_re) {
                cout << endl << "Ой, да это же квадрат. Ну ладно." << endl;
            }

            cout << "Введите текстуру линии: ";
            char texture;
            cin >> texture;
            cout << endl;
            short width_re2 = width_re;

            while (width_re2 != 0) {
                short lenght_re2 = length_re;
                while (lenght_re2 != 0) {
                    cout << texture << " ";
                    lenght_re2 -= 1;
                }
                cout << endl;
                width_re2 -= 1;
            }
        }
        else if (number_re == 2)
        {
            system("cls");
            cout << "Вы выбрали пустой прямоугольник." << endl << endl;
            cout << "Введите  длину  прямоугольника: ";
            short length_re;
            cin >> length_re;
            if (length_re <= 0) {
                cout << "Вы ввели некорректную длинну!!!";
                exit(0);
            }
            cout << "Введите  ширину  прямоугольника: ";
            short width_re;
            cin >> width_re;
            if (width_re <= 0) {
                cout << "Вы ввели некорректную ширину!!!";
                exit(0);
            }
            if (length_re == width_re) {
                cout << endl << "Ой, да это же квадрат. Ну ладно." << endl;
            }

            cout << "Введите текстуру прямоугольника: ";
            char texture;
            cin >> texture;
            cout << endl;

            short space_1;
            short space_2;

            for (space_1 = 0; space_1 < length_re; space_1++)
            {
                for (space_2 = 0; space_2 < width_re; space_2++)
                {
                    if ((space_1 >= 1 and space_1 <= length_re - 2) and (space_2 >= 1 and space_2 <= width_re - 2)) {
                        cout << "  ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << "Такого прямоугольника нет!!!";
            exit(0);
        }
    }
    else if (number == 4) {
        system("cls");
        cout << "Выбор треугольника" << endl;
        cout << "[1] Заполненный" << endl;
        cout << "[2] Пустой" << endl;
        cout << "Выберете вид треугольника: ";
        short number_tr;
        cin >> number_tr;
        if (number_tr == 1) {
            system("cls");
            cout << "Вы выбрали заполненный треугольник." << endl << endl;
            cout << "Введите высоту треугольника: ";
            short counter = 0;
            short height_tr;
            cin >> height_tr;
            if (height_tr <= 0) {
                cout << "Вы ввели некорректную высоту!!!";
                exit(0);
            }
            cout << "Введите текстуру треугольника: ";
            char texture;
            cin >> texture;


            for (short y = 0; y < height_tr + 1; y++) {
                for (short x = 0; x < height_tr - y; x++) {
                    cout << " ";
                }
                for (short x = 0; x < y + y - 1; x++) {
                    cout << texture;
                }
                cout << endl;

            }
        }
        else if (number_tr == 2) {
            system("cls");
            cout << "Вы выбрали пустой треугольник." << endl << endl;
            cout << "Введите высоту треугольника: ";
            short counter = 0;
            short height_tr;
            cin >> height_tr;
            if (height_tr <= 0) {
                cout << "Вы ввели некорректную высоту!!!";
                exit(0);
            }
            cout << "Введите текстуру треугольника: ";
            char texture;
            cin >> texture;



            short size_tr = height_tr * 2 - 1;

            for (short y = 0; y < height_tr; y++) {
                for (short x = 0; x < size_tr; x++) {
                    if (x == (size_tr / 2) - y or x == (size_tr / 2) + y or y == height_tr - 1) {
                        cout << texture;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }


        }
        else {
            cout << "Такого треугольника нет!!!";
            exit(0);
        }
    }
    else if (number == 5) {
        system("cls");
        cout << "Вы выбрали решётку." << endl << endl;
        cout << "Введите НЕЧЁТНЫЙ размер решётки: ";
        short counter = 0;
        short length_la;
        cin >> length_la;
        if (length_la <= 0 or length_la % 2 == 0) {
            cout << "Вы ввели некорректную высоту!!!";
            exit(0);
        }
        cout << "Введите текстуру решётки: ";
        char texture;
        cin >> texture;
        cout << endl;


        for (short y = 0; y < length_la; y++)
        {
            for (short x = 0; x < length_la; x++)
            {
                if (y % 2 == 1 || x % 2 == 1) {
                    cout << texture << " ";
                }

                else {
                    cout << "  ";
                }
            }
            cout << endl;

        }

    }
    else if (number == 6) {
        system("cls");
        cout << "Вы выбрали крестик." << endl << endl;
        cout << "Введите размер крестика: ";
        short counter = 0;
        short length_cr;
        cin >> length_cr;
        if (length_cr <= 0) {
            cout << "Вы ввели некорректную высоту!!!";
            exit(0);
        }
        cout << "Введите текстуру крестика: ";
        char texture;
        cin >> texture;
        cout << endl;

        for (short y = 0; y < length_cr; y++) {
            for (short x = 0; x <= length_cr; x++) {
                if (x == length_cr - y - 1 or x == y) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }

    }

    else if (number == 7) {
        system("cls");
        cout << "Вы выбрали плюсик)." << endl << endl;
        cout << "Введите НЕЧЁТНЫЙ размер плюсика: ";
        short counter = 0;
        short length_pl;
        cin >> length_pl;
        if (length_pl <= 0 or length_pl % 2 == 0) {
            cout << "Вы ввели некорректный размер!!!";
            exit(0);
        }
        cout << "Введите текстуру плюсика: ";
        char texture;
        cin >> texture;
        cout << endl;

        for (short y = 0; y < length_pl; y++)
        {
            for (short x = 0; x < length_pl; x++)
            {
                if (y == length_pl / 2 or x == length_pl / 2) {
                    cout << texture << " ";
                }

                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    else {
        cout << "Вы ввели неверное значение!!!";
        exit(0);
    }


    return 0;
    int _; cin >> _;
}
