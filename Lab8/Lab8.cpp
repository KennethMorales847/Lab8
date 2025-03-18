#include <iostream>
#include <string>
#include<stdio.h>
#include <iomanip>

using namespace std;

//Creamos una clase de operaciones num�ricas que almacenar� como m�todos m�ltiples funciones num�ricas de este programa
class OperacionNum {
private:
    int numero;
public:
    //Constructor
    OperacionNum(int _numero) :
        numero(_numero){ }


    //Funci�n 1: Determinar si un numero es primo
    bool esPrimo(int num) {
        //Se inicia la comparaci�n para todos los numeros mayores a 3, debido a que los numeros positivos menores a 4 son todos primos
        if (num > 3) {
            //Con un bucle realizamos una comparaci�n
            for (int i = 2;i < num;i++) {
                //Si el numero ingresado por el usuario puede ser dividido por un numero que no sea 1 o el mismo numero, debe significar que este no es primo
                if (num % i == 0) {
                    //Al no ser primo se retorna el valor FALSO
                    return false;
                }
            }
            //Si no se cumple la condici�n del anterior if, significa que el numero no tiene otros divisores adem�s de 1 y el mismo, por lo que se retorna el valor VERDADERO
            return true;
        }
        //De igual forma, si el numero es menor a 4, se retorna el valor VERDADERO, ya que estos siempre ser�n primos
        else {
            return true;
        }
    }

    //Funci�n 2: Calcular factorial de un numero
    int calFactorial(int num) {
        //Se inicializa la variable de resultado para poder usarse para calcular el factorial
        int res = 1;
        //Se utiliza un ciclo for para realizar la multiplicaci�n de todos los numeros, disminuyendo uno a uno, desde el ingresado por el usuario hasta llegar a uno
        for (int i = num;i >= 1;i--) {
            //Se realiza una multiplicaci�n por cada uno de los numeros que recorre el ciclo. Los resultados se almacenan dentro de la variable de resultado
            res *= i;
        }
        //Se imprime en pantalla un mensaje indicando el resultado del factorial del numero indicado por le usuario
        return res;
    }


    //Funci�n 3: Mostrar la tabla de multiplicar de un numero
    void TablaMultiplicar(int num) {
        //Para esta funci�n, en vez de retornar un valor, imprimimos directament en pantalla la tabla completa del n�mero ingresado por el usuario
        cout << "La tabla del numero " << num << " es: " << endl;
        //Logramos realizar la multiplicaci�n del n�mero ingresado desde el 1 hasta el 10 por medio de un ciclo for
        for (int i = 0;i <= 10;i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }


};


//Creamos una nueva clase para estudiantes
class Estudiante {
private:
    //Establecemos sus atributos privados
    string nombre;
    double puntaje;
public:
    //Inicializamos sus atributos con un constructor
    Estudiante(string _nombre,double _puntaje) : 
        nombre(_nombre), puntaje(_puntaje) { }

    //Por medio del m�todo MostrarInfo imprimimos en pantalla la informaci�n del estudiante ingresada por el usuario
    void MostrarInfo() {
        cout <<
            "Nombre: " << nombre << endl <<
            "Calificacion: " << puntaje << endl;
    }

    //El m�todo aprobado retornar� un valor VERDADERO o FALSO dependiendo si el puntaje que el estudiante obtuvo es o no suficiente para aprobar
    bool Aprobado(double pun) {
        if (pun >= 61) {
            return true;
        }
        else {
            return false;
        }
    }

};

//Funci�n 4: Ordenar numeros de menor a mayor
void OrdenarNumeros(int num1, int num2, int num3, int num4, int num5) {
    /*Para realizar esta funci�n utilizaremos el apoyo de la funci�n de std::swap.
    Esta funci�n intercambia dos valores de variables, lo usar�mos en vez de arreglos o contenedores din�micos.
    Comparamos los valores de cada numero, si el numero inicial es mayor que el que le sigue en la lista, realizamos un intercambio.
    Despu�s de realizar esta comparaci�n por toda la lista, repetimos la operaci�n una cantidad de veces igual a la cantidad de numeros de la lista, para asegurar
    que todos los numeros de esta est�n en la posici�n correcta.
    */
    for(int i=1;i<=5;i++){
        if (num1 > num2) {
            swap(num1, num2);
        }
        if (num2 > num3) {
            swap(num2, num3);
        }
        if (num3 > num4) {
            swap(num3, num4);
        }
        if (num4 > num5) {
            swap(num4, num5);
        }
    }
    //Teniendo los n�meros correctamente ordenados, los imprimimos en pantalla.
    cout << "La lista de los numeros ordenados de menor a mayor es: " << endl<< num1 << endl << num2 << endl << num3 << endl << num4 << endl << num5 << endl;
}

//Funci�n 5: Sumar n�meros del 1 al n
int SumarNumeros(int num) {
    int suma = 0;
    //Habiendo inicializando la variable que contiene la suma, utilizamos un for para sumar dentro de esta todos los n�meros desde el 1 hasta el n�mero que el usuario ha ingresado
    for (int i = 0;i <= num;i++) {
        suma += i;
    }
    //Esta funci�n retorna el valor total de la suma de los n�meros
    return suma;
}



int main()
{
    //Inicializamos las variable que el usuairo utilizar� en el programa principal
    int num;
    int opcion;

    //Escribimos el men� de funciones dentro de un DO WHILE para asegurarnos que el usuario pueda seguir utiliz�ndolo hasta que desee finalizar el proceso.
    do {
        //Creamos un men� haciendo uso de manipuladores de salida de texto
        cout << "\033[97m" << endl;
        cout << setfill('-') << setw(40) << "-" << endl;
        cout << setfill(' ') << setw(20) << "MENU" << endl;
        cout << setfill('-') << setw(40) << "-" << endl;
        cout << setfill(' ') << setw(4) << " " << "\033[95m1) Verificar si un numero es primo.\033[0m" << endl;
        cout << setw(4) << " " << "\033[96m2) Calcular el factorial de un numero.\033[0m" << endl;
        cout << setw(4) << " " << "\033[94m3) Mostrar tabla de multiplicar.\033[0m" << endl;
        cout << setw(4) << " " << "\033[92m4) Ordenar cinco numeros.\033[0m" << endl;
        cout << setw(4) << " " << "\033[93m5) Sumar numeros.\033[0m" << endl;
        cout << setw(4) << " " << "\033[35m6) Mostrar informacion de un estudiante\033[0m" << endl;
        cout << setw(4) << " " << "\033[31m0) Salir\033[0m" << endl;
        cout << setfill('-') << setw(40) << "-" << endl;
        cout << "\033[0m";
        cout << "Selecciona una opcion: ";
        cin >> opcion;


        //Usamos un switch para ejecutar la funci�n seleccionada por el usuario
        switch (opcion) {
        case 1: {
            // Verificar si un numero es primo
            
            cout << "\033[95mIngresa un numero:"<<endl;
            cin >> num;
            OperacionNum n1(num);
            
            if (n1.esPrimo(num))
                cout << "El numero es primo." << endl;
            else
                cout << "El numero no es primo." << endl;
            
            cout << " \033[0m";
            
            break;
        }
        case 2: {
            // Calcular el factorial de un numero
            
            cout << "\033[96mIngresa un numero para calcular su factorial:"<<endl;
            cin >> num;
            OperacionNum n2(num);
            
            cout << "El factorial de " << num << " es: " << n2.calFactorial(num) << endl;
            
            cout << " \033[0m";
           
            break;
        }
        case 3: {
            // Mostrar la tabla de multiplicar de un numero
          
            cout << "\033[94mIngrese un numero para ver su tabla de multiplicar:";
            cin >> num;
            
            OperacionNum n3(num);
            n3.TablaMultiplicar(num);
            
            cout << " \033[0m";
            
            break;
        }
        case 4: {
            // Ordenar cinco numeros
            
            int n1, n2, n3, n4, n5;
           
            cout << "\033[92mIngresa cinco numeros. Presiona ENTER para ingresar el siguiente numero:"<<endl;
            cin >> n1;
            cin >> n2;
            cin >> n3;
            cin >> n4;
            cin >> n5;
            OrdenarNumeros(n1, n2, n3, n4,n5);

            cout << " \033[0m";
            
            break;
        }
        case 5: {
            // Sumar numeros 
           
            cout << "\033[93mIngresa un numero:"<<endl;
            cin >> num;
            cout << "La suma de los numeros desde 1 hasta " << num << " es: " << SumarNumeros(num) << endl;
            
            cout << "\033[0m";
            
            break;
        }
        case 6: {
            // Mostrar informaci�n de un estudiante
           
            string nom;
            double punt;
            
            cout << "\033[35mIngrese el nombre del estudiante:"<<endl;
            cin >> nom;
           
            cout << "Ingrese la calificaci�n:"<<endl;
            cin >> punt;
            
            Estudiante e1(nom, punt);
            e1.MostrarInfo();
           
            if (e1.Aprobado(punt) == true) {
                cout << endl << "El estudiante ha aprobado." << endl;
            }
            else {
                cout << endl << "El estudiante no ha aprobado." << endl;
            }
            
            cout << "\033[0m";
           
            break;
        }
        case 0:
            cout << "Saliendo. Adios!" << endl;
            break;

        default:
            cout << "Opci�n invalida. Intenta de nuevo." << endl;
            break;
        }



    } while (opcion!=0);
   
    return 0;

}