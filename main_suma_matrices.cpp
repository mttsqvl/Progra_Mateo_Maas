#include <iostream>

using namespace std;
int fila=4;
int columna=4;
int i=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
int sumafila[4];
int sumacolumna[4];
int main() {
	int A[fila][columna];
	cout<<"Ingresa los números que quieres que tenga la matriz."<<endl;
	for(i; i<fila; i++){
	for(b; b<columna; b++){	
	cout<<"Posición: "<<i<<" "<<b<<endl;
	cin>>A[i][b];	
}
}
	cout<<"La matriz es:"<<endl;
	
	for(c; c<fila; c++){
	for(d; d<columna; d++){
   cout<<A[c][d]<<"   "<<A[c][d]<<"   "<<A[c][d]<<"   "<<A[c][d]<<endl;
}
}
	for(e; e<fila; e++){
	sumafila[e]=A[e][0]+A[e][1]+A[e][2]+A[e][3];
		
	cout<<"La suma correspondiente de las fila "<<e<<" es de: "<<sumafila[e]<<endl;
	
}
	for(f; f<columna; f++){
	sumacolumna[f]=A[0][f]+A[1][f]+A[2][f]+A[3][f];
		
	cout<<"La suma correspondiente de las columna "<<f<<" es de: "<<sumacolumna[f]<<endl;
}
}
