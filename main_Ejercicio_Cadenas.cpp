#include <iostream>
#include <string.h>
#include <conio.h>


using namespace std;

int main() {
	char A[10];
	char B[10];
	char C[10];
	char D[10];
	char E[10];
	cout<<"Ingresa los nombres que quieres que tenga el arreglo."<<endl;
	cin.ignore('/n');
	cin.getline(A, 10, '/n');
	cin.ignore('/n');
	cin.getline(B, 10, '/n');
	cout<<B<<endl;
	cin.ignore('/n');
	cin.getline(C, 10, '/n');
	cout<<C<<endl;
	cin.ignore('/n');
	cin.getline(D, 10, '/n');
	cout<<D<<endl;
	cin.ignore('/n');
	cin.getline(E, 10, '/n');
	cout<<E<<endl;	
	cin.ignore('/n');
	
	int V = strlen(A);
	int W = strlen(B);
	int X = strlen(C);
	int Y = strlen(D);
	int Z = strlen(E);
	cout<<"Los carácteres usados en este nombre es de:"<<V<<endl;
	cout<<"Los carácteres usados en este nombre es de:"<<W<<endl;
	cout<<"Los carácteres usados en este nombre es de:"<<X<<endl;
	cout<<"Los carácteres usados en este nombre es de:"<<Y<<endl;
	cout<<"Los carácteres usados en este nombre es de:"<<Z<<endl;
}









