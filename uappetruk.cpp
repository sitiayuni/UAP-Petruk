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
  	SetConsoleTextAttribute (hCon, color);
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
	menu();
	
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

void displayl1(stack<int> kode){
	while (!kode.empty()){
		lambangLion();
			setcolor(7);
			gotoxy(20,8);  cout << "================================================================================";
			gotoxy(20,9);  cout << "||    Tanggal    ||   Nomor Penerbangan   ||      Tujuan      ||   No.Koper   ||";
			gotoxy(20,10); cout << "================================================================================";
			for(int i=0; i<Koperl1.size(); i++){
				gotoxy(20,11+i); cout << "||               ||                       ||                  ||              ||";   
				gotoxy(20,12+i); cout << "================================================================================";
				gotoxy(24,11+i); cout << tgl;
				gotoxy(47,11+i); cout << "JT 175";
				gotoxy(67,11+i); cout << "Jakarta (CGK)";
				gotoxy(90,11+i); cout << kode.top(); kode.pop();
			}
   	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void displayl2(stack<int> kode){
	while (!kode.empty()){
		lambangLion();
			setcolor(7);
			gotoxy(20,8);  cout << "================================================================================";
			gotoxy(20,9);  cout << "||    Tanggal    ||   Nomor Penerbangan   ||      Tujuan      ||   No.Koper   ||";
			gotoxy(20,10); cout << "================================================================================";
			for(int i=0; i<Koperl2.size(); i++){
				gotoxy(20,11+i); cout << "||               ||                       ||                  ||              ||";   
				gotoxy(20,12+i); cout << "================================================================================";
				gotoxy(24,11+i); cout << tgl;
				gotoxy(47,11+i); cout << "JT 123";
				gotoxy(67,11+i); cout << "Jakarta (CGK)";
				gotoxy(90,11+i); cout << kode.top(); kode.pop();
			}
   	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void displayb1(stack<int> kode){
	while (!kode.empty()){
		lambangLion();
			setcolor(7);
			gotoxy(20,8);  cout << "================================================================================";
			gotoxy(20,9);  cout << "||    Tanggal    ||   Nomor Penerbangan   ||      Tujuan      ||   No.Koper   ||";
			gotoxy(20,10); cout << "================================================================================";
			for(int i=0; i<Koperb1.size(); i++){
				gotoxy(20,11+i); cout << "||               ||                       ||                  ||              ||";   
				gotoxy(20,12+i); cout << "================================================================================";
				gotoxy(24,11+i); cout << tgl;
				gotoxy(47,11+i); cout << "ID 6112";
				gotoxy(67,11+i); cout << "Jakarta (CGK)";
				gotoxy(90,11+i); cout << kode.top(); kode.pop();
			}
   	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void displayb2(stack<int> kode){
	while (!kode.empty()){
		lambangLion();
			setcolor(7);
			gotoxy(20,8);  cout << "================================================================================";
			gotoxy(20,9);  cout << "||    Tanggal    ||   Nomor Penerbangan   ||      Tujuan      ||   No.Koper   ||";
			gotoxy(20,10); cout << "================================================================================";
			for(int i=0; i<Koperb2.size(); i++){
				gotoxy(20,11+i); cout << "||               ||                       ||                  ||              ||";   
				gotoxy(20,12+i); cout << "================================================================================";
				gotoxy(24,11+i); cout << tgl;
				gotoxy(47,11+i); cout << "ID 6351";
				gotoxy(67,11+i); cout << "Jakarta (CGK)";
				gotoxy(90,11+i); cout << kode.top(); kode.pop();
			}
   	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void load(){                                                                 
	for (int x=3; x>=0; x--){
		gotoxy(50,13); cout<<"LOADING.";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"LOADING..";
		Sleep(100);
		system("cls");
		gotoxy(50,13); cout<<"LOADING...";
		Sleep(100);
		system("cls");
	}
}

void lionair(){
	system("cls");
	stack<int> Koper;
	int pilihan,jumlah;
	int np;
	lambangLion();
	setcolor(7);
	gotoxy (49,9);  cout <<	"<><><><><><><><><><><>";		
	gotoxy (55,10); cout << "1. JT 175";
	gotoxy (55,11); cout << "2. JT 123";
	gotoxy (49,12);  cout <<	"<><><><><><><><><><><>";
	gotoxy (50,14); cout << "No. Penerbangan : "; 
	cin >> np;
	
	switch (np){
	
		case 1 :
			while(1){
			system("cls");
			lambangLion();
			setcolor(7);
			gotoxy (45,8);  cout << "No. Penerbangan 	 : JT 175";
			gotoxy (45,9);  cout << "Tujuan 		 : Jakarta (CGK)";
			gotoxy (45,10);  cout << "Waktu Keberangkatan : 11.30 WIB";
			gotoxy(45,12);  cout << "------------------------------";
			gotoxy(45,13);  cout << "|   Program Bagasi Pesawat   |";
			gotoxy(45,14);  cout << "------------------------------";
			gotoxy(45,15);  cout << "------------------------------";
			gotoxy(45,16);  cout << "| 1. Masukkan Koper          |";
			gotoxy(45,17);  cout << "| 2. Keluarkan Koper         |";
			gotoxy(45,18);  cout << "| 3. Tampilkan Jumlah Koper  |";
			gotoxy(45,19);  cout << "| 4. Selesai                 |";
			gotoxy(45,20);  cout << "| 5. Keluar                  |";
			gotoxy(45,21);  cout << "------------------------------";
			gotoxy(45,22);  cout << "Masukkan pilihan : ";	
			cin >> pilihan;
			switch (pilihan){
					
					case 1:
						gotoxy(45,23); cout << "Masukkan Kode Koper : ";
						cin >> kode;
						Koperl1.push(kode);
						system("cls");
						break;
					
					case 2:
						kode = Koperl1.top();
					        Koperl1.pop();
						gotoxy(45,25); cout << "Koper dengan kode " << kode << " telah dikeluarkan" << endl;
						gotoxy(45,27); system ("pause");
					   	break;
					
					case 3:
					    	system("cls");
					    	if (!Koperl1.empty()){
							gotoxy(35,2); cout << "Jumlah Koper yang telah masuk : " << Koperl1.size() << endl;
							load();
							displayl1(Koperl1);
						}
						else{
					        cout << "Bagasi Masih Kosong";
						}
						system ("pause");
						break;
					
					case 4:
						menu();
						break;
					
					case 5:
					    exit(1);
						break;
				
					    cout << "Pilihan salah" << endl;
					}
				}
				break;
			
		case 2 :
			while(1){
			system("cls");
			lambangLion();
			setcolor(7);
			gotoxy (45,7);  cout << "No. Penerbangan 	 : JT 123";
			gotoxy (45,8);  cout << "Tujuan 		 : Jakarta (CGK)";
			gotoxy (45,9);  cout << "Waktu Keberangkatan : 14.30 WIB";
			gotoxy(45,12);  cout << "------------------------------";
			gotoxy(45,13);  cout << "|   Program Bagasi Pesawat   |";
			gotoxy(45,14);  cout << "------------------------------";
			gotoxy(45,15);  cout << "------------------------------";
			gotoxy(45,16);  cout << "| 1. Masukkan Koper          |";
			gotoxy(45,17);  cout << "| 2. Keluarkan Koper      	  |";
			gotoxy(45,18);  cout << "| 3. Tampilkan Jumlah Koper  |";
			gotoxy(45,19);  cout << "| 4. Selesai                 |";
			gotoxy(45,20);  cout << "| 5. Keluar                  |";
			gotoxy(45,21);  cout << "------------------------------";
			gotoxy(45,22);  cout << "Masukkan pilihan : ";
			cin >> pilihan;
				
			switch (pilihan){
					
					case 1:
						gotoxy(45,23); cout << "Masukkan Kode Koper : ";
						cin >> kode;
						Koperl2.push(kode);
						system("cls");
						break;
					
					case 2:
					    	kode = Koperl2.top();
					    	Koperl2.pop();
						gotoxy(45,25); cout << "Koper dengan kode " << kode << " telah dikeluarkan" << endl;
						gotoxy(45,38); system ("pause");
					    	break;
					case 3:
					    system("cls");
					    if (!Koperl2.empty()){
							gotoxy(35,2); cout << "Jumlah Koper yang telah masuk : " << Koperl2.size() << endl;
							load();
					
					
void batikair(){
	system("cls");
	stack <int> Koper;
	int pilihan;
	int jumlah;
	int np;
	lambangBatik();
	
	setcolor(7);
	gotoxy (49,9);  cout <<	"<><><><><><><><><><><>";		
	gotoxy (55,10); cout << "1. ID 6112";
	gotoxy (55,11); cout << "2. ID 6351";
	gotoxy (49,12);  cout << "<><><><><><><><><><><>";
	gotoxy (50,14); cout << "No. Penerbangan : "; cin >> np;
	
	switch(np){
		case 1 :
			while(1){
			system("cls");
			lambangBatik();
			setcolor(7);
			gotoxy (45,8);  cout << "No. Penerbangan 	 : ID 6112";
			gotoxy (45,9);  cout << "Tujuan 	 	 : Jakarta (CGK)";
			gotoxy (45,10);  cout << "Waktu Keberangkatan : 08.10 WIB";
			gotoxy(45,12);  cout << "------------------------------";
			gotoxy(45,13);  cout << "|   Program Bagasi Pesawat   |";
			gotoxy(45,14);  cout << "------------------------------";
			gotoxy(45,15);  cout << "------------------------------";
			gotoxy(45,16);  cout << "| 1. Masukkan Koper          |";
			gotoxy(45,17);  cout << "| 2. Keluarkan Koper      	  |";
			gotoxy(45,18);  cout << "| 3. Tampilkan Jumlah Koper  |";
			gotoxy(45,19);  cout << "| 4. Selesai                 |";
			gotoxy(45,20);  cout << "| 5. Keluar                  |";
			gotoxy(45,21);  cout << "------------------------------";
			gotoxy(45,22);  cout << "Masukkan pilihan : ";
			cin >> pilihan;
				
			switch (pilihan){
				case 1:
					gotoxy(45,23); cout << "Masukkan Kode Koper : ";
					cin >> kode;
					Koperb1.push(kode);
					system("cls");
					break;	
				
				case 2:
					kode = Koperb1.top();
					Koperb1.pop();
					gotoxy(45,25); cout << "Koper dengan kode " << kode << " telah dikeluarkan" << endl;
					gotoxy(45,27); system ("pause");
					break;	
				
				case 3:
					system("cls");
					if (!Koperb1.empty()){
						gotoxy(35,2); cout << "Jumlah Koper yang telah masuk : " << Koperb1.size() << endl;
						load();
						displayb1(Koperb1);
					}
					else{
						cout << "Bagasi Masih Kosong";
					}
					system ("pause");
					break;
					
				case 4:
					menu();
					break;
					
				case 5:
					exit(1);
					break;
					
				default:
					cout << "Pilihan salah" << endl;
			}
		}
		break;
		
		case 2 :
			while(1){
			system("cls");
			lambangBatik();
			setcolor(7);
			gotoxy (45,7);  cout << "No. Penerbangan 	 : ID 6351";
			gotoxy (45,8);  cout << "Tujuan 		 : Jakarta (CGK)";
			gotoxy (45,9);  cout << "Waktu Keberangkatan : 13.20 WIB";
			gotoxy(45,12);  cout << "------------------------------";
			gotoxy(45,13);  cout << "|   Program Bagasi Pesawat   |";
			gotoxy(45,14);  cout << "------------------------------";
			gotoxy(45,15);  cout << "------------------------------";
			gotoxy(45,16);  cout << "| 1. Masukkan Koper          |";
			gotoxy(45,17);  cout << "| 2. Keluarkan Koper      	  |";
			gotoxy(45,18);  cout << "| 3. Tampilkan Jumlah Koper  |";
			gotoxy(45,19);  cout << "| 4. Selesai                 |";
			gotoxy(45,20);  cout << "| 5. Keluar                  |";
			gotoxy(45,21);  cout << "------------------------------";
			gotoxy(45,22);  cout << "Masukkan pilihan : ";
			cin >> pilihan; 
			
			switch (pilihan){
				case 1:
					gotoxy(45,23); cout << "Masukkan Kode Koper : ";
					cin >> kode;
					Koperb2.push(kode);
					system("cls");
					break;
					
				case 2:
					kode = Koperb2.top();
					Koperb2.pop();
					gotoxy(45,25); cout << "Koper dengan kode " << kode << " telah dikeluarkan" << endl;
					gotoxy(45,38); system ("pause");
					break;
					
				case 3:
					system("cls");
					if (!Koperb2.empty()){
						gotoxy(35,2); cout << "Jumlah Koper yang telah masuk : " << Koperb2.size() << endl;
						load();
						displayb2(Koperb2);
					}
					else{
						cout << "Bagasi Masih Kosong";
					}
					system ("pause");
					break;	
					
				case 4 :
					menu();
					break;
					
				case 5:
					exit(1);
					break;
					
				default:
					cout << "Pilihan salah" << endl;
			}	
		}
		break;
	}	
}
					
void menu(){
 	int Pil;
	int Pilih;
	
	system("cls");
	setcolor(7);
	gotoxy(12,2); cout<<"	           ___ ___ _      _   __  __   _ _____   ___   _ _____ _   _  _  ___         ";           
	gotoxy(12,3); cout<<"              / __| __| |    /_\\ |  \\/  | /_\\_   _| |   \\ /_\\_   _/_\\ | \\| |/ __|";                   
	setcolor(6);
	gotoxy(12,4); cout<<"              \\__ \\ _|| |__ / _ \\| |\\/| |/ _ \\| |   | |) / _ \\| |/ _ \\| .` | (_ |";                   
	gotoxy(12,5); cout<<"              |___/___|____/_/ \\_\\_|  |_/_/ \\_\\_|   |___/_/ \\_\\_/_/ \\_\\_|\\_|\\___|";                   
	setcolor(7);
	gotoxy(10,7); cout<<" ___ ___   __  __   _   ___ _  __   _   ___  _   ___   _    ___ ___  _  _    ___ ___  ___  _   _ ___ ";
	gotoxy(10,8); cout<<"|   \\_ _| |  \\/  | /_\\ / __| |/ /  /_\\ | _ \\/_\\ |_ _| | |  |_ _/ _ \\| \\| |  / __| _ \\/ _ \\| | | | _ \\";
	setcolor(6);
	gotoxy(10,9); cout<<"| |) | |  | |\\/| |/ _ \\\\__ \\ ' <  / _ \\|  _/ _ \\ | |  | |__ | | (_) | .` | | (_ |   / (_) | |_| |  _/";
	gotoxy(10,10); cout<<"|___/___| |_|  |_/_/ \\_\\___/_|\\_\\/_/ \\_\\_|/_/ \\_\\___| |____|___\\___/|_|\\_|  \\___|_|_\\\\___/ \\___/|_| "; 
	setcolor(7);
	gotoxy (20,16); cout << "====================";
	gotoxy (20,17); cout << "      Lion Air      ";
	gotoxy (20,18); cout << "====================";
	gotoxy (80,16); cout << "====================";
	gotoxy (80,17); cout << "      Batik Air     ";
	gotoxy (80,18); cout << "====================";
	gotoxy (49,25); cout << "Klik y Setelah Memilih";
	
	for(int h=0; ; ){
		Pil = getch();
		if (Pil == 75){
			gotoxy (20,16); cout << "====================";
			setcolor(4);
			gotoxy (20,17); cout << "  --> Lion Air <--  ";
			setcolor(7);
			gotoxy (20,18); cout << "====================";
			gotoxy (80,16); cout << "=====================";
			gotoxy (80,17); cout << "      Batik Air      ";
			gotoxy (80,18); cout << "=====================";
			gotoxy (49,25); cout << "Klik y Setelah Memilih";
	    		Pilih = 1;
		}
		
		if (Pil == 77){
			gotoxy (20,16); cout << "====================";
			gotoxy (20,17); cout << "      Lion Air      ";
			gotoxy (20,18); cout << "====================";
			gotoxy (80,16); cout << "====================";
			setcolor(4);
			gotoxy (80,17); cout << "  --> Batik Air <-- ";
			setcolor(7);
			gotoxy (80,18); cout << "====================";
			gotoxy (49,25); cout << "Klik y Setelah Memilih";
	    		Pilih = 2;
		}
		
		if(Pil == 'y'||Pil =='Y'){
		    if (Pilih==1){
		    	lionair();				
		    }else if (Pilih==2){
				batikair();
        	    }
        	}
    	} 
}
