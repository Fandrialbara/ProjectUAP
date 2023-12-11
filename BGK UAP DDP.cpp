#include<iostream>
#include<cstdlib>
using namespace std;

string kondisi (string player, string enemy){
	if(player == "batu"){
		if(enemy == "batu"){
			return "seri";
		} else if(enemy == "gunting"){
			return "menang";
		} else if(enemy == "kertas"){
			return "kalah";
		}
	} else if(player == "gunting"){
		if(enemy == "batu"){
			return "kalah";
		} else if(enemy == "gunting"){
			return "seri";
		} else if(enemy == "kertas"){
			return "menang";
		}
    } else if(player == "kertas"){
    	if(enemy == "batu"){
			return "menang";
		} else if(enemy == "gunting"){
			return "kalah";
		} else if(enemy == "kertas"){
			return "seri";
		}
	}
}

void tampilHasil(string player, string enemy){
	string hasil = kondisi(player, enemy);
	cout<< "Anda dinyatakan "<<hasil<<endl;
}

int main(){
	string isi [3] = {"batu" , "gunting" , "kertas"};
	int pilihan , enemy;
	string ulang;
	do{
		system("cls");
		for(int a = 0; a<3; a++){
		cout<< a+1 <<". "<< isi[a] <<endl;
	}
	cout<<"pilihan : "; cin>>pilihan;
	enemy = (rand() % 3)+1;
	cout<<"Musuh : "<<enemy<<endl;
	cout<<"=========================="<<endl;
	cout<<"Anda : "<<isi[pilihan-1]<<endl;
	cout<<"Musuh : "<<isi[enemy-1]<<endl;
	tampilHasil(isi[pilihan-1], isi[enemy-1]);
	cout<<"ulangi , ya/tidak? <y/n> : "; cin>>ulang;
	}while(ulang == "y");
     system("cls");
     cout<<"Program Selesai"<<endl;
}
