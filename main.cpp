#include<iostream>
#include<string>
#include<sstream>
using namespace std;

	void imprimir_binario(string, int);
	int contade1(int);

	int main(){
		int opc, n, cant1, res, cont, size;
		string binario;

		
		cout << "Ingrese el ejercicio que desea: \n1.Numeros Malvados\n2.Matriz" << endl;
		cin >> opc;

		//MENU
		if (opc==1){
			cout << "Ingrese el numero: ";
			cin >> n;
		
		for (int i=0 ; i <= n; i++){ //recorre de 0 a n
			binario = "";
			cant1=0;
			if (i==0){

				cout << i << " " << 0 << endl;

			}else{

				for(int j=i; j >= 1;){
					binario = crea_binario(i);
					res = j%2;
					j = j/2;
					if (res == 1){
						cant1 = cant1+1;
						//binario = binario +"1";

					}else{

						//binario = binario + "0"; 
					}
				
				}

				if (cant1%2==0){
					imprimir_binario(binario, i);
				}
			
				
			}	
		}
		}else{
		
			cout << "Ingrese el tamaño de la matriz: ";
			cin >> size;
			int matriz[size][size];
			
			for (int rows=0; rows<size; rows++){
				for (int col=0; col<size; col++){
				
				}
			} 
			
		}
		}

		void imprimir_binario(string binario, int n){
			cout << n << " ";
         for (int k = binario.size(); k>=0;k--){
         	cout << binario[k];
         }
         cout << endl;
		}

		string crea_binario(int n){
			string binario="";
			for(int j=n; j >= 1;){

               int res = j%2;
               j = j/2;
               if (res == 1){
                  binario = binario +"1";

               }else{

                  binario = binario + "0";
               }

            }
		return binario;
		
		}

