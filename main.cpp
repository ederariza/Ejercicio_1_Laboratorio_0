
/*
2. Elabore, en una hoja de papel, el diagrama de flujo para el programa que produce la siguiente
salida en la terminal:

A                                    A
A B                             B A
A B C                       C B A
A B C D                D C B A
A B C D E          E D C B A
A B C D E F    F E D C B A
A B C D E F G F E D C B A

 */

#include<iostream>
using namespace std;

//Declarando las variables que necesito para las iteraciones
int  i, j, k, N;
char letra;

int main(void){

    cout << "Ingrese el numero de dimension del triangulo mariposa: ";
    cin >> N;

    for (i = 1; i <= N; i++){
        letra = 65;

        //Imprime letras del abecedario en orden + 1 espacio:  A + " " + B + ...
        for (j = 1; j <= i; j++){
            cout << letra << " ";
            letra++;
        }

        //Imprime 2 espacios "  "...
        for (j = 0; j < ((N-i)*2-1); j++){
            cout << "  ";
        }

        //Imprime las letras del abecedario en orden inverso + 1 espacio: ... + B + " " + A
        for (j = 1; j <= i; j++){
            letra--;

            //Omitimos la ultima letra N + 65
            if (letra != (65+N-1)){
                cout << letra << " ";
            }
        }

        cout<< endl;
    }

return 0;
}
