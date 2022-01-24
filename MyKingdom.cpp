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

void hideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void showCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

int arrowSupport(unsigned char keyboard_char) // funkcja do obslugi strzalek
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

void buildAnim(string item_name)
{
	int time=500;
	int n=3;

	for (int i=0; i<n; i++)
	{
		system("cls");

		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"            ___   "<<endl;
		cout.width(140/2); cout<<"           |   |  "<<endl;
		cout.width(140/2); cout<<"  +========|   |  "<<endl;
		cout.width(140/2); cout<<"           |___|  "<<endl;
		cout.width(140/2); cout<<"=================="<<endl;
		cout.width(145/2); cout<<"Building in progress .."<<endl;
		Sleep(time);
		system("cls");

		cout.width(140/2); cout<<"    _______       "<<endl;
		cout.width(140/2); cout<<"   |_______|      "<<endl;
		cout.width(140/2); cout<<"     //           "<<endl;
		cout.width(140/2); cout<<"    //            "<<endl;
		cout.width(140/2); cout<<"   //       _     "<<endl;
		cout.width(140/2); cout<<"   +        |     "<<endl;
		cout.width(140/2); cout<<"=================="<<endl;
		cout.width(147/2); cout<<"Building in progress ..."<<endl<<endl;
		Sleep(time);
	}

	cout.width(110/2); cout<<" "; cout<<"+1 "<<item_name<<endl<<endl;
	cout.width(90/2); cout<<" "; system("pause");
}

void armyAnim(string item_name)
{
	int time=500;
	int n=3;

	for (int i=0; i<n; i++)
	{
		system("cls");

		cout.width(140/2); cout<<"        ++        "<<endl;
		cout.width(140/2); cout<<"        ||        "<<endl;
		cout.width(140/2); cout<<"        ||        "<<endl;
		cout.width(140/2); cout<<"     ---@@---     "<<endl;
		cout.width(140/2); cout<<"        | |       "<<endl;
		cout.width(140/2); cout<<"        | |       "<<endl;
		cout.width(140/2); cout<<"        |/        "<<endl;
		cout.width(140/2); cout<<"=================="<<endl;
		cout.width(140/2); cout<<"Army incoming .."<<endl;
		Sleep(time);
		system("cls");

		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"        ++        "<<endl;
		cout.width(140/2); cout<<"        ||        "<<endl;
		cout.width(140/2); cout<<"        ||        "<<endl;
		cout.width(140/2); cout<<"     ---@@---     "<<endl;
		cout.width(140/2); cout<<"        | |       "<<endl;
		cout.width(140/2); cout<<"        | |       "<<endl;
		cout.width(140/2); cout<<"=================="<<endl;
		cout.width(142/2); cout<<"Army incoming ..."<<endl<<endl;
		Sleep(time);
	}

	cout.width(110/2); cout<<" "; cout<<"+1 "<<item_name<<endl<<endl;
	cout.width(90/2); cout<<" "; system("pause");
}

void warAnim()
{
	int time=500;
	int n=3;

	for (int i=0; i<n; i++)
	{
		system("cls");

		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"         |        "<<endl;
		cout.width(140/2); cout<<"         |        "<<endl;
		cout.width(140/2); cout<<"       --o--      "<<endl;
		cout.width(140/2); cout<<"        |||       "<<endl;
		cout.width(140/2); cout<<"        |||       "<<endl;
		cout.width(140/2); cout<<"       \\|/       "<<endl;
		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(135/2); cout<<endl<<"Battle .."<<endl;
		Sleep(time);
		system("cls");

		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"                  "<<endl;
		cout.width(140/2); cout<<"     |_______     "<<endl;
		cout.width(140/2); cout<<" ----o-------->   "<<endl;
		cout.width(140/2); cout<<"     |            "<<endl;
		cout.width(140/2); cout<<"        /    /    "<<endl;
		cout.width(140/2); cout<<"          /       "<<endl;
		cout.width(137/2); cout<<endl<<"Battle ..."<<endl;
		Sleep(time);
	}
	cout<<endl;
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
	string character_name;
	string name;
	int money;
	int people;
	int army;
	int morals;
	Buildings buildings;
	Storage storage;
};

void mainMenu(int menu_select) // menu glowne
{
	Sleep(1);
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

void secondMenu(int menu_select) // menu save'ów
{
	Sleep(1);
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

void tradeMenu(int menu_select, City* city) // menu handlu
{
	Sleep(1);
	system("cls");
	
	cout<<endl;
	cout.width(156/2); cout<<"/-------------------------------------\\"<<endl;
	cout.width(92/2); cout<<"< Grain "<<setw(5)<<city->storage.grain<<" | Stone "<<setw(5)<<city->storage.stone<<" | Wood "<<setw(4)<<city->storage.wood<<" >"<<endl;
	cout.width(156/2); cout<<"\\-------------------------------------/"<<endl;
	cout.width(120/2); cout<<"Money: "<<city->money<<endl;
	cout<<endl;

	string opt[3]{"Buy","Sell","Back"};

	for (int i=0; i<3; i++)
	{
		if (menu_select==i)
		{
			string tmp="-> "+opt[i];
			
			cout.width(120/2);
			cout<<tmp<<endl;
		}
		else 
		{
			cout.width(120/2);
			cout<<opt[i]<<endl;
		}
	}
	
}

void tradingMenu(int menu_select, City* city, string trade_cat, HANDLE handle) // menu sprzedaz
{
	Sleep(1);
	system("cls");
	
	cout<<endl;
	cout.width(156/2); cout<<"/-------------------------------------\\"<<endl;
	cout.width(92/2); cout<<"< Grain "<<setw(5)<<city->storage.grain<<" | Stone "<<setw(5)<<city->storage.stone<<" | Wood "<<setw(4)<<city->storage.wood<<" >"<<endl;
	cout.width(156/2); cout<<"\\-------------------------------------/"<<endl;
	cout.width(120/2); cout<<"Money: "<<city->money<<endl;
	cout<<endl;

	
	cout.width(120/2); SetConsoleTextAttribute ( handle , 8) ; cout<<trade_cat<<":"<<endl; SetConsoleTextAttribute ( handle , 7) ;

	string opt[4]{"Grain","Stone","Wood","Back"};

	for (int i=0; i<4; i++)
	{
		if (menu_select==i)
		{
			string tmp="-> "+opt[i];
			
			cout.width(120/2);
			cout<<tmp<<endl;
		}
		else 
		{
			cout.width(120/2);
			cout<<opt[i]<<endl;
		}
	}
	
}

void warMenu(int menu_select, City* city) // menu wojny
{
	Sleep(1);
	system("cls");
	
	cout<<endl;
	cout.width(145/2); cout<<"War Campaign Panel"<<endl;
	cout.width(150/2); cout<<"Choose difficulty level:"<<endl;

	cout<<endl;
	cout.width(156/2); cout<<"/-----------------------------\\"<<endl;
	cout.width(110/2); cout<<"< Army "<<setw(5)<<city->army<<" | Morals "<<setw(5)<<city->morals<<" >"<<endl;
	cout.width(156/2); cout<<"\\-----------------------------/"<<endl;
	cout<<endl;

	string opt[5]{"Easy  ","Normal ","Hard  ","Legendary","Back  "};

	for (int i=0; i<5; i++)
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

void gameMenu(int menu_select, City* city, HANDLE handle) // menu wioski
{
	Sleep(1);
	system("cls");

	time_t theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);
	
	int hour=aTime->tm_hour;
	int min=aTime->tm_min;

	SetConsoleTextAttribute ( handle , 8) ; cout<<"Profile: "<<city->character_name<<endl; SetConsoleTextAttribute ( handle , 7) ;
	SetConsoleTextAttribute ( handle , 2) ; for(int i=0; i<48; i++) cout<<"-";
	cout<<"----+ YourKingdom +----"; for(int i=0; i<49; i++) cout<<"-"; cout<<endl;
	SetConsoleTextAttribute ( handle , 7) ;
	cout.width((120+city->name.length())/2); cout<<city->name<<endl<<endl;

	cout.width(40/2); for(int i=0; i<24; i++) cout<<"-"; cout<<"--------! Informations !--------";   for(int i=0; i<24; i++) cout<<"-"; cout<<endl<<endl;
	cout.width(121/2); cout<<"Time is "<<hour<<" : "<<min<<endl;
	SetConsoleTextAttribute ( handle , 8) ; cout.width(88/2); cout<<"+"; for(int i=0; i<30; i++) cout<<"-"; cout<<"+"; cout<<endl; SetConsoleTextAttribute ( handle , 7) ;

	cout.width(88/2); SetConsoleTextAttribute ( handle , 8) ; cout<<"|"; SetConsoleTextAttribute ( handle , 7) ; cout<<" Money "<<"Population "<<"Army "<<"Morals "; SetConsoleTextAttribute ( handle , 8) ; cout<<"|"<<endl; SetConsoleTextAttribute ( handle , 7) ;
	cout.width(90/2); SetConsoleTextAttribute ( handle , 8) ;cout<<"| "; SetConsoleTextAttribute ( handle , 7) ; cout<<setw(5)<<city->money<<" "<<setw(10)<<city->people<<" "<<setw(4)<<city->army<<" "<<setw(6)<<city->morals; SetConsoleTextAttribute ( handle , 8) ; cout<<" |"<<endl; SetConsoleTextAttribute ( handle , 7) ;

	SetConsoleTextAttribute ( handle , 8) ; cout.width(88/2); cout<<"+"; for(int i=0; i<30; i++) cout<<"-"; cout<<"+"; cout<<endl; SetConsoleTextAttribute ( handle , 7) ;

	cout.width(88/2); SetConsoleTextAttribute ( handle , 8) ; cout<<"|"; SetConsoleTextAttribute ( handle , 7) ; cout<<"Houses "<<"Palaces "<<"Barracks "<<"Towers"; SetConsoleTextAttribute ( handle , 8) ; cout<<"|"<<endl; SetConsoleTextAttribute ( handle , 7) ;
	cout.width(88/2); SetConsoleTextAttribute ( handle , 8) ;cout<<"|"; SetConsoleTextAttribute ( handle , 7) ; cout<<setw(6)<<city->buildings.houses<<" "<<setw(7)<<city->buildings.palaces<<" "<<setw(8)<<city->buildings.barracks<<" "<<setw(6)<<city->buildings.towers; SetConsoleTextAttribute ( handle , 8) ; cout<<"|"<<endl; SetConsoleTextAttribute ( handle , 7) ;

	SetConsoleTextAttribute ( handle , 8) ; cout.width(88/2); cout<<"+"; for(int i=0; i<30; i++) cout<<"-"; cout<<"+"; cout<<endl; SetConsoleTextAttribute ( handle , 7) ;
 
	cout<<endl;
	string opt[11]{"Build Cottage     ","Build Palace      ","Build Tower      ","Build Barracks    ","Recruit a Mercenaries ","Recruit a General   ","Recruit a Palace Manager","Trade          ","Storage         ","War Campain       ","Back          "};

	for (int i=0; i<11; i++)
	{
		if (menu_select==i)
		{
			string tmp="-> "+opt[i];
			
			cout.width(142/2);
			cout<<tmp<<endl;
		}
		else 
		{
			cout.width(142/2);
			cout<<opt[i]<<endl;
		}
	}
}

void clearCityData(City* city) // czyszczenie danych wioski
{
	city->character_name="", city->name="";
	city->money=1000; city->people=20; city->army=0; city->morals=10;
	city->buildings.barracks=0; city->buildings.houses=0; city->buildings.palaces=0; city->buildings.towers=0;
	city->storage.grain=100; city->storage.stone=100; city->storage.wood=100;
}

void saveGame(City* city) // zapisywanie stanu gry do pliku
{
	ofstream save_file;
	save_file.open("save.txt");

	save_file<<city->character_name<<endl;
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

void loadGame(City* city) // wczytywanie zapisu z pliku
{
	ifstream save_file;
	save_file.open("save.txt");

	getline(save_file, city->character_name);
	getline(save_file, city->name);
	save_file>>city->money;
	save_file>>city->people;
	save_file>>city->army;
	save_file>>city->morals;
	save_file>>city->buildings.barracks;
	save_file>>city->buildings.houses;
	save_file>>city->buildings.palaces;
	save_file>>city->buildings.towers;
	save_file>>city->storage.grain;
	save_file>>city->storage.stone;
	save_file>>city->storage.wood;
	
	save_file.close();
}

void game(City* city, HANDLE handle) // funkcja z grą
{
	int game_menu_i=0;
	int game_menu_test=true;
	int arrow_num=0;
	
	int trade_menu_i=0;
	int trade_menu_test=true;

	int trading_menu_i=0;
	int trading_menu_test=true;

	int war_menu_i=0;
	int war_menu_test=true;

	gameMenu(0, city, handle);

	while(game_menu_test)
	{
		arrow_num = arrowSupport(getch());

		if (arrow_num==1 & game_menu_i<10)
		{
			game_menu_i++;
		}

		if (arrow_num==0 & game_menu_i>0)
		{
			game_menu_i--;
		}

		if (arrow_num==9 & game_menu_i==0) // domek
		{
			if (city->money-200>=0) 
			{
				city->buildings.houses += 1;
				city->money -= 200;
				city->people += 4;
				buildAnim("Cottage");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==1) // palac
		{
			if (city->money-350>=0)
			{
				city->buildings.palaces += 1;
				city->money -= 350;
				city->morals += 5;
				city->army +=2;
				city->people += 6;
				buildAnim("Palace");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==2) // wieza
		{
			if (city->money-120>=0)
			{
				city->buildings.towers += 1;
				city->money -= 120;
				city->morals += 2;
				city->army += 1;
				buildAnim("Tower");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==3) // koszary
		{
			if (city->money-220>=0)
			{
				city->buildings.barracks += 1;
				city->money -= 220;
				city->morals += 10;
				city->army += 20;
				buildAnim("Barracks");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==4) // rekrutacja armii
		{
			if (city->money-150>=0)
			{
				city->money -= 150;
				city->morals += 5;
				city->army += 15;
				armyAnim("Mercenary squad");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==5) // general
		{
			if (city->money-100>=0)
			{
				city->money -= 100;
				city->morals += 10;
				city->army += 1;
				armyAnim("General");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==6) // szlachta
		{
			
			if (city->money-70>=0)
			{
				city->money -= 70;
				city->people += 1;
				city->morals += 3;
				armyAnim("Palace manager");
			}
			else
			{
				cout<<"Not enough gold!"<<endl;
				system("pause");
			}
		}

		if (arrow_num==9 & game_menu_i==7) // handel
		{
			tradeMenu(0, city);

			while (trade_menu_test)
			{
				arrow_num = arrowSupport(getch());

				if (arrow_num==1 & trade_menu_i<2)
				{
					trade_menu_i++;
				}

				if (arrow_num==0 & trade_menu_i>0)
				{
					trade_menu_i--;
				}

				if (arrow_num==9 & trade_menu_i==0) // kupowanie
				{
					tradingMenu(0, city, "Buy", handle);

					while (trading_menu_test)
					{
						arrow_num = arrowSupport(getch());

						if (arrow_num==1 & trading_menu_i<3)
						{
							trading_menu_i++;
						}

						if (arrow_num==0 & trading_menu_i>0)
						{
							trading_menu_i--;
						}

						if (arrow_num==9 & trading_menu_i==0) //grain
						{
							if (city->money-10>=0)
							{
								city->money -= 10;
								city->storage.grain += 15;
							}
							else
							{
								cout<<"Not enough gold!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==1) //stone
						{
							if (city->money-20>=0)
							{
								city->money -= 20;
								city->storage.stone += 10;
							}
							else
							{
								cout<<"Not enough gold!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==2) //wood
						{
							if (city->money-15>=0)
							{
								city->money -= 15;
								city->storage.wood += 10;
							}
							else
							{
								cout<<"Not enough gold!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==3) trading_menu_test=false;

						tradingMenu(trading_menu_i, city, "Buy", handle);
					}

					trading_menu_test=true;
					trading_menu_i=0;

				}

				if (arrow_num==9 & trade_menu_i==1) // sprzedawanie
				{
					tradingMenu(0, city, "Sell", handle);

					while (trading_menu_test)
					{
						arrow_num = arrowSupport(getch());

						if (arrow_num==1 & trading_menu_i<3)
						{
							trading_menu_i++;
						}

						if (arrow_num==0 & trading_menu_i>0)
						{
							trading_menu_i--;
						}

						if (arrow_num==9 & trading_menu_i==0) //grain
						{
							if(city->storage.grain-15>=0)
							{
								city->money += 15;
								city->storage.grain -= 15;
							}
							else
							{
								cout<<"Not enough grain!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==1) //stone
						{
							if (city->storage.stone-10>=0)
							{
								city->money += 25;
								city->storage.stone -= 10;
							}
							else
							{
								cout<<"Not enough stone!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==2) //wood
						{
							if (city->storage.wood-10>=0)
							{
								city->money += 20;
								city->storage.wood -= 10;
							}
							else
							{
								cout<<"Not enough wood!"<<endl;
								system("pause");
							}
						}

						if (arrow_num==9 & trading_menu_i==3) trading_menu_test=false;

						tradingMenu(trading_menu_i, city, "Sell", handle);
					}

					trading_menu_test=true;
					trading_menu_i=0;

				}

				if (arrow_num==9 & trade_menu_i==2) trade_menu_test=false;

				tradeMenu(trade_menu_i, city);
			}

			trade_menu_test=true;
			trade_menu_i=0;
		}

		if (arrow_num==9 & game_menu_i==8) // magazyn
		{
			cout<<endl;
			cout.width(156/2); cout<<"/-------------------------------------\\"<<endl;
			cout.width(92/2); cout<<"< Grain "<<setw(5)<<city->storage.grain<<" | Stone "<<setw(5)<<city->storage.stone<<" | Wood "<<setw(4)<<city->storage.wood<<" >"<<endl;
			cout.width(156/2); cout<<"\\-------------------------------------/"<<endl;
			cout<<endl;

			cout.width(90/2); cout<<" "; system("pause");
		}

		if (arrow_num==9 & game_menu_i==9) // wojna
		{
			warMenu(0, city);

			while (war_menu_test)
			{
				arrow_num = arrowSupport(getch());

				if (arrow_num==1 & war_menu_i<4)
				{
					war_menu_i++;
				}

				if (arrow_num==0 & war_menu_i>0)
				{
					war_menu_i--;
				}

				if (arrow_num==9 & war_menu_i==0)
				{
					Sleep(1);
					system ("cls");
														
					cout.width(150/2); cout<<endl<<"Welcome in easy war campain! "<<endl;
					cout.width(158/2); cout<<"Army are waiting for your order my Lord!"<<endl<<endl;
					
					cout.width(90/2); cout<<" "; system ("pause");
					
					warAnim();

					if (city->army>=50 & city->morals>=10)
					{
						cout.width(170/2); cout<<"(Proventus) Congratulations my Lord, we won! "<<endl<<endl;
						SetConsoleTextAttribute ( handle , 2) ; cout.width(140/2); cout<<"War spoils: "<<endl;
						cout.width(105/2); cout<<"Money +400 "<<"Grain +25 "<<"Stone +30 "<<"Wood +35"<<endl<<endl; SetConsoleTextAttribute ( handle , 7) ;
						cout.width(177/2); cout<<"(Proventus) But we lost small part of our army. "<<endl<<endl;

						city->money += 400;
						city->storage.grain += 25;
						city->storage.stone += 30;
						city->storage.wood += 35;
						city->army -= (0.15*city->army);

						cout.width(90/2); cout<<" "; system("pause");
					}
					else
					{
						cout.width(160/2); cout<<"(Proventus) I have bad news... we lost."<<endl<<endl;

						city->money -= (0.50*city->money);
						city->storage.grain -= (0.60*city->storage.grain);
						city->storage.stone -= (0.30*city->storage.stone);
						city->storage.wood -= (0.35*city->storage.wood);
						city->army -= (0.75*city->army);
						city->morals -= (0.50*city->morals);

						cout.width(90/2); cout<<" "; system ("pause");
					}
				}

				if (arrow_num==9 & war_menu_i==1)
				{
					Sleep(1);
					system ("cls");
														
					cout.width(150/2); cout<<endl<<"Welcome in normal war campain! "<<endl;
					cout.width(158/2); cout<<"Army are waiting for your order my Lord!"<<endl<<endl;
					
					cout.width(90/2); cout<<" "; system ("pause");
					
					warAnim();

					if (city->army>=150 & city->morals>=30)
					{
						cout.width(170/2); cout<<"(Proventus) Congratulations my Lord, we won! "<<endl<<endl;
						SetConsoleTextAttribute ( handle , 2) ; cout.width(140/2); cout<<"War spoils: "<<endl;
						cout.width(105/2); cout<<"War spoils: "<<"Money +550 "<<"Grain +35 "<<"Stone +40 "<<"Wood +60"<<endl<<endl; SetConsoleTextAttribute ( handle , 7) ;
						cout.width(177/2); cout<<"(Proventus) But we lost small part of our army. "<<endl<<endl;

						city->money += 550;
						city->storage.grain += 35;
						city->storage.stone += 40;
						city->storage.wood += 60;
						city->army -= (0.15*city->army);

						cout.width(90/2); cout<<" "; system("pause");
					}
					else
					{
						cout.width(160/2); cout<<"(Proventus) I have bad news... we lost."<<endl<<endl;

						city->money -= (0.60*city->money);
						city->storage.grain -= (0.70*city->storage.grain);
						city->storage.stone -= (0.40*city->storage.stone);
						city->storage.wood -= (0.45*city->storage.wood);
						city->army -= (0.75*city->army);
						city->morals -= (0.50*city->morals);

						cout.width(90/2); cout<<" "; system ("pause");
					}
				}

				if (arrow_num==9 & war_menu_i==2)
				{
					Sleep(1);
					system ("cls");
														
					cout.width(150/2); cout<<endl<<"Welcome in hard war campain! "<<endl;
					cout.width(158/2); cout<<"Army are waiting for your order my Lord!"<<endl<<endl;
					
					cout.width(90/2); cout<<" "; system ("pause");
					
					warAnim();

					if (city->army>=450 & city->morals>=90)
					{
						cout.width(170/2); cout<<"(Proventus) Congratulations my Lord, we won! "<<endl<<endl;
						SetConsoleTextAttribute ( handle , 2) ; cout.width(140/2); cout<<"War spoils: "<<endl;
						cout.width(105/2); cout<<"War spoils: "<<"Money +700 "<<"Grain +50 "<<"Stone +55 "<<"Wood +65"<<endl<<endl; SetConsoleTextAttribute ( handle , 7) ;
						cout.width(177/2); cout<<"(Proventus) But we lost small part of our army. "<<endl<<endl;

						city->money += 700;
						city->storage.grain += 50;
						city->storage.stone += 55;
						city->storage.wood += 65;
						city->army -= (0.15*city->army);

						cout.width(90/2); cout<<" "; system("pause");
					}
					else
					{
						cout.width(160/2); cout<<"(Proventus) I have bad news... we lost."<<endl<<endl;

						city->money -= (0.70*city->money);
						city->storage.grain -= (0.80*city->storage.grain);
						city->storage.stone -= (0.50*city->storage.stone);
						city->storage.wood -= (0.55*city->storage.wood);
						city->army -= (0.85*city->army);
						city->morals -= (0.70*city->morals);

						cout.width(90/2); cout<<" "; system ("pause");
					}
				}

				if (arrow_num==9 & war_menu_i==3)
				{
					Sleep(1);
					system ("cls");
														
					cout.width(150/2); cout<<endl<<"Welcome in legendary war campain! "<<endl;
					cout.width(158/2); cout<<"Army are waiting for your order my Lord!"<<endl<<endl;
					
					cout.width(90/2); cout<<" "; system ("pause");
					
					warAnim();

					if (city->army>=1000 & city->morals>=500)
					{
						cout.width(170/2); cout<<"(Proventus) Congratulations my Lord, we won! "<<endl<<endl;
						SetConsoleTextAttribute ( handle , 2) ; cout.width(140/2); cout<<"War spoils: "<<endl;
						cout.width(105/2); cout<<"War spoils: "<<"Money +1300 "<<"Grain +200 "<<"Stone +120 "<<"Wood +105"<<endl<<endl; SetConsoleTextAttribute ( handle , 7) ;
						cout.width(177/2); cout<<"(Proventus) But we lost small part of our army. "<<endl<<endl;

						city->money += 1300;
						city->storage.grain += 200;
						city->storage.stone += 120;
						city->storage.wood += 105;
						city->army -= (0.20*city->army);

						cout.width(90/2); cout<<" "; system("pause");
					}
					else
					{
						cout.width(160/2); cout<<"(Proventus) I have bad news... we lost."<<endl<<endl;

						city->money -= (0.90*city->money);
						city->storage.grain -= (0.90*city->storage.grain);
						city->storage.stone -= (0.80*city->storage.stone);
						city->storage.wood -= (0.85*city->storage.wood);
						city->army -= (0.80*city->army);
						city->morals -= (0.80*city->morals);

						cout.width(90/2); cout<<" "; system ("pause");
					}
				}

				if (arrow_num==9 & war_menu_i==4) war_menu_test = false;

				warMenu(war_menu_i, city);
			}

			war_menu_test=true;
			war_menu_i=0;
		}

		if (arrow_num==9 & game_menu_i==10)
		{
			saveGame(city);
			game_menu_test=false; // wyjscie
		}
		gameMenu(game_menu_i, city, handle);
	}

	game_menu_test=true;
	game_menu_i=0;
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

	int arrow_num=0;

	int main_menu_i=0;
	int main_menu_test=true;

	int second_menu_i=0;
	int second_menu_test=true;

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

		if (arrow_num==9 & main_menu_i==1) // instrukcja
		{
			Sleep(1);
			system("cls");
			cout<<"instruction"<<endl;
			system("pause");
		}

		if (arrow_num==9 & main_menu_i==2) // twórcy
		{
			Sleep(1);
			system("cls");
			cout<<"wybielak"<<endl;
			system("pause");
		}

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

				if (arrow_num==9 & second_menu_i==2) // usunięcie save
				{
					Sleep(1);
					system("cls");
					save_file.open("save.txt", ios::out | ios::trunc);
					MyKingdomTXT();

					clearCityData(city);

					cout.width(145/2); cout<<"Saved game deleted. \n"<<endl;
					cout.width(90/2); cout<<" "; system("pause");
					Sleep(1);
					system("cls");
					save_file.close();
				}

				if (arrow_num==9 & second_menu_i==0) // nowa gra
				{
					cin.sync();
					Sleep(1);
					system("cls");

					MyKingdomTXT(); showCursor(); clearCityData(city); // dialog z poczatku gry

					cout.width(170/2); cout<<"(Stranger) Hello, what's your name traveller? "<<endl;
					SetConsoleTextAttribute ( handle , 2) ; cout.width(100/2); cout<<"(You) ";
					getline(cin, city->character_name); hideCursor(); SetConsoleTextAttribute ( handle , 7);
					
					cin.sync(); cout<<endl;
					
					cout.width(100/2); cout<<"(Stranger) "<<city->character_name<<", you are king now."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(177/2); cout<<"(Stranger) Tell me, how will you name your city? "<<endl; showCursor();
					SetConsoleTextAttribute ( handle , 2) ; cout.width(100/2); cout<<"(You) ";
					getline(cin, city->name); hideCursor(); SetConsoleTextAttribute ( handle , 7);
				
					cout<<endl;

					cout.width(169/2); cout<<"(Stranger) Ohh, I forgot to introduce myself,"<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(179/2); cout<<"(Stranger) I'm guard commander and your counselor."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(143/2); cout<<"(Proventus) My name is Proventus."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(143/2); cout<<"(You) Ok, nice to meet you."<<endl; SetConsoleTextAttribute ( handle , 7) ; Sleep(1 * CLOCKS_PER_SEC);

					cout<<endl;

					cout.width(100/2); cout<<"(Proventus) "<<city->character_name<<" I think "<<city->name<<" is very good name."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					cout.width(135/2); cout<<"(Proventus) At start we have "<<city->money<<" gold money."<<endl; Sleep(1 * CLOCKS_PER_SEC);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(205/2); cout<<"(You) It's kind of weird that I became king, but so it be."; SetConsoleTextAttribute ( handle , 7);
					SetConsoleTextAttribute ( handle , 2) ; cout.width(165/2); cout<<"(You) Let's started!"<<endl; SetConsoleTextAttribute ( handle , 7);
					
					cout.width(90/2); cout<<" "; system("pause");

					game(city, handle); // uruchomienie głównej funkcji gry
				}

				if (arrow_num==9 & second_menu_i==1) // wczytywanie z save'a
				{
					Sleep(1);
					system("cls");

					MyKingdomTXT();

					save_file.open("save.txt", ios::in | ios::ate);

					if (save_file.tellg()!=0 & save_file.is_open()) // sprawdzenie czy jest save
					{
						loadGame(city);

						cout.width(140/2); cout<<"Proventus: Welcome back in "<<city->name<<endl<<endl;
						cout.width(90/2); cout<<" "; system("pause");

						game(city, handle); // uruchomienie głównej funkcji gry
					}

					else
					{
						cout.width(150/2); cout<<"No save file! Start new game!"<<endl;
						cout.width(90/2); cout<<" "; system("pause");
					}

					save_file.close();
				}

				secondMenu(second_menu_i);
			}
			second_menu_test=true;
			second_menu_i=0;
		}

		mainMenu(main_menu_i);
	}
}
