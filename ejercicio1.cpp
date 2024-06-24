#include <iostream>
using namespace std;
 //Funcion para mostrar el menu y ejecutar la opcion seleccionada
 void mostrarSaldo(int saldo);
 void retirarDinero (int &saldo);
 void depositarDinero (int &saldo);
 void menu();
 int main(){
 	int saldo = 1000; //Saldo Inicial
 	int opcion;
 	do{
	 menu();
	 cin >> opcion;
	 switch(opcion){
	 case 1:
	 depositarDinero(saldo);
	 break;
	 case 2:
	 retirarDinero(saldo);
	 break;
	 case 3:
	 mostrarSaldo(saldo);
	 break;
	 case 4:
	 cout << "Gracias por usar el cajero automatico.Hasta luego" << endl;
	 break;
	 default:
	 cout << "Opcion no valida. Porfavor, elige una opcion entre 1 y 4" << endl;	
	 }
	 cout << endl;
	 }while(opcion != 4);
	 return 0;
	 }
	 
	 void mostrarSaldo(int saldo){
	 cout << "Su saldo actual es: $" << saldo << endl;	
	 }
	 void retirarDinero(int &saldo){
	 	if(100 > saldo){
		 cout << "Fondos insuficientes" << endl;
		 }else{
		 	saldo -= 100;
		 	cout << "Tu nuevo saldo es: $" << saldo << endl;
		 }
	 }
	 
	 void depositarDinero(int &saldo){
	 saldo += 100;
	 cout << "Tu nuevo saldo es: $" << saldo << endl;
	 }
	 
	 void menu(){
 	cout << "\n----- Cajero Automatico -----" << endl;
 	cout << "1. Deposiatr 100" << endl;
 	cout << "2. Retirar 100" << endl;
 	cout << "3. Mostrar saldo" << endl;
 	cout << "4. Salir" << endl;
 	cout << "Seleccione una opcion: ";
 }
