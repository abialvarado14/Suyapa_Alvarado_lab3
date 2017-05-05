#include<iostream>
#include<string>
#include<sstream>
using namespace std;
	int main(){
		int opc, n, cant1, res;
		string binario;
		char bin;
		
		cout << "Ingrese el ejercicio que desea: \n1.Numeros Malvados\n2.Matriz" << endl;
		cin >> opc;

		if (opc==1){
			cout << "Ingrese el numero: ";
			cin >> n;
		
		for (int i=0 ; i <= n; i++){ //recorre de 0 a n
			binario = "";
			cant1=0;
			if (i==0){

				cout << i << " " << 0 << endl;

			}else{

				for(int j=1; j <= i; j++){

					res = j%2;
					cout << i << "Su residuo es: " << res;
					if (res == 1){

						cant1 = cant1+1;
						binario = binario +"1";

					}else{

						binario = binario + "0"; 
					}
				}
				cout << cant1 << endl;

				if (cant1%2==0){
					cout << i << " " << binario << endl;
				}
			
				
			}	
		}
		}








	}	

