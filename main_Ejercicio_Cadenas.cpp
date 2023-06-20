#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main() {
	int x=5;
	int y=50;
	char A[x][y];
	
	cout<<"Ingresa los nombres."<<endl;
	for(int i=0; i<5; i++){
	cin.getline(A[i], 20, '\n');
	}
		
	for(int x=0; x<5; x++){
		
	int Z = strlen(A[x]);
	cout<<"Este nombre tiene:"<<Z - 1<<" letras."<<endl;	
	}
}








