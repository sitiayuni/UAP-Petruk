#include <iostream>	
#include <stack>
#include <conio.h>
#include <windows.h>
using namespacse std;

string mkp, tgl;
int kode;
stack <int> Koperl1;
stack <int> Koperl2;
stack <int> Koperb1;
stack <int> Koperb2;

void setcolor (unsigned short color){
  HANDLE hCon= GetStdHandle (STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hCon, color);
}

COORD coord = {X:0, Y:0};
void gotoxy(int x, int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	setcolor(7);
	gotoxy(7,1);cout<<"		         ____     _    ____ ___ _   _   ___ _   _ _____ _____ _   _   ___ ___  ";                           
    	gotoxy(7,2);cout<<"                 |  _ \\   / \\  |  _ |_ _| \\ | | |_ _| \\ | |_   _| ____| \\ | | |_ _|_ _| ";                            
    	gotoxy(7,3);cout<<"                 | |_) | / _ \\ | | | | ||  \\| |  | ||  \\| | | | |  _| |  \\| |  | | | |   "; 
	setcolor(6);                          
   	gotoxy(7,4);cout<<"                 |  _ < / ___ \\| |_| | || |\\  |  | || |\\  | | | | |___| |\\  |  | | | |   ";                            
    	gotoxy(7,5);cout<<"                 |_| \\_/_/   \\_|____|___|_| \\_| |___|_| \\_| |_| |_____|_| \\_| |___|___| ";
	setcolor(7);                                                                                                                                      
	gotoxy(1,7);cout<< " ___ _   _ _____ _____ ____  _   _    _  _____ ___ ___  _   _    _    _          _    ___ ____  ____   ___  ____ _____ 			 ";
	gotoxy(1,8);cout<< "|_ _| \\ | |_   _| ____|  _ \\| \\ | |  / \\|_   _|_ _/ _ \\| \\ | |  / \\  | |        / \\  |_ _|  _ \\|  _ \\ / _ \\|  _ |_   _|";
	gotoxy(1,9);cout<<" | ||  \\| | | | |  _| | |_) |  \\| | / _ \\ | |  | | | | |  \\| | / _ \\ | |       / _ \\  | || |_) | |_) | | | | |_) || |  	 "; 
	setcolor(6);
	gotoxy(1,10);cout<<" | || |\\  | | | | |___|  _ <| |\\  |/ ___ \\| |  | | |_| | |\\  |/ ___ \\| |___   / ___ \\ | ||  _ <|  __/| |_| |  _ < | | 	 "; 
	gotoxy(1,11);cout<<"|___|_| \\_| |_| |_____|_| \\_|_| \\_/_/   \\_|_| |___\\___/|_| \\_/_/   \\_|_____| /_/   \\_|___|_| \\_|_|    \\___/|_| \\_\\|_|"; 
	setcolor(7);
	gotoxy(8,13);cout<<" _    ___ ___  _  _    ___ ___  ___  _   _ ___   ___   _   ___  ___   _   ___ ___   ___  ___  ___  ___  ";
	gotoxy(8,14);cout<<"| |  |_ _/ _ \\| \\| |  / __| _ \\/ _ \\| | | | _ \\ | _ ) /_\\ / __|/ __| /_\\ / __| __| |   \\| _ \\/ _ \\| _ \\ ";
	gotoxy(8,15);cout<<"| |__ | | (_) | .` | | (_ |   / (_) | |_| |  _/ | _ \\/ _ \\ (_ | (_ |/ _ \\ (_ | _|  | |) |   / (_) |  _/ ";
	setcolor(4);
	gotoxy(8,16);cout<<"|____|___\\___/|_|\\_|  \\___|_|_\\\\___/ \\___/|_|   |___/_/ \\_\\___|\\___/_/ \\_\\___|___| |___/|_|_\\\\___/|_|   ";
	setcolor(7);
	gotoxy (44,20); cout << "Tanggal Penerbangan : ";
	getline(cin,tgl);
    
	return 0;
}

void lambangLion (){
	setcolor(4);
	gotoxy (35,2); cout<<"  _      ___    ___    _  _       _     ___   ___"; 
	gotoxy (35,3); cout<<" | |    |_ _|  / _ \\  | \\| |     /_\\   |_ _| | _ \\";
	gotoxy (35,4); cout<<" | |__   | |  | (_) | | .` |    / _ \\   | |  |   /";
	gotoxy (35,5); cout<<" |____| |___|  \\___/  |_|\\_|   /_/ \\_\\ |___| |_|_\\";
}

void lambangBatik (){
	setcolor(4);
	gotoxy (32,2); cout<<"  ___     _     _____   ___   _  __      _     ___   ___"; 
	gotoxy (32,3); cout<<" | _ )   /_\\   |_   _| |_ _| | |/ /     /_\\   |_ _| | _ \\";
	gotoxy (32,4); cout<<" | _ \\  / _ \\    | |    | |  | ' <     / _ \\   | |  |   /";
	gotoxy (32,5); cout<<" |___/ /_/ \\_\\   |_|   |___| |_|\\_\\   /_/ \\_\\ |___| |_|_\\";
}
