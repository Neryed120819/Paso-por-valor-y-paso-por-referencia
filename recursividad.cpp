#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

long double factorial(int); //Funcion de paso por valor 
void elevarCuadrado (int &); //Funcion de paso por referencia
int op;
int x = 0;
int main(){
	int n;
	
	do
	{
		cout<<"\n\t>>Menu<<\t\n";
		cout<<"1. Factorial\n";
		cout<<"2. Elevar un numero al cuadrado \n";
		cout<<"3. Salir\n";
		cout<<"Elije una opcion: ";
		cin>>op;
		
		switch(op)
		{
			case 1:
    			cout << "Introduzca numero: ";
    			cin >> n;
    			cout << "factorial: " << factorial(n) << endl;
    			system("pause");
			break;
			case 2:
				cout << "Ingrese un numero para elevarlo al cuadrado: ";
  				cin >> x;
  				elevarCuadrado(x); 
  				cout << "El numero al cuadrado es: " << x << endl; 
  				system("pause");
			break;
		}
			
		//system("cls");
	}while (op!=3);
	
	return 0;
}


//Paso por valor
long double factorial(int n)
{
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1); //Utilizando recursividad
}

//Paso por referencia
void elevarCuadrado (int &y ) 
{
  y = y*y;
}
