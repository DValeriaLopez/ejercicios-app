#include <iostream>
using namespace std;


int main() {

    const int MAX_NOTAS = 100;
    const char SEPARADOR = '-';
    const bool ES_ADMIN = true;
    #define SALUDO "Hola Mundo"
    const float PI = 3.14159f; // Valor constante de PI
  
    //  EJERCICIO 6: Cálculo del área de un círculo
    cout << "Este programa calcula el área de un círculo." << endl;

    //  Declaramos la variable para el radio
    float radio = 0.0f;

    // Se ingresa el radio del círculo30
    cout << "Por favor, ingresa el radio del círculo: ";
    cin >> radio;

    //  Calculamos el área usando la fórmula: PI * radio^2
    float area = PI * radio * radio;

    //  Mostramos el resultado
    cout << "El área del círculo es: " << area << endl;

    return 0;


   
}