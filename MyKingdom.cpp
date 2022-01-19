#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <algorithm>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void hideCursor(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void showCursor(){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

int arrowSupport(unsigned char keyboard_char)
{
	switch( keyboard_char )
    {
	    case 0: //klawisze specjalne
	    case 224: //klawisze specjalne
			keyboard_char=getch();
	        switch( keyboard_char )
	        {
				case 72: //strzalka w gore
					return 0;
				case 80: //strzalka w dol
					return 1;
				case 75: //strzalka w lewo
					return 2;
				case 77: //strzalka w prawo
					return 3;
            }
            case 13: //ENTER
				return 9;
    }
	return 8;
}

void MyKingdomTXT()
{
	cout<<endl
		<<"                                                                                                      @   @   @   @  "<<endl
		<<"                                               @                                                      @@ @ @ @ @ @@  "<<endl
		<<"    @@@@%     @@.                @@@   #@    @@@@@                                  @@@               @ @ 8 @ 8 @ @  "<<endl
		<<"    @@@&@    @@@.                @@@  @&       @                                    &@@               @0o0o0o0o0o0@  "<<endl
		<<"    @@@,@&  @@#@.                @@%,@                   &@@/       &@@*        #@@##@@     ,@@@.        &@@# (@@%   "<<endl
		<<"    @@@.*@ @@*&@.    .@#   &@    @@@@         &@@    *@@@   @@    @@   (@@(   (@/   @@@    @@   @@    @@@   @@*  *@% "<<endl
		<<"    @@@  @@@% @@.   (@%    &@    @@@@&        #@&    *@@    /@@  %@&    &@(  ,@@    *@@   %@%   @@#   @@    @@@   @@,"<<endl
		<<"    @@@  *@@  @@.  .@@     @@    @@.@@%       *@#    *@&    ,@@  @@(    /@(  %@@     @@   @@/   (@@   @@    &@&   @@#"<<endl
		<<"    @@@   @   @@.  /@@     @@    @@  @@*      ,@#    *@%    /@@  @@*    /@(  %@@     @@   @@/   (@@   @&    @@,   @@("<<endl
		<<"    @@#       @@.  ,@@     @@    @@   &@.      @(    *@&    &@%  @@#    &@(  (@@    .@@   @@%   &@&   @@   .@%    @@ "<<endl
		<<"    @@*      *@@.   @@.   &@@    @@    /@      @*    *@@   ,@%   ,@@    @@(   @@    @@@   .@@   @@.   @@   @@    @@  "<<endl
		<<"   %@@,      (@@&    (@, @(@@   (@%    &@@&   @@@.   @@@. %@@,     @@ #@&@(    @@ .@.&@&    @@ @@    @@@*      .@@&  "<<endl
		<<"                    .      @@                                     ,     &@*                                          "<<endl
		<<"                    @@    #@*                                    /@,    @@                                           "<<endl
		<<"                     @&@#@&                                       *(*@&&@*                                           "<<endl<<endl<<endl;
}

struct Buildings
{
	int houses;
	int palaces;
	int towers;
	int barracks;
};

struct Storage 
{
	int grain;
	int stone;
	int wood;
};

struct City 
{
	string name;
	int money;
	int people;
	int army;
	int morals;
	Buildings buildings;
	Storage storage;
};

void mainMenu(int menu_select)
{
	system("cls");
	
	MyKingdomTXT();

	string opt[4]{"Play   ","Instruction","Creators ","Exit   "};

	for (int i=0; i<4; i++)
	{
		if (menu_select==i)
		{
			string tmp="-> "+opt[i];
			
			cout.width(130/2);
			cout<<tmp<<endl;
		}
		else 
		{
			cout.width(130/2);
			cout<<opt[i]<<endl;
		}
	}
	
}

void secondMenu(int menu_select)
{
	system("cls");
	
	MyKingdomTXT();

	string opt[4]{"New Game ","Load Game ","Delete Save","Back   "};

	for (int i=0; i<4; i++)
	{
		if (menu_select==i)
		{
			string tmp="-> "+opt[i];
			
			cout.width(130/2);
			cout<<tmp<<endl;
		}
		else 
		{
			cout.width(130/2);
			cout<<opt[i]<<endl;
		}
	}
	
}

void gameMenu(int menu_select, City* city)
{
	system("cls");

	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	
	int hour=aTime->tm_hour;
	int min=aTime->tm_min;

	cout<<"Informations"<<endl;
	cout<<"Money "<<"Population "<<"Army "<<"Morals "<<endl;
	cout<<city->money<<" "<<city->people<<" "<<city->army<<" "<<city->morals<<endl;

	cout<<"Houses "<<"Palaces "<<"Barracks "<<"Towers "<<endl;
	cout<<city->buildings.houses<<" "<<city->buildings.palaces<<" "<<city->buildings.barracks<<" "<<city->buildings.towers<<endl;
}

void clearCityData(City* city)
{

	city->money=1000; city->people=20; city->army=0; city->morals=10;
	city->buildings.barracks=0; city->buildings.houses=0; city->buildings.palaces=0; city->buildings.towers=0;
	city->storage.grain=100; city->storage.stone=100; city->storage.wood=100;
}

void saveGame(City* city, string character_name)
{
	fstream save_file;
	save_file.open("save.txt", ios::out | ios::trunc);

	save_file<<character_name<<endl;
	save_file<<city->name<<endl;
	save_file<<city->money<<endl;
	save_file<<city->people<<endl;
	save_file<<city->army<<endl;
	save_file<<city->morals<<endl;
	save_file<<city->buildings.barracks<<endl;
	save_file<<city->buildings.houses<<endl;
	save_file<<city->buildings.palaces<<endl;
	save_file<<city->buildings.towers<<endl;
	save_file<<city->storage.grain<<endl;
	save_file<<city->storage.stone<<endl;
	save_file<<city->storage.wood<<endl;
	save_file.close();
}

int main()
{
	hideCursor(); //ukrycie migajacego kursora
	//------------------------------------// sztywne wymiary okna 120x40
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); 
	COORD c2; 
	c2.X = 120;
	c2.Y = 40;
	SetConsoleScreenBufferSize(handle, c2); 

	SMALL_RECT sr; 
	sr.Left = 0; 
	sr.Top = 0; 
	sr.Right = c2.X-1; 
	sr.Bottom = c2.Y-1; 
	SetConsoleWindowInfo(handle,true,&sr); 
	//------------------------------------//

	fstream save_file;

	//------------------------------------//

	string character_name;

	//------------------------------------//

	int arrow_num=0;

	int main_menu_i=0;
	int main_menu_test=true;

	int second_menu_i=0;
	int second_menu_test=true;

	int game_menu_i=0;
	int game_menu_test=true;

	mainMenu(0);

	while(main_menu_test)
	{
		arrow_num = arrowSupport(getch());
		
		if (arrow_num==1 & main_menu_i<3)
		{
			main_menu_i++;
		}

		if (arrow_num==0 & main_menu_i>0)
		{
			main_menu_i--;
		}

		if (arrow_num==9 & main_menu_i==3) main_menu_test=false; // warunek wyjścia z gry

		if (arrow_num==9 & main_menu_i==0)
		{
			secondMenu(0);

			City *city=new City();

			while(second_menu_test)
			{
				arrow_num = arrowSupport(getch());

				if (arrow_num==1 & second_menu_i<3)
				{
					second_menu_i++;
				}

				if (arrow_num==0 & second_menu_i>0)
				{
					second_menu_i--;
				}

				if (arrow_num==9 & second_menu_i==3) second_menu_test=false; // warunek wyjścia do menu

				if (arrow_num==9 & second_menu_i==2)
				{
					system("cls");
					save_file.open("save.txt", ios::out | ios::trunc);
					MyKingdomTXT();

					character_name=""; city->name="";
					clearCityData(city);

					cout.width(145/2); cout<<"Saved game deleted. \n"<<endl;
					cout.width(90/2); cout<<" "; system("pause");
					system("cls");
					save_file.close();
				}

				if (arrow_num==9 & second_menu_i==0)
				{
					cin.sync();
					system("cls");

					MyKingdomTXT(); showCursor(); clearCityData(city);

					cout.width(170/2); cout<<"(Stranger) Hello, what's your name traveller? "<<endl;
					SetConsoleTextAttribute ( handle , 2) ; cout.width(100/2); cout<<"(You) ";
					getline(cin, character_name); hideCursor(); SetConsoleTextAttribute ( handle , 7);
					
					cin.sync(); cout<<endl;
					
					cout.width(100/2); cout<<"(Stranger) "<<character_name<<", you are king now."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(177/2); cout<<"(Stranger) Tell me, how will you name your city? "<<endl; showCursor();
					SetConsoleTextAttribute ( handle , 2) ; cout.width(100/2); cout<<"(You) ";
					getline(cin, city->name); hideCursor(); SetConsoleTextAttribute ( handle , 7);
				
					cout<<endl;

					cout.width(169/2); cout<<"(Stranger) Ohh, I forgot to introduce myself,"<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(179/2); cout<<"(Stranger) I'm guard commander and your counselor."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(143/2); cout<<"(Proventus) My name is Proventus."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(143/2); cout<<"(You) Ok, nice to meet you."<<endl; SetConsoleTextAttribute ( handle , 7) ; Sleep(1 * CLOCKS_PER_SEC);

					cout<<endl;

					cout.width(100/2); cout<<"(Proventus) "<<character_name<<" I think "<<city->name<<" is very good name."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(135/2); cout<<"(Proventus) At start we have "<<city->money<<" gold money."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(205/2); cout<<"(You) It's kind of weird that I became king, but so it be."; SetConsoleTextAttribute ( handle , 7);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(165/2); cout<<"(You) Let's started!"<<endl; SetConsoleTextAttribute ( handle , 7);
					
					save_file.close();
					system("pause");

					gameMenu(0, city); saveGame(city, character_name);

					while(game_menu_test)
					{
						arrow_num = arrowSupport(getch());

						if (arrow_num==1 & game_menu_i<3)
						{
							game_menu_i++;
						}

						if (arrow_num==0 & game_menu_i>0)
						{
							game_menu_i--;
						}

						gameMenu(game_menu_i, city);
					}
				}

				secondMenu(second_menu_i);
			}
			second_menu_test=true;
			second_menu_i=0;
		}

		mainMenu(main_menu_i);
	}
}
