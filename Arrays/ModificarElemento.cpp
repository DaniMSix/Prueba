#include <iostream>
using namespace std;


int main(void){
	
	int numElementos;
	int elementoReemplazo;
	
	cout<<"D�gite el n�mero de elementos a ingresar"<<endl;
	cin>>numElementos;
	
	int arreglo[numElementos];
	int elemento;
	
	for (int i= 0; i<numElementos; i++){
		cout<<"Ingrese el elemento n�mero "<<i<<endl;
		cin>>elemento;
		arreglo[i] = elemento;
		
	}
	
	cout<<"Los elementos que ingreso fueron los siguientes"<<endl;
	
	
	for (int i = 0; i<numElementos; i++){
		
		cout<<arreglo[i]<<" | ";
		
	}
	
	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	int elementoModificar;
	cout<<"D�gite el elemento a modificar"<<endl;
	cin>>elementoModificar;
	
	int aux = 0;
	
	while ((aux<numElementos) && (elementoModificar != arreglo[aux])){
        aux++;
    }


    if (aux > numElementos){
        cout << "No se encontro el elemento"<<endl;
    } else {
    	cout<<"Ingrese el elemento nuevo para la posici�n "<<aux<<" "<<endl;
    	cin>>elementoReemplazo;
    	arreglo[aux] = elementoReemplazo; 
    	
	}

	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	
	for (int i = 0; i<numElementos; i++){
		
		cout<<arreglo[i]<<" | ";
		
	}	
	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	
	
	
	
}






