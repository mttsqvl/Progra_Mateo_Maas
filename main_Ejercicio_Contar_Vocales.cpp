#include <iostream>
#include <string.h>
#include <conio.h>

//Mateo Maas Esquivel

using namespace std;

int main() {
	int x=20;
	char Z[x];
	
	int a=0;
	int e=0;
	int i=0;
	int o=0;
	int u=0;
	int A=0;
	int E=0;
	int I=0;
	int O=0;
	int U=0;
	
	cout<<"Ingresa una frase."<<endl;
	cin.getline(Z, 20, '\n');
	
	for(int i=0; i<x; i++){
	if(Z[i]=='a'){
	a++;
	}	
	if(Z[i]=='e'){
	e++;
	}
	if(Z[i]=='i'){
	i++;
	}
	if(Z[i]=='o'){
	o++;
	}
	if(Z[i]=='u'){
	u++;
	}
	if(Z[i]=='A'){
	a++;
	}	
	if(Z[i]=='E'){
	e++;
	}
	if(Z[i]=='I'){
	i++;
	}
	if(Z[i]=='O'){
	o++;
	}
	if(Z[i]=='U'){
	u++;
	}
	}
	int Y = a+e+i+o+u+A+E+I+O+U;
	cout<<"El número de vocales es de:"<<Y<<endl;	
}
