#include <iostream>
#include <fstream>

using namespace std;

bool rozklad(int liczba) {
	int i;
	int ile[3];	
	
	for(int j; j<3; j++){
		ile[i]==0;
	}	
    for(i=2; i<=liczba; i++) {
      	while (liczba%i==0) {
      		if(i%2==0) return false;
       		liczba/=i;
       		
       		if(i!=ile[0] && i!=ile[1] && i!=ile[2]){
				for(int j; j<3; j++){
					if(ile[j]==0){
						ile[j]=i;
					}
				}	
			}
			else{
				cout<<"O";
				return false;
			}			
       	}
    }
    if(ile[0]!=0 && ile[1]!=0 && ile[2]!=0) return true; //ile=3  
	else return false; //ile<3
}

int main(int argc, char** argv) {
	ifstream plik;
	int liczba;
	
    plik.open("we.txt");  
    if(plik.good()){
     	while(!plik.eof()){
     		if(rozklad(liczba)){
     			cout<<"Tak";
			}
			else{
				cout<<"Nie";
			}
		}
	}
    plik.close();
	return 0;
}
