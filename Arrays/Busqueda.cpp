#include <iostream>
using namespace std;

    

int main(void){
	
	int numElementos;
	
	cout<<"D�gite el n�mero de alementos a ingresar"<<endl;
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
	int elementoBusqueda;
	cout<<"D�gite el elemento a buscar"<<endl;
	cin>>elementoBusqueda;
	
	int aux = 0;
	
	while ((aux<numElementos) && (elementoBusqueda != arreglo[aux])){
        aux++;
    }


    if (aux > numElementos){
        cout << "No se encontro el elemento buscado"<<endl;
    } else {
    	cout<<"El valor "<<elementoBusqueda<<" se encuentra en el �ndice "<<aux<<endl;
	}

   
}
