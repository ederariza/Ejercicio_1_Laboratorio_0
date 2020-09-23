
/*
2. Elabore, en una hoja de papel, el diagrama de flujo para el programa que produce la siguiente
salida en la terminal:

A                                          A
A B                                  B A
A B C                           C B A
A B C D                   D C B A
A B C D E            E D C B A
A B C D E F     F E D C B A
A B C D E F G F E D C B A
 */

#include<iostream>
using namespace std;
int  i, j, k, N;

char letra;
int main(void){

    cout<< "Ingrese el numero de dimension del triangulo mariposa: ";
    cin>> N;

    for(i=1; i<=N; i++){
        letra = 65;

        for(j=1; j<=i; j++){
            cout<< letra <<" ";
            letra++;
        }

        for(j=0; j<((N-i)*2-1); j++){
            cout<<"  ";
        }

        for(j=1; j<=i; j++){
            letra--;

            if(letra != (65+N-1)){
                cout<<letra << " ";
            }
        }

        cout<< endl;
    }

return 0;
}
