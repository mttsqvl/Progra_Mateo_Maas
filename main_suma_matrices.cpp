#include <iostream>

using namespace std;
int fila=4;
int columna=4;
int sumafila[4];
int sumacolumna[4];
int main() {
	int A[fila][columna];
	cout<<"Ingresa los números que quieres que tenga la matriz."<<endl;
	for(int i=0; i<fila; i++){
	for(int b=0; b<columna; b++){	
	cout<<"Posición: "<<i<<" "<<b<<endl;
	cin>>A[i][b];	
}
}
	cout<<"La matriz es:"<<endl;
	
	for(int c=0; c<fila; c++){

   cout<<A[c][0]<<"   "<<A[c][1]<<"   "<<A[c][2]<<"   "<<A[c][3]<<endl;
}
	for(int e=0; e<fila; e++){
	sumafila[e]=A[e][0]+A[e][1]+A[e][2]+A[e][3];
		
	cout<<"La suma correspondiente de las fila "<<e<<" es de: "<<sumafila[e]<<endl;
	
}
	for(int f=0; f<columna; f++){
	sumacolumna[f]=A[0][f]+A[1][f]+A[2][f]+A[3][f];
		
	cout<<"La suma correspondiente de las columna "<<f<<" es de: "<<sumacolumna[f]<<endl;
}
}
