#include<iostream>
using namespace std;

main()
{
	double n1,n2,resp;
	cout<<"programa que permita al usario determinar los valores de dos numeros ingresados por teclado";
	cout<<"\n ingrese el primer numero para la operacion: ";
	cin>>n1;
	cout<<"ingrese el segundo numero para la la operacion: ";
	cin>>n2;
	resp=n1+n2;
	cout<<"el resultado de la suma es: "<<resp;
	cout<<endl;
	resp=n1-n2;
	cout<<"el resultado de la resta es: "<<resp;
	cout<<endl;
	resp=n1*n2;
	cout<<"el resultado de la multiplicacion es: "<<resp;
	cout<<endl;
	resp=n1/n2;
	cout<<"el resultado de la division es: "<<resp;
}
