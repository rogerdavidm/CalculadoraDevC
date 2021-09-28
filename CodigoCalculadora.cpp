#include <iostream>
#include <conio.h>
#include <stdio.h>
 
using namespace std;

int main(){
	int op;
	int num1,num2;
	float num3;
do{
	system("cls");
	cout<<"1.- Sumar\n";
	cout<<"2.- Restar\n";
	cout<<"3.- Multiplicar\n";
	cout<<"4.- Dividir\n";
	cout<<"5.- Salir\n";
	cin>>op;
	switch(op)
	{
		case 1:
	cout<<"Ingrese Primer Numero\n";
	cin>>num1;
	cout<<"Ingrese Segundo Numero\n";
    cin>>num2;
	num3=num1+num2;
	cout<<"La suma es: "<<num3<<endl;
	getch();
			break;
		case 2:
	cout<<"Ingrese Primer Numero\n";
	cin>>num1;
	cout<<"Ingrese Segundo Numero\n";
    cin>>num2;
	num3=num1-num2;
	cout<<"La resta es: "<<num3<<endl;
	getch();
			break;
		case 3:
	cout<<"Ingrese Primer Numero\n";
	cin>>num1;
	cout<<"Ingrese Segundo Numero\n";
    cin>>num2;
    num3=num1*num2;
	cout<<"La Multiplicacion es: "<<num3<<endl;
	getch();
			break;
		case 4:
	cout<<"Ingrese Primer Numero\n";
	cin>>num1;
	cout<<"Ingrese Segundo Numero\n";
    cin>>num2;
	num3=num1/num2;
	cout<<"La Division es: "<<num3<<endl;
	getch();
			break;
			case 5: cout<<"gracias por usar el programa";
			break;
		default:
			cout<<"Opcion Invalida";
			break;
	}
}while(op!=5);
return 0;
}
