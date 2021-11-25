#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int Color_Krestik = 0;
int Color_Nolik = 0;

int Queue = 1;

const int First_Player = 1;
const int Second_Player = 2;  
const int Bot = Second_Player;

int Size_Field = 3;

int Current_Player = First_Player;
const int Draw = -1;
const int Checking_Result = 0;

	string Field3x3[9] = { "1", "2", "3",
						   "4", "5", "6",
						   "7", "8", "9" };
	string Field4x4[16] = { "1", "2", "3", "4",
							 "5", "6", "7", "8",
							 "9", "10", "11", "12",
							 "13", "14", "15", "16" };
	string Field5x5[25] = { "1", "2", "3", "4", "5",
							"6", "7", "8", "9", "10",
							"11", "12", "13", "14", "15",
							"16", "17", "18", "19", "20",
							"21", "22", "23", "24", "25" };

	void Game_Field3x3()
	{
		system("cls");
		cout << "	" << Field3x3[0] << " | " << Field3x3[1] << " | " << Field3x3[2] << endl << "	——————————" << endl
		   	 << "	" << Field3x3[3] << " | " << Field3x3[4] << " | " << Field3x3[5] << endl << "	——————————" << endl
			 << "	" << Field3x3[6] << " | " << Field3x3[7] << " | " << Field3x3[8] << endl;
	}
	void Game_Field4x4()
	{
		system("cls");
		cout << "	" << Field4x4[0] << "  | " << Field4x4[1] << "  | " << Field4x4[2] << "  | " << Field4x4[3] << "  |  " << endl << "	———————————————————" << endl
			 << "	" << Field4x4[4] << "  | " << Field4x4[5] << "  | " << Field4x4[6] << "  | " << Field4x4[7] << "  |  " << endl << "	———————————————————" << endl
			 << "	" << Field4x4[8] << "  | " << Field4x4[9] << " | " << Field4x4[10] << " | " << Field4x4[11] << " | " << endl << "	———————————————————" << endl
			 << "	" << Field4x4[12] << " | " << Field4x4[13] << " | " << Field4x4[14] << " | " << Field4x4[15] << " | " << endl;
	}
	void Game_Field5x5()
	{
		system("cls");																														       
		cout << "	" << Field5x5[0] << "  | " << Field5x5[1] << "  | " << Field5x5[2] << "  | " << Field5x5[3] << " |  " << Field5x5[4] << "  |  " << endl << "	————————————————————————" << endl
			 << "	" << Field5x5[5] << "  | " << Field5x5[6] << "  | " << Field5x5[7] << "  | " << Field5x5[8] << " | " << Field5x5[9] << "  |  " << endl << " 	————————————————————————" << endl
			 << "	" << Field5x5[10] << " | " << Field5x5[11] << " | " << Field5x5[12] << " | " << Field5x5[13] << " | " << Field5x5[14] << " |  " << endl << "	————————————————————————" << endl
			 << "	" << Field5x5[15] << " | " << Field5x5[16] << " | " << Field5x5[17] << " | " << Field5x5[18] << " | " << Field5x5[19] << " |  " << endl << "	————————————————————————" << endl
			 << "	" << Field5x5[20] << " | " << Field5x5[21] << " | " << Field5x5[22] << " | " << Field5x5[23] << " | " << Field5x5[24] << " |  " << endl;
	}
	int Checking_Win()
	{
		if(Size_Field == 3){

			if (Field3x3[0] == Field3x3[1] && Field3x3[1] == Field3x3[2]) {
				return Current_Player;
			}
			else if (Field3x3[3] == Field3x3[4] && Field3x3[4] == Field3x3[5]) {
				return Current_Player;
			}
			else if (Field3x3[6] == Field3x3[7] && Field3x3[7] == Field3x3[8]) {
				return Current_Player;
			}
			else if (Field3x3[0] == Field3x3[3] && Field3x3[3] == Field3x3[6]) {
				return Current_Player;
			}
			else if (Field3x3[1] == Field3x3[4] && Field3x3[4] == Field3x3[7]) {
				return Current_Player;
			}
			else if (Field3x3[2] == Field3x3[5] && Field3x3[5] == Field3x3[8]) {
				return Current_Player;
			}
			else if (Field3x3[0] == Field3x3[4] && Field3x3[4] == Field3x3[8]) {
				return Current_Player;
			}
			else if (Field3x3[2] == Field3x3[4] && Field3x3[4] == Field3x3[6]) {
				return Current_Player;
			}
			else if (Field3x3[0] != "1" && Field3x3[1] != "2" && Field3x3[2] != "3" && Field3x3[3] != "4" && Field3x3[4] != "5" && Field3x3[5] != "6" && Field3x3[6] != "7" && Field3x3[7] != "8" && Field3x3[8] != "9") {
				return Draw;
			}
			else {
				return Checking_Result;
			}
		}
		else if (Size_Field == 4) {

			if (Field4x4[0] == Field4x4[1] && Field4x4[1] == Field4x4[2]) {
				return Current_Player;
			}
			else if (Field4x4[1] == Field4x4[2] && Field4x4[2] == Field4x4[3]) {
				return Current_Player;
			}
			else if (Field4x4[4] == Field4x4[5] && Field4x4[5] == Field4x4[6]) {
				return Current_Player;
			}
			else if (Field4x4[5] == Field4x4[6] && Field4x4[6] == Field4x4[7]) {
				return Current_Player;
			}
			else if (Field4x4[8] == Field4x4[9] && Field4x4[9] == Field4x4[10]) {
				return Current_Player;
			}
			else if (Field4x4[9] == Field4x4[10] && Field4x4[10] == Field4x4[11]) {
				return Current_Player;
			}
			else if (Field4x4[12] == Field4x4[13] && Field4x4[13] == Field4x4[14]) {
				return Current_Player;
			}
			else if (Field4x4[13] == Field4x4[14] && Field4x4[14] == Field4x4[15]) {
				return Current_Player;
			}

			else if (Field4x4[0] == Field4x4[4] && Field4x4[4] == Field4x4[8]) {
				return Current_Player;
			}
			else if (Field4x4[4] == Field4x4[8] && Field4x4[8] == Field4x4[12]) {
				return Current_Player;
			}
			else if (Field4x4[1] == Field4x4[5] && Field4x4[5] == Field4x4[9]) {
				return Current_Player;
			}
			else if (Field4x4[5] == Field4x4[9] && Field4x4[9] == Field4x4[13]) {
				return Current_Player;
			}
			else if (Field4x4[2] == Field4x4[6] && Field4x4[6] == Field4x4[10]) {
				return Current_Player;
			}
			else if (Field4x4[6] == Field4x4[10] && Field4x4[10] == Field4x4[14]) {
				return Current_Player;
			}
			else if (Field4x4[3] == Field4x4[7] && Field4x4[7] == Field4x4[11]) {
				return Current_Player;
			}
			else if (Field4x4[7] == Field4x4[11] && Field4x4[11] == Field4x4[15]) {
				return Current_Player;
			}

			else if (Field4x4[0] == Field4x4[5] && Field4x4[5] == Field4x4[10]) {
				return Current_Player;
			}
			else if (Field4x4[5] == Field4x4[10] && Field4x4[10] == Field4x4[15]) {
				return Current_Player;
			}
			else if (Field4x4[3] == Field4x4[6] && Field4x4[6] == Field4x4[9]) {
				return Current_Player;
			}
			else if (Field4x4[6] == Field4x4[9] && Field4x4[9] == Field4x4[12]) {
				return Current_Player;
			}
			else if (Field4x4[1] == Field4x4[6] && Field4x4[6] == Field4x4[11]) {
				return Current_Player;
			}
			else if (Field4x4[4] == Field4x4[9] && Field4x4[9] == Field4x4[14]) {
				return Current_Player;
			}
			else if (Field4x4[0] != "1" && Field4x4[1] != "2" && Field4x4[2] != "3" && Field4x4[3] != "4" && Field4x4[4] != "5" && Field4x4[5] != "6" && Field4x4[6] != "7" && Field4x4[7] != "8" && Field4x4[8] != "9" && Field4x4[9] != "10" && Field4x4[10] != "11" && Field4x4[11] != "12" && Field4x4[12] != "13" && Field4x4[13] != "14" && Field4x4[14] != "15" && Field4x4[15] != "16") {
				return Draw;
			}
			else {
				return Checking_Result;
			}
		}
		else if (Size_Field == 5) {



		if (Field5x5[0] == Field5x5[1] && Field5x5[1] == Field5x5[2]) {
			return Current_Player;
		}
		else if (Field5x5[1] == Field5x5[2] && Field5x5[2] == Field5x5[3]) {
			return Current_Player;
		}
		else if (Field5x5[2] == Field5x5[3] && Field5x5[3] == Field5x5[4]) {
			return Current_Player;
		}
		else if (Field5x5[5] == Field5x5[6] && Field5x5[6] == Field5x5[7]) {
			return Current_Player;
		}
		else if (Field5x5[6] == Field5x5[7] && Field5x5[7] == Field5x5[8]) {
			return Current_Player;
		}
		else if (Field5x5[7] == Field5x5[8] && Field5x5[8] == Field5x5[9]) {
			return Current_Player;
		}
		else if (Field5x5[10] == Field5x5[11] && Field5x5[11] == Field5x5[12]) {
			return Current_Player;
		}
		else if (Field5x5[11] == Field5x5[12] && Field5x5[12] == Field5x5[13]) {
			return Current_Player;
		}
		else if (Field5x5[12] == Field5x5[13] && Field5x5[13] == Field5x5[14]) {
			return Current_Player;
		}
		else if (Field5x5[15] == Field5x5[16] && Field5x5[16] == Field5x5[17]) {
			return Current_Player;
		}
		else if (Field5x5[16] == Field5x5[17] && Field5x5[17] == Field5x5[18]) {
			return Current_Player;
		}
		else if (Field5x5[17] == Field5x5[18] && Field5x5[18] == Field5x5[19]) {
			return Current_Player;
		}
		else if (Field5x5[20] == Field5x5[21] && Field5x5[21] == Field5x5[22]) {
			return Current_Player;
		}
		else if (Field5x5[21] == Field5x5[22] && Field5x5[22] == Field5x5[23]) {
			return Current_Player;
		}
		else if (Field5x5[22] == Field5x5[23] && Field5x5[23] == Field5x5[24]) {
			return Current_Player;
		}


		else if (Field5x5[0] == Field5x5[5] && Field5x5[5] == Field5x5[10]) {
			return Current_Player;
		}
		else if (Field5x5[5] == Field5x5[10] && Field5x5[10] == Field5x5[15]) {
			return Current_Player;
		}
		else if (Field5x5[10] == Field5x5[15] && Field5x5[15] == Field5x5[20]) {
			return Current_Player;
		}
		else if (Field5x5[1] == Field5x5[6] && Field5x5[6] == Field5x5[11]) {
			return Current_Player;
		}
		else if (Field5x5[6] == Field5x5[11] && Field5x5[11] == Field5x5[16]) {
			return Current_Player;
		}
		else if (Field5x5[11] == Field5x5[16] && Field5x5[16] == Field5x5[21]) {
			return Current_Player;
		}
		else if (Field5x5[2] == Field5x5[7] && Field5x5[7] == Field5x5[12]) {
			return Current_Player;
		}
		else if (Field5x5[7] == Field5x5[12] && Field5x5[12] == Field5x5[17]) {
			return Current_Player;
		}
		else if (Field5x5[12] == Field5x5[17] && Field5x5[17] == Field5x5[22]) {
			return Current_Player;
		}
		else if (Field5x5[3] == Field5x5[8] && Field5x5[8] == Field5x5[13]) {
			return Current_Player;
		}
		else if (Field5x5[8] == Field5x5[13] && Field5x5[13] == Field5x5[18]) {
			return Current_Player;
		}
		else if (Field5x5[13] == Field5x5[18] && Field5x5[18] == Field5x5[23]) {
			return Current_Player;
		}
		else if (Field5x5[4] == Field5x5[9] && Field5x5[9] == Field5x5[14]) {
			return Current_Player;
		}
		else if (Field5x5[9] == Field5x5[14] && Field5x5[14] == Field5x5[19]) {
			return Current_Player;
		}
		else if (Field5x5[14] == Field5x5[19] && Field5x5[19] == Field5x5[24]) {
			return Current_Player;
		}

		else if (Field5x5[0] == Field5x5[6] && Field5x5[6] == Field5x5[12]) {
			return Current_Player;
		}
		else if (Field5x5[1] == Field5x5[7] && Field5x5[7] == Field5x5[13]) {
			return Current_Player;
		}
		else if (Field5x5[2] == Field5x5[8] && Field5x5[8] == Field5x5[14]) {
			return Current_Player;
		}
		else if (Field5x5[5] == Field5x5[11] && Field5x5[1] == Field5x5[17]) {
			return Current_Player;
		}
		else if (Field5x5[6] == Field5x5[12] && Field5x5[12] == Field5x5[18]) {
			return Current_Player;
		}
		else if (Field5x5[7] == Field5x5[13] && Field5x5[13] == Field5x5[19]) {
			return Current_Player;
		}
		else if (Field5x5[10] == Field5x5[16] && Field5x5[16] == Field5x5[22]) {
			return Current_Player;
		}
		else if (Field5x5[11] == Field5x5[17] && Field5x5[17] == Field5x5[23]) {
			return Current_Player;
		}
		else if (Field5x5[12] == Field5x5[18] && Field5x5[18] == Field5x5[24]) {
			return Current_Player;
		}
		else if (Field5x5[2] == Field5x5[6] && Field5x5[6] == Field5x5[10]) {
			return Current_Player;
		}
		else if (Field5x5[3] == Field5x5[7] && Field5x5[7] == Field5x5[11]) {
			return Current_Player;
		}
		else if (Field5x5[4] == Field5x5[8] && Field5x5[8] == Field5x5[12]) {
			return Current_Player;
		}
		else if (Field5x5[7] == Field5x5[11] && Field5x5[11] == Field5x5[15]) {
			return Current_Player;
		}
		else if (Field5x5[8] == Field5x5[12] && Field5x5[12] == Field5x5[16]) {
			return Current_Player;
		}
		else if (Field5x5[9] == Field5x5[13] && Field5x5[13] == Field5x5[17]) {
			return Current_Player;
		}
		else if (Field5x5[10] == Field5x5[16] && Field5x5[16] == Field5x5[22]) {
			return Current_Player;
		}
		else if (Field5x5[11] == Field5x5[17] && Field5x5[17] == Field5x5[23]) {
			return Current_Player;
		}
		else if (Field5x5[12] == Field5x5[18] && Field5x5[18] == Field5x5[24]) {
			return Current_Player;
		}
		else if (Field5x5[12] == Field5x5[16] && Field5x5[16] == Field5x5[20]) {
			return Current_Player;
		}
		else if (Field5x5[13] == Field5x5[17] && Field5x5[17] == Field5x5[21]) {
			return Current_Player;
		}
		else if (Field5x5[14] == Field5x5[18] && Field5x5[18] == Field5x5[22]) {
			return Current_Player;
		}
		else if (Field5x5[0] != "1" && Field5x5[1] != "2" && Field5x5[2] != "3" && Field5x5[3] != "4" && Field5x5[4] != "5" && Field5x5[5] != "6" && Field5x5[6] != "7" && Field5x5[7] != "8" && Field5x5[8] != "9" && Field5x5[9] != "10" && Field5x5[10] != "11" && Field5x5[11] != "12" && Field5x5[12] != "13" && Field5x5[13] != "14" && Field5x5[14] != "15" && Field5x5[15] != "16" && Field5x5[16] != "17" && Field5x5[17] != "18" && Field5x5[18] != "19" && Field5x5[19] != "20" && Field5x5[20] != "21" && Field5x5[21] != "22" && Field5x5[22] != "23" && Field5x5[23] != "24" && Field5x5[24] != "25") {
			return Draw;
		}
		else {
			return Checking_Result;
		}
		}
	}

	void Bot_Moving() {
		int Random_Value;
		int Number_Сell;
		if (Size_Field == 3) {
			
			while (true)
			{
				if (Current_Player == First_Player)
				{
					cout << "Игрок " << Current_Player << ", ваш ход" << endl;
					cin >> Number_Сell;
					cin.clear();
					cin.ignore();
					Number_Сell--;
					if (Number_Сell < 0 or Number_Сell > 8 or Field3x3[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m" or Field3x3[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m")
					{
						system("cls");
						Game_Field3x3();
						cout << "Некорректное значение" << endl;
						continue;
					}else{
						Field3x3[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
					}
					break;
				}
				else if (Current_Player == Bot)
				{
					Random_Value = rand() % 9;
					Random_Value--;
					if (Random_Value < 0 or Random_Value > 8 or Field3x3[Random_Value] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field3x3[Random_Value] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
					{
						system("cls");
						Game_Field3x3();
						continue;
					}
					else
						Field3x3[Random_Value] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
					break;
				}
			}
			
		}
		else if (Size_Field == 4) {
			while (true)
			{
				if (Current_Player == First_Player)
				{
					cout << "Игрок " << Current_Player << ", ваш ход" << endl;
					cin >> Number_Сell;
					cin.clear();
					cin.ignore();
					Number_Сell--;
					if (Number_Сell < 0 or Number_Сell > 15 or Field4x4[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m" or Field4x4[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m")
					{
						system("cls");
						Game_Field4x4();
						cout << "Некорректное значение" << endl;
						continue;
					}
					else
					{
						Field4x4[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
					}
					break;
				}
				else if (Current_Player == Bot)
				{
					Random_Value = rand() % 16;
					Random_Value--;
					if (Random_Value < 0 or Random_Value > 15 or Field4x4[Random_Value] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field4x4[Random_Value] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
					{
						system("cls");
						Game_Field4x4();
						continue;
					}
					else
						Field4x4[Random_Value] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
					break;
				}
			}

		

		}
		else if (Size_Field == 5) {
			while (true)
			{
				if (Current_Player == First_Player)
				{
					cout << "Игрок " << Current_Player << ", ваш ход" << endl;
					cin >> Number_Сell;
					cin.clear();
					cin.ignore();
					Number_Сell--;
					if (Number_Сell < 0 or Number_Сell > 24 or Field5x5[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m" or Field5x5[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m")
					{
						system("cls");
						Game_Field5x5();
						cout << "Некорректное значение" << endl;
						continue;
					}
					else
					{
						Field5x5[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
					}
					break;
				}
				else if (Current_Player == Bot)
				{
					Random_Value = rand() % 25;
					Random_Value--;
					if (Random_Value < 0 or Random_Value > 24 or Field5x5[Random_Value] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field5x5[Random_Value] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
					{
						system("cls");
						Game_Field5x5();
						continue;
					}
					else
						Field5x5[Random_Value] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
					break;
				}
			}
		
		}
	}


	void Selection_Function()
	{
		if (Size_Field == 3) {
			int Number_Сell;
			while (true)
			{
				cout << "Игрок " << Current_Player << ", ваш ход" << endl;
				cin >> Number_Сell;
				cin.clear();
				cin.ignore();
				Number_Сell--;
				if (Number_Сell < 0 or Number_Сell > 8 or Field3x3[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field3x3[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
				{
					system("cls");
					Game_Field3x3();
					cout << "Некорректное значение" << endl;
					continue;
				}
				break;
			}
			if (Current_Player != First_Player)
			{
				Field3x3[Number_Сell] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
			}
			else
			{
				Field3x3[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
			}

		}
		else if (Size_Field == 4) {
			int Number_Сell;
			while (true)
			{
				cout << "Игрок " << Current_Player << ", ваш ход" << endl;
				cin >> Number_Сell;
				cin.clear();
				cin.ignore();
				Number_Сell--;
				if (Number_Сell < 0 or Number_Сell > 15 or Field4x4[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field4x4[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
				{
					system("cls");
					Game_Field4x4();
					cout << "Некорректное значение" << endl;
					continue;
				}
				break;
			}
			if (Current_Player != First_Player)
			{
				Field4x4[Number_Сell] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
			}
			else
			{
				Field4x4[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
			}
		}
		else if (Size_Field == 5) {
			int Number_Сell;
			cin.clear();
			cin.ignore();
			while (true)
			{
				cout << "Игрок " << Current_Player << ", ваш ход" << endl;
				cin >> Number_Сell;
				Number_Сell--;
				if (Number_Сell < 0 or Number_Сell > 24 or Field5x5[Number_Сell] == "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m" or Field5x5[Number_Сell] == "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m")
				{
					system("cls");
					Game_Field5x5();
					cout << "Некорректное значение" << endl;
					continue;
				}
				break;
			}
			if (Current_Player != First_Player)
			{
				Field5x5[Number_Сell] = "\x1b[" + to_string(Color_Nolik) + "mO\x1b[0m";
			}
			else
			{
				Field5x5[Number_Сell] = "\x1b[" + to_string(Color_Krestik) + "mX\x1b[0m";
			}
		}
	}


int main()
{
	srand(time(NULL));
	system("cls");
	setlocale(0, "");
	int Victory = Checking_Result;
	cout << "		Главное	Меню" << endl;
	cout << "1. Начать Игру" << endl;
	cout << "2. Настройки" << endl;
	cout << "3. Правила" << endl;
	cout << "4. Выйти" << endl << endl;
	
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
			cout << "1. Одиночная игра(с ботом)" << endl;
			cout << "2. Совместная игра на двоих" << endl;
			cout << "3. Назад в меню" << endl;
			cout << "Выберете действие: ";
			short number_game;
			cin >> number_game;
			cin.clear();
			cin.ignore();
			while (number_game < 1 or number_game > 3) {
				system("cls");
				cout << "		Настройки" << endl;
				cout << "1. Одиночная игра(с ботом)" << endl;
				cout << "2. Совместная игра на двоих" << endl;
				cout << "3. Назад в меню" << endl << endl;
				cout << "Такого действия нет, попробуйте выбрать корректное действие" << endl;

				cout << "Выберете действие: ";
				cin >> number_game;
				cin.clear();
				cin.ignore();
			}

			switch (number_game)
			{
			case 1:
				if (Size_Field == 3) {

					if (Queue == 1)
					{
						while (Victory == Checking_Result)
						{
							Game_Field3x3();
							Bot_Moving();
							Victory = Checking_Win();
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field3x3();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
							if (Current_Player == First_Player) {
								cout << "Вы " << "победили";
								exit(0);
							}
							else{
								cout << "Бот " << "победил";
								exit(0);
							}
						}
					}
					else if (Queue == 2)
						Current_Player = Bot;
					{
						while (Victory == Checking_Result)
						{
							Game_Field3x3();
							Bot_Moving();
							Victory = Checking_Win();
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field3x3();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player; 
							}
							if (Current_Player == First_Player) {
								cout << "Вы " << "победили";
								exit(0);
							}
							else{
								cout << "Бот " << "победил";
								exit(0);
							}
						}
					}

				}
				else if (Size_Field == 4) {
					if (Queue == 1)
					{
						while (Victory == Checking_Result)
						{
							Game_Field4x4();
							Bot_Moving();
							Victory = Checking_Win();
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field4x4();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
							if (Current_Player == First_Player) {
								cout << "Вы " << "победили";
								exit(0);
							}
							else{
								cout << "Бот " << "победил";
								exit(0);
							}
						}
					}
					else if (Queue == 2)
						Current_Player = Bot;
					{
						while (Victory == Checking_Result)
						{
							Game_Field4x4();
							Bot_Moving();
							Victory = Checking_Win();
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field4x4();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							if (Current_Player != Bot)
							{
								Current_Player = Bot;
							}
							else { 
								Current_Player = First_Player; 
							}
							if (Current_Player == First_Player) {
								cout << "Вы " << "победили";
								exit(0);
							}
							else {
								cout << "Бот " << "победил";
								exit(0);
							}
						}
					}
				}
				else{
				if (Queue == 1)
				{
					while (Victory == Checking_Result)
					{
						Game_Field5x5();
						Bot_Moving();
						Victory = Checking_Win();
						if (Current_Player != Bot)
						{
							Current_Player = Bot;
						}
						else {
							Current_Player = First_Player; 
						}
					}
					Game_Field5x5();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						if (Current_Player != Bot)
						{
							Current_Player = Bot;
						}
						else {
							Current_Player = First_Player;
						}
						if (Current_Player == First_Player) {
							cout << "Вы " << "победили";
							exit(0);
						}
						else {
							cout << "Бот " << "победил";
							exit(0);
						}
					}
				}
				else if (Queue == 2)
					Current_Player = Bot;
				{
					while (Victory == Checking_Result)
					{
						Game_Field5x5();
						Bot_Moving();
						Victory = Checking_Win();
						if (Current_Player != Bot)
						{
							Current_Player = Bot;
						}
						else {
							Current_Player = First_Player;
						}
					}
					Game_Field5x5();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						if (Current_Player != Bot)
						{
							Current_Player = Bot;
						}
						else {
							Current_Player = First_Player;
						}
						if (Current_Player == First_Player) {
							cout << "Вы " << "победили";
							exit(0);
						}
						else {
							cout << "Бот " << "победил";
							exit(0);
						}
					}
				}

				}
				break;
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			case 2:
				if (Size_Field == 3) {
			
				if (Queue == 1)
				{
					while (!Victory)
					{
						Game_Field3x3();
						Selection_Function();
						Victory = Checking_Win();
						if (Current_Player != Second_Player)
						{
							Current_Player = Second_Player;
						}
						else {
							Current_Player = First_Player;
						}
					}
					Game_Field3x3();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						cout << "Игрок " << Victory << " победил";
					}
				}
				else if (Queue == 2)
				{
					Current_Player = Second_Player;
					while (!Victory)
					{
						Game_Field3x3();
						Selection_Function();
						Victory = Checking_Win();
						if (Current_Player != Second_Player)
						{
							Current_Player = Second_Player;
						}
						else {
							Current_Player = First_Player;
						}
					}
					Game_Field3x3();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						cout << "Игрок " << Victory << " победил";
					}
				}
				}
				else if (Size_Field == 4) {
				
					if (Queue == 1)
					{
						while (!Victory)
						{
							Game_Field4x4();
							Selection_Function();
							Victory = Checking_Win();
							if (Current_Player != Second_Player)
							{
								Current_Player = Second_Player;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field4x4();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							cout << "Игрок " << Victory << " победил";
						}
					}
					else if (Queue == 2)
					{
						Current_Player = Second_Player;
						while (!Victory)
						{
							Game_Field4x4();
							Selection_Function();
							Victory = Checking_Win();
							if (Current_Player != Second_Player)
							{
								Current_Player = Second_Player;
							}
							else {
								Current_Player = First_Player;
							}
						}
						Game_Field4x4();
						if (Victory == Draw)
						{
							cout << "Ничья";
						}
						else {
							cout << "Игрок " << Victory << " победил";
						}
					}
				}
				else {

				if (Queue == 1)
				{
					while (!Victory)
					{
						Game_Field5x5();
						Selection_Function();
						Victory = Checking_Win();
						if (Current_Player != Second_Player)
						{
							Current_Player = Second_Player;
						}
						else {
							Current_Player = First_Player;
						}
					}
					Game_Field5x5();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						cout << "Игрок " << Victory << " победил";
					}
				}
				else if (Queue == 2)
				{
					Current_Player = Second_Player;
					while (!Victory)
					{
						Game_Field5x5();
						Selection_Function();
						Victory = Checking_Win();
						if (Current_Player != Second_Player)
						{
							Current_Player = Second_Player;
						}
						else {
							Current_Player = First_Player;
						}
					}
					Game_Field5x5();
					if (Victory == Draw)
					{
						cout << "Ничья";
					}
					else {
						cout << "Игрок " << Victory << " победил";
					}
				}
				}
				break;
			case 3:
				main();
				break;

			default:
				break;
			}

			break;

		case 2:
			system("cls");
			cout << "		Настройки" << endl;
			cout << "1. Цвет Крестика и Нолика" << endl;
			cout << "2. Очерёдность Хода" << endl;
			cout << "3. Размер Поля" << endl;
			cout << endl << "4. Назад в Меню" << endl;

			cout << "Выберете настройку, которую хотите изменить: ";
			short number_set;
			cin >> number_set;
			cin.clear();
			cin.ignore();
			while (number_set < 1 or number_set > 4 ) {
				system("cls");
				cout << "		Настройки" << endl;
				cout << "1. Цвет Крестика и Нолика" << endl;
				cout << "2. Очерёдность Хода" << endl;
				cout << "3. Размер Поля" << endl;
				cout << endl << "4. Назад в Меню" << endl;
				cout << "Такой настройки нет, попробуйте выбрать корректную настройку" << endl;
				cout << "Выберете настройку, которую хотите изменить: ";
				cin >> number_set;
				cin.clear();
				cin.ignore();
			}

			switch (number_set)
			{
			case 1:
				system("cls");
				cout << "		Цвета Фигур" << endl;

				if (Color_Krestik == 0) {
					cout << "Текущий цвет крестика — \x1b[0mПо Умолчанию\x1b[0m;" << endl;
				}else if (Color_Krestik == 89) {
					cout << "Текущий цвет крестика — \x1b[89m - Светло-Серый\x1b[0m;" << endl;
				}else if (Color_Krestik == 90) {
					cout << "Текущий цвет крестика — \x1b[90mСерый\x1b[0m;" << endl;
				}else if (Color_Krestik == 91) {
					cout << "Текущий цвет крестика — \x1b[91mКрасный\x1b[0m;" << endl;
				}else if (Color_Krestik == 92) {
					cout << "Текущий цвет крестика — \x1b[92mЗеленый\x1b[0m;" << endl;
				}else if (Color_Krestik == 93) {
					cout << "Текущий цвет крестика — \x1b[93mЖёлтый\x1b[0m;" << endl;
				}else if (Color_Krestik == 94) {
					cout << "Текущий цвет крестика — \x1b[94mСиний\x1b[0m;" << endl;
				}else if (Color_Krestik == 95) {
					cout << "Текущий цвет крестика — \x1b[95mФиолетовый\x1b[0m;" << endl;
				}else if (Color_Krestik == 96) {
					cout << "Текущий цвет крестика — \x1b[96mГолубой\x1b[0m;" << endl;
				}else if (Color_Krestik == 97) {
					cout << "Текущий цвет крестика — \x1b[97mБелый\x1b[0m;" << endl;
				}



				if (Color_Nolik == 0) {
					cout << "Текущий цвет нолика — \x1b[0mПо Умолчанию\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 89) {
					cout << "Текущий цвет нолика — \x1b[89m - Светло-Серый\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 90) {
					cout << "Текущий цвет нолика — \x1b[90mСерый\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 91) {
					cout << "Текущий цвет нолика — \x1b[91mКрасный\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 92) {
					cout << "Текущий цвет нолика — \x1b[92mЗеленый\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 93) {
					cout << "Текущий цвет нолика — \x1b[93mЖёлтый\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 94) {
					cout << "Текущий цвет нолика — \x1b[94mСиний\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 95) {
					cout << "Текущий цвет нолика — \x1b[95mФиолетовый\x1b[0m;" << endl;
				}
				else if (Color_Nolik == 96) {
					cout << "Текущий цвет нолика — \x1b[96mГолубой\x1b[0m;" << endl;
				}
				else if (Color_Krestik == 97) {
					cout << "Текущий цвет нолика — \x1b[97mБелый\x1b[0m;" << endl;
				}

				cout << endl << "1. Изменить цвета фигур" << endl;
				cout << "2. Назад в меню" << endl;

				cout << "Выберете действие : ";
				short number_col;
				cin >> number_col;
				cin.clear();
				cin.ignore();
				while (number_col < 1 or number_col > 2) {
					system("cls");

					cout << "		Цвета Фигур" << endl;
					if (Color_Krestik == 0) {
						cout << "Текущий цвет крестика — \x1b[0mПо Умолчанию\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 89) {
						cout << "Текущий цвет крестика — \x1b[89m - Светло-Серый\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 90) {
						cout << "Текущий цвет крестика — \x1b[90mСерый\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 91) {
						cout << "Текущий цвет крестика — \x1b[91mКрасный\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 92) {
						cout << "Текущий цвет крестика — \x1b[92mЗеленый\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 93) {
						cout << "Текущий цвет крестика — \x1b[93mЖёлтый\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 94) {
						cout << "Текущий цвет крестика — \x1b[94mСиний\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 95) {
						cout << "Текущий цвет крестика — \x1b[95mФиолетовый\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 96) {
						cout << "Текущий цвет крестика — \x1b[96mГолубой\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 97) {
						cout << "Текущий цвет крестика — \x1b[97mБелый\x1b[0m;" << endl;
					}



					if (Color_Nolik == 0) {
						cout << "Текущий цвет нолика — \x1b[0mПо Умолчанию\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 89) {
						cout << "Текущий цвет нолика — \x1b[89m - Светло-Серый\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 90) {
						cout << "Текущий цвет нолика — \x1b[90mСерый\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 91) {
						cout << "Текущий цвет нолика — \x1b[91mКрасный\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 92) {
						cout << "Текущий цвет нолика — \x1b[92mЗеленый\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 93) {
						cout << "Текущий цвет нолика — \x1b[93mЖёлтый\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 94) {
						cout << "Текущий цвет нолика — \x1b[94mСиний\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 95) {
						cout << "Текущий цвет нолика — \x1b[95mФиолетовый\x1b[0m;" << endl;
					}
					else if (Color_Nolik == 96) {
						cout << "Текущий цвет нолика — \x1b[96mГолубой\x1b[0m;" << endl;
					}
					else if (Color_Krestik == 97) {
						cout << "Текущий цвет нолика — \x1b[97mБелый\x1b[0m;" << endl;
					}

					cout << endl << "1. Изменить цвета фигур" << endl;
					cout << "2. Назад в меню" << endl;

					cout << "Выберете действие : ";
					cin >> number_col;
					cin.clear();
					cin.ignore();
				}

				if (number_col == 2) {
					main();
				}
				else {
					system("cls");
					cout << endl << "Все цвета: 0 — \x1b[0mПо Умолчанию; 89 — \x1b[89mСветло-Серый\x1b[0m; 90 — \x1b[90mСерый\x1b[0m; 91 — \x1b[91mКрасный\x1b[0m;" << endl << "92 — \x1b[92mЗеленый\x1b[0m; 93 — \x1b[93mЖёлтый\x1b[0m; 94 — \x1b[94mСиний\x1b[0m; 95 — \x1b[95mФиолетовый\x1b[0m; 96 — \x1b[96mГолубой\x1b[0m; 97 — \x1b[97mБелый\x1b[0m;" << endl;
					cout << endl <<"Укажите цвет крестика: ";
					cin >> Color_Krestik;
					cin.clear();
					cin.ignore();

					while (Color_Krestik != 0 and Color_Krestik < 89 or Color_Krestik > 97) {
						system("cls");
						cout << endl << "Все цвета: 0 — \x1b[0mПо Умолчанию; 89 — \x1b[89mСветло-Серый\x1b[0m; 90 — \x1b[90mСерый\x1b[0m; 91 — \x1b[91mКрасный\x1b[0m;" << endl << "92 — \x1b[92mЗеленый\x1b[0m; 93 — \x1b[93mЖёлтый\x1b[0m; 94 — \x1b[94mСиний\x1b[0m; 95 — \x1b[95mФиолетовый\x1b[0m; 96 — \x1b[96mГолубой\x1b[0m; 97 — \x1b[97mБелый\x1b[0m;" << endl;
						cout << endl << "Укажите корректный цвет крестика: ";
						cin >> Color_Krestik;
						cin.clear();
						cin.ignore();
					}

					system("cls");
					cout << endl << "Все цвета: 0 — \x1b[0mПо Умолчанию; 89 — \x1b[89mСветло-Серый\x1b[0m; 90 — \x1b[90mСерый\x1b[0m; 91 — \x1b[91mКрасный\x1b[0m;" << endl << "92 — \x1b[92mЗеленый\x1b[0m; 93 — \x1b[93mЖёлтый\x1b[0m; 94 — \x1b[94mСиний\x1b[0m; 95 — \x1b[95mФиолетовый\x1b[0m; 96 — \x1b[96mГолубой\x1b[0m; 97 — \x1b[97mБелый\x1b[0m;" << endl;
					cout << endl << "Укажите цвет нолика: ";
					cin >> Color_Nolik;
					cin.clear();
					cin.ignore();

					while (Color_Nolik != 0 and Color_Nolik < 89 or Color_Nolik > 97) {
						system("cls");
						cout << endl << "Все цвета: 0 — \x1b[0mПо Умолчанию; 89 — \x1b[89mСветло-Серый\x1b[0m; 90 — \x1b[90mСерый\x1b[0m; 91 — \x1b[91mКрасный\x1b[0m;" << endl << "92 — \x1b[92mЗеленый\x1b[0m; 93 — \x1b[93mЖёлтый\x1b[0m; 94 — \x1b[94mСиний\x1b[0m; 95 — \x1b[95mФиолетовый\x1b[0m; 96 — \x1b[96mГолубой\x1b[0m; 97 — \x1b[97mБелый\x1b[0m;" << endl;
						cout << endl << "Укажите корректный цвет нолика: ";
						cin >> Color_Nolik;
						cin.clear();
						cin.ignore();
					}
				}
				main();

				break;

			case 2:
				system("cls");
				cout << "		Очерёдность Ходов" << endl;
				if (Queue == 1) {

					cout << "Первым ходит — Крестик" << endl;
				}else{
					cout << "Первым ходит — Нолик" << endl;
				}

				cout << endl << "1. Первым будет ходить Крестик" << endl;
				cout << "2. Первым будет ходить Нолик" << endl;
				cout << "3. Назад в меню" << endl;
				cout << "Выберите действие: ";
				short number_que;
				cin >> number_que;
				cin.clear();
				cin.ignore();

				while (number_que < 1 or number_que > 3) {
					system("cls");
					cout << "		Очерёдность Ходов" << endl;
					if (Queue == 1) {

						cout << "Первым ходит — Крестик" << endl;
					}
					else {
						cout << "Первым ходит — Нолик" << endl;
					}
					cout << endl << "1. Первым будет ходить Крестик" << endl;
					cout << "2. Первым будет ходить Нолик" << endl;
					cout << "3. Назад в меню" << endl << endl;
					cout << "Выберете корректное действие: ";
					cin >> number_que;
					cin.clear();
					cin.ignore();
				}

				switch (number_que)
				{
				case 1:
				
					Queue = 1;
					main();
				
				break;

				case 2:
				
					Queue = 2;
					main();
				

				case 3:				
					main();				
				break;

				default:				
				
					break;
				}

				break;
			case 3:
				system("cls");
				cout << "		Размер Поля" << endl;
				if (Size_Field == 3) {
					cout << "Текущий размер поля — 3x3" << endl;
				}
				else if (Size_Field == 4){
					cout << "Текущий размер поля — 4x4" << endl;
				}
				else if (Size_Field == 5) {
					cout << "Текущий размер поля — 5x5" << endl;
				}
				cout << "Размеры полей:	1) 3 x 3 |	2) 4 x 4 |	3) 5 x 5" << endl;
				cout << "4. Назад в меню" << endl;

				cout << "Выберете действие: ";
				short Choice_Size;
				cin >> Choice_Size;


				while (Choice_Size < 1 or Choice_Size > 4) {
					system("cls");
					cout << "		Размер Поля" << endl;
					if (Size_Field == 3) {
						cout << "Текущий размер поля — 3x3" << endl;
					}
					else if (Size_Field == 4) {
						cout << "Текущий размер поля — 4x4" << endl;
					}
					else if (Size_Field == 5) {
						cout << "Текущий размер поля — 5x5" << endl;
					}
					cout << "Размеры полей:	1) 3 x 3 |	2) 4 x 4 |	3) 5 x 5" << endl;
					cout << "4. Назад в меню"<< endl;

					cout << "Выберете корректное действие: ";
					cin >> Choice_Size;
				}

				if (Choice_Size == 1) {
					Size_Field = 3;
				}else if (Choice_Size == 2) {
					Size_Field = 4;
				}
				else if (Choice_Size == 3) {
					Size_Field = 5;
				}
				else {
					main();
				}
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
			cout << "		Правила Игры" << endl;
			cout << "	Игроки по очереди ставят на свободные клетки поля 3x3(3x3— поле по-умолчанию; в настройках можно указать поля: 4x4 и 5x5) знаки(один всегда крестики, другой всегда нолики)." << endl << " Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает.Первый ход делает игрок, ставящий крестики." << endl;
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
