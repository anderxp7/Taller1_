#include <iostream>

int main() {
    int numero1, numero2;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int pocentaje;
    int descuento;
    int descuento1;
    int operacion;
    
    std::cout << "Ingrese el primer numero: "; 
    std::cin >> numero1; 

    std::cout << "Ingrese el segundo numero: "; 
    std::cin >> numero2;
    
    std::cout << "Ingrese el descuento: "; 
    std::cin >> descuento;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    descuento1 = ((descuento /100) * (numero1 + numero2) );
    operacion = ( (((((numero1 + numero2) + 5) - 3) * 2) /4) );
    
    std::cout << "La suma de los dos numeros es: " << suma<<std::endl;
    std::cout << "La resta de los dos numeros es: " << resta;
    std::cout << "La multiplicacion de los dos numeros es: " << multiplicacion<<std::endl;
    std::cout << "La division de los dos numeros es: " << division<<std::endl;
    std::cout <<"Su valor con descuento es"<< descuento<<std::endl;
    std::cout <<"Su valor de la operacion es"<< operacion<<std::endl;
    

}
