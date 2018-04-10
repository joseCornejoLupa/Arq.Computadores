#include "multi.h"
#include <iostream>

using namespace std;

void printWorld(){
	cout << "Hello world!" << endl;
}

int generarByte(int num,int deposito[]){
	cout << "tu numero de 4 bits?" << endl;
	cout << num << " ";
	int arr[] = {128,64,32,16,8,4,2,1};
	for(int i = 0; i < 8; i++){
		deposito[i] = num / arr[i];
		num = num - (arr[i] * deposito[i]);
	}
	cout << "el numero en binario es: ";
	int cont = 0;
	bool entre = false;
	for(int j = 0; j < 8; j++){
		cout << deposito[j];
		if(deposito[j]==1 && !entre){
			cont = 8 - j;
			entre = true;		
		}
	}
	cout << endl;
	return cont;
}

void multiplicar(){
	int multiplicando = 0;
	cin >> multiplicando;

	int multiplicador = 0;
	cin >> multiplicador;

	int tamanio = multiplicando;
	int op = 1;
	if(multiplicador > multiplicando){
		tamanio = multiplicador;
		op = 0;
	} 

	int aux[8];
	int cuenta = generarByte(tamanio,m);
	cout << "cuenta: " << cuenta << endl;
	new int m[cuenta];
	new int q[cuenta];
	new int al[cuenta];
	new int dl[cuenta];
	int qo;
	int cf;
	int bitsPrimero = generarByte(multiplicando,m);
	int bitsSegundo = generarByte(multiplicador,q);
	while(cuenta != 0){
		qo = q[cuenta - 1];		
		if(op){
			qo = m[cuenta - 1];
		}
		cf = 0;
		if(qo == 1){
			int acarreo = 0;
			for(int i = al.size()-1; i >= 0; i--){
				if(acarreo == 1){
					if(al[i] == 1 && m[i] == 1){
						al[i] = 1;
					}
					else if(al[i] == 1 ^ m[i] == 1){
						al[i] = 0;
					}
					else if(al[i] == 0 && m[i] == 0){
						al[i] = 1;
						acarreo = 0;
					}
				}
				else{
					if(al[i] == 1 && m[i] == 1){
						al[i] = 0;
						acarreo = 1;
					}
					else if(al[i] == 1 ^ m[i] == 1){
						al[i] = 1;
					}
					else if(al[i] == 0 && m[i] == 0){
						al[i] = 0;
					}
				}
			}
		}
		
	}
}
