#include <iostream>
#include <ctime>
#include <string>
using namespace std;


int Random_Question = 0;
int Random_Answer = 0;
int Exam = Random_Answer;


int Questions = 15;


int turn_HP = 5;
int HP = 5;
int Prompts = 0;
int Points = 0;


const int First_Player = 1;
const int Second_Player = 2;
const int Bot = Second_Player;

int User_Answer;

int Check_Questions[15] = {};


string array_Questions[15][5]{ {"Какого цвета Колобок?", "Жёлтый", "Красный", "Зелёный", "Синий"},
	{"Где находится Германия?", "В Европе","В Северной Америке","В Африке","В Азии"},
	{"Сколько планет в Солнечной системе?","Восемь","Девять","Семь","Шесть"},
	{"Кто такой Путин?","Политик, Лидер и Борец","Политик","Лидер","Борец"},
	{"Когда Алексей Дмитриевич напишет задания в Google Документах?", "Как только сварит кофе","Никогда","На следующей неделе","Завтра"},
	{"Лучший универсальный пехотный шаблон в HOI4?","10 касок и поддержка","7 касок на 2 арты и поддержка","8 касок 3 арты и поддержка","12 касок и поддержка"},
	{"Продолжите фразу: Идет медведь по лесу, видит, машина горит. Сел в нее и ... .","Сгорел","Угарел","Загорел","Поел"},
	{"Загадка: Зимой и летом одним цветом.","Огурец","Ёлка","Дуб","Сало"},
	{"Что растёт на яблони?","Яблоки","Дверь","Голова","Арбуз"},
	{"Подолжите анекдот: Чукчи играют в русскую рулетку. Первый берёт пистолет, застреливается. Второй берёт пистолет, застреливается. Третий берёт пистолет, застреливается. Четвёртый говорит: ... .","\"А разве в русскую рулетку не револьвером играют?\"","\"Я выйграл\"","\"ЛОЛ\"","\"Ладно, за работу\""},
	{"Назвать автора фразы: \"Это база!\"","Рыбников","Путин","Лермонтов","Летов"},
	{"Откуда родом Крокодил Гена?","СССР","Египет","Швеция","Бразилия"},
	{"Что сегодня на обед?","Пельмени","Макароны","Гречка","Пюрешка" },
	{"В каком году начилась Вторая мировая война?", "1939","1938","1941","1940"},
	{"За какую страну в HOI4 выполняется достижение Sunset Invasion?","Мексика","Франция","Япония","США"} };

string array_Answer[15];



void HP_Fun() {

	switch (turn_HP)
	{
	case 1:
		cout << "\x1b[92m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		break;
	case 2:
		if (HP == 1) {
			cout << "\x1b[91m" << "		У вас " << HP << " жизнь" << "\x1b[0m";
		}
		else if (HP == 2) {
			cout << "\x1b[92m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		break;
	case 3:
		if (HP == 1) {
			cout << "\x1b[91m" << "		У вас " << HP << " жизнь" << "\x1b[0m";
		}
		else if (HP == 2) {
			cout << "\x1b[93m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 3) {
			cout << "\x1b[92m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		break;
	case 4:
		if (HP == 1) {
			cout << "\x1b[91m" << "		У вас " << HP << " жизнь" << "\x1b[0m";
		}
		else if (HP == 2) {
			cout << "\x1b[93m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 3) {
			cout << "\x1b[93m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 4) {
			cout << "\x1b[92m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		break;
	case 5:
		if (HP == 1) {
			cout << "\x1b[91m" << "		У вас " << HP << " жизнь" << "\x1b[0m";
		}
		else if (HP == 2) {
			cout << "\x1b[93m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 3) {
			cout << "\x1b[93m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 4) {
			cout << "\x1b[92m" << "		У вас " << HP << " жизни" << "\x1b[0m";
		}
		else if (HP == 5) {
			cout << "\x1b[92m" << "		У вас " << HP << " жизней" << "\x1b[0m";
		}
		break;


	default:
		break;
	}



}



//		Штирлиц стрелял из окна вслепую. Слепая умерла

int main()
{
	srand(time(NULL));
	int i;
	int j;

	int count;

	setlocale(0, "");
	system("cls");
	cout << "	Кто хочет стать не знаю кем?" << endl;
	cout << "1. Начать викторину" << endl;
	cout << "2. Настройки" << endl;
	cout << "3. Правила" << endl;
	cout << "4. Выход" << endl;


	cout << "Выберете действие: ";
	short number_menu;
	cin >> number_menu;
	cin.clear();
	cin.ignore();

	switch (number_menu)
	{
	case 1:
		system("cls");
		cout << "		Игра" << endl;
		cout << "1. Начать игру" << endl;
		cout << "2. Назад в Меню" << endl;
		cout << "Выберете действие: ";
		int number_game;
		cin >> number_game;
		cin.clear();
		cin.ignore();
		while (number_game < 1 or number_game > 2) {
			system("cls");
			cout << "		Игра" << endl;
			cout << "1. Начать игру" << endl;
			cout << "2. Назад в Меню" << endl;
			cout << "Введите корректное значение: ";
			cin >> number_game;
			cin.clear();
			cin.ignore();
		}

		switch (number_game)
		{
		case 1:

		{

			system("cls");
			for (i = 0; i < Questions; i++) {

				string Result_right[4];
				int Check_Answer[4] = { 0,0,0,0 };


				while (Random_Question == Check_Questions[0] or Random_Question == Check_Questions[1] or Random_Question == Check_Questions[2] or Random_Question == Check_Questions[3] or Random_Question == Check_Questions[4] or Random_Question == Check_Questions[5] or Random_Question == Check_Questions[6] or Random_Question == Check_Questions[7] or Random_Question == Check_Questions[8] or Random_Question == Check_Questions[9] or Random_Question == Check_Questions[10] or Random_Question == Check_Questions[11] or Random_Question == Check_Questions[12] or Random_Question == Check_Questions[13] or Random_Question == Check_Questions[14]) {
					Random_Question = rand() % 15;

					Random_Question++;
				}
				Check_Questions[i] = Random_Question;

				system("cls");
				HP_Fun();
				cout << endl << "\x1b[96m" << "№" << i + 1 << " " << array_Questions[Random_Question - 1][0] << "\x1b[0m" << endl << endl;
				for (j = 0; j < 4; j++) {

					while (Random_Answer == Check_Answer[0] or Random_Answer == Check_Answer[1] or Random_Answer == Check_Answer[2] or Random_Answer == Check_Answer[3]) {

						Random_Answer = rand() % 4;
						Random_Answer++;
					}
					Check_Answer[j] = Random_Answer;
					Result_right[j] = array_Questions[Random_Question - 1][Random_Answer];

					cout << j + 1 << ") " << Result_right[j] << endl;

				}
				if (Prompts != 0) {
					cout << endl << "5) Подсказка 50/50" << endl;
				}
				cout << "Выберете действие: ";
				User_Answer = 0;
				cin >> User_Answer;
				cin.clear();
				cin.ignore();


				if (User_Answer == 5 and Prompts != 0) {
					system("cls");
					HP_Fun();
					cout << endl << "\x1b[96m" << i + 1 << ") " << array_Questions[Random_Question - 1][0] << "\x1b[0m" << endl << endl;

					short random = rand() % 2;
					if (random == 0) {
						for (int k = 0; k < 1; k++)
						{
							if (Result_right[k] == array_Questions[Random_Question - 1][1])
							{
								cout << "1) " << Result_right[k] << endl;
							}
							else {
								Result_right[k] = array_Questions[Random_Question - 1][1];
								cout << "1) " << Result_right[k] << endl;
							}

							for (int l = 1;l < 2; l++)
							{
								if (Result_right[l] != array_Questions[Random_Question - 1][1])
									cout << "2) " << Result_right[l] << endl;
								else {
									Result_right[l] = array_Questions[Random_Question - 1][rand() % 4 + 1];
									cout << "2) " << Result_right[l] << endl;
								}
							}
						}
					}
					else {
						for (int k = 0; k < 1; k++)
						{
							if (Result_right[k] != array_Questions[Random_Question - 1][1])
							{
								cout << "1) " << Result_right[k] << endl;
							}
							else
							{
								Result_right[k] = array_Questions[Random_Question - 1][rand() % 4 + 1];
								cout << "1) " << Result_right[k] << endl;
							}

							for (int l = 1;l < 2; l++)
							{
								if (Result_right[l] == array_Questions[Random_Question - 1][1])
									cout << "2) " << Result_right[l] << endl;
								else {
									Result_right[l] = array_Questions[Random_Question - 1][1];
									cout << "2) " << Result_right[l] << endl;
								}
							}

						}

					}
					cout << "Выберете действие: ";
					cin >> User_Answer;
					Prompts--;
				}
				User_Answer--;

				int a = 0;

				while (a < 15) {
					if (Result_right[User_Answer] == array_Questions[a][1]) {
						cout << "\x1b[92mПравильно\x1b[0m" << endl << endl;
						Points++;
						system("pause");
						break;
					}
					else if (a > 13) {
						cout << "\x1b[91mНеправильно\x1b[0m" << endl << endl;
						system("pause");
						HP--;
						if (HP == 0) {
							system("cls");
							cout << endl << "Увы, но у вас закончились жизни! :(" << endl;
							cout << "Вы набрали: " << Points << endl;
							exit(0);
						}
					}
					a++;

				}
				cout << endl;
			}
			cout << "Здоровья осталось: " << HP << "/" << turn_HP << endl;
			cout << "Вы набрали: " << Points << endl;
		}

		break;
		case 2:
			main();
			break;
		default:
			break;
		}

		break;
	case 2:
		system("cls");
		cout << "		Настройки" << endl;
		cout << "1. Количество Жизней" << endl;
		cout << "2. Количество Вопросов" << endl;
		cout << "3. Подсказка" << endl;
		cout << "4. Игровое Время" << endl;
		cout << endl << "5. Назад в Меню" << endl;

		cout << "Выберете действие: ";
		short number_set;
		cin >> number_set;
		cin.clear();
		cin.ignore();
		while (number_set < 1 or number_set > 5) {
			system("cls");
			cout << "		Настройки" << endl;
			cout << "1. Количество Жизней" << endl;
			cout << "2. Количество Вопросов" << endl;
			cout << "3. Подсказка" << endl;
			cout << "4. Игровое Время" << endl;
			cout << endl << "5. Назад в Меню" << endl;
			cout << "Такой настройки нет, попробуйте выбрать корректную настройку" << endl;
			cout << "Выберете действие: ";
			cin >> number_set;
			cin.clear();
			cin.ignore();
		}
		switch (number_set)
		{
		case 1:
			system("cls");
			cout << "		Количество Жизней" << endl;
			cout << "Текущее количество жизней: " << turn_HP << endl;
			cout << "1. Одна Жизнь" << endl;
			cout << "2. Две Жизни" << endl;
			cout << "3. Три Жизни" << endl;
			cout << "4. Четыре Жизни" << endl;
			cout << "5. Пять Жизней" << endl << endl;
			cout << "6. Назад в Меню" << endl << endl;
			cout << "Выберете действие: ";
			int number_HP;
			cin >> number_HP;
			cin.clear();
			cin.ignore();
			while (number_HP < 1 or number_HP > 6) {
				system("cls");
				cout << "		Количество Жизней" << endl;
				cout << "Текущее количество жизней: " << turn_HP << endl;
				cout << "1. Одна Жизнь" << endl;
				cout << "2. Две Жизни" << endl;
				cout << "3. Три Жизни" << endl;
				cout << "4. Четыре Жизни" << endl;
				cout << "5. Пять Жизней" << endl << endl;
				cout << "6. Назад в Меню" << endl << endl;
				cout << "Введите корректное значение: ";
				cin >> number_HP;
				cin.clear();
				cin.ignore();
			}


			switch (number_HP)
			{
				{case 1:
					turn_HP = 1;
					HP = 1;
					main();
					break;
				case 2:
					turn_HP = 2;
					HP = 2;
					main();
					break;
				case 3:
					turn_HP = 3;
					HP = 3;
					main();
					break;
				case 4:
					turn_HP = 4;
					HP = 4;
					main();
					break;
				case 5:
					turn_HP = 5;
					HP = 5;
					main();
					break;

				case 6:
					main();
					break;

				default:
					main();
					break;
				}
			}
			break;
		case 2:
			system("cls");
			cout << "		Количество Вопросов" << endl;
			cout << "Текущее количество вопросов: " << Questions << endl;
			cout << "1. Пять вопросов" << endl;
			cout << "2. Десять вопросов" << endl;
			cout << "3. Пятнадцать вопросов" << endl << endl;
			cout << "4. Назад в Меню" << endl << endl;
			cout << "Выберете действие: ";
			int number_Que;
			cin >> number_Que;
			while (number_Que < 1 or number_Que > 4) {
				system("cls");
				cout << "		Количество Вопросов" << endl;
				cout << "Текущее количество вопросов: " << Questions << endl;
				cout << "1. Пять вопросов" << endl;
				cout << "2. Десять вопросов" << endl;
				cout << "3. Пятнадцать вопросов" << endl << endl;
				cout << "4. Назад в Меню" << endl << endl;
				cout << "Введите корректное значение: ";
				cin >> number_Que;
				cin.clear();
				cin.ignore();
			}

			switch (number_Que)
			{
			case 1:
				Questions = 5;
				main();
				break;
			case 2:
				Questions = 10;
				main();
				break;
			case 3:
				Questions = 15;
				main();
				break;
			case 4:
				main();
				break;

			default:
				main();
				break;
			}

			break;
		case 3:
			system("cls");
			cout << "		Подсказка" << endl;
			cout << "Текущее количество подсказок: " << Prompts << endl;
			cout << "1. Одна подсказки" << endl;
			cout << "2. Две подсказки" << endl;
			cout << "3. Три подсказки" << endl << endl;
			cout << "4. Назад в Меню" << endl << endl;
			cout << "Выберете действие: ";
			int number_Pro;
			cin >> number_Pro;
			while (number_Pro < 1 or number_Pro > 4) {
				system("cls");
				cout << "		Подсказка" << endl;
				cout << "Текущее количество подсказок: " << Prompts << endl;
				cout << "1. Одна подсказки" << endl;
				cout << "2. Две подсказки" << endl;
				cout << "3. Три подсказки" << endl << endl;
				cout << "4. Назад в Меню" << endl << endl;
				cout << "Введите корректное значение: ";
				cin >> number_Pro;
				cin.clear();
				cin.ignore();
			}
			switch (number_Pro)
			{
			case 1:
				Prompts = 1;
				main();
				break;
			case 2:
				Prompts = 2;
				main();
				break;
			case 3:
				Prompts = 3;
				main();
				break;
			case 4:
				main();
				break;

			default:
				main();
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "		Игровое Время" << endl;
			cout << "На текущий момент данная функция недоступна!" << endl;
			cout << "1. Назад в Меню" << endl << endl;
			cout << "Выберете действие: ";
			int number_Time;
			cin >> number_Time;
			cin.clear();
			cin.ignore();
			while (number_Time != 1) {
				system("cls");
				cout << "		Игровое Время" << endl;
				cout << "На текущий момент данная функция недоступна!" << endl;
				cout << "1. Назад в Меню" << endl << endl;
				cout << "Введите корректное значение: ";
				cin >> number_Time;
				cin.clear();
				cin.ignore();
			}
			switch (number_Time)
			{
			case 1:
				main();
				break;
			default:
				main();
				break;
			}
			break;

			break;
		case 5:
			main();
			break;

		default:
			main();
			break;
		}

		break;
	case 3:
		system("cls");
		cout << "		Правила Игры" << endl;
		cout << "	Пользователь должен отвечать правильно на поставленные ему задачи(загадки)" << endl;
		cout << endl << "1. Назад в Меню" << endl;
		cout << "Выберете действие: ";
		short number_ru;
		cin >> number_ru;
		cin.clear();
		cin.ignore();

		while (number_ru != 1) {
			system("cls");
			cout << "		Правила Игры" << endl;
			cout << "	Игроки по очереди ставят на свободные клетки поля 3x3(3x3— поле по-умолчанию; в настройках можно указать поля: 4x4 и 5x5) знаки(один всегда крестики, другой всегда нолики)." << endl << " Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает.Первый ход делает игрок, ставящий крестики." << endl;
			cout << endl << "1. Назад в Меню" << endl;
			cout << "Если хотите выйти, нажмите 1, а не то ,что вы тыкаете!!!" << endl;
			cout << "Выберете действие: ";
			cin >> number_ru;
			cin.clear();
			cin.ignore();
		}

		if (number_ru == 1) {
			main();
		}

		break;
		break;
	case 4:
		system("cls");
		cout << endl << "До свидания, заходите ещё :)" << endl << endl << endl;
		exit(0);
		break;

	default:
		main();
		break;
	}


	return 0;
	int _; cin >> _;
}