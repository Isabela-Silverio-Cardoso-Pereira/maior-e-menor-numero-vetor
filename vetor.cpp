/******************************************************************************
determinar o maior e o menor valor de um vetor de inteiros.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()

{

    setlocale(LC_ALL, "Portuguese");
    int vetor[3] = {2,3,4};
     
   
   int valor1 = vetor[0];
   int valor2 = vetor[1];
   int valor3 = vetor[2];
    
    if(valor1>valor2 && valor1>valor3){
        cout << "o maior valor � " << valor1 << endl;
    }if(valor2>valor1 && valor2>valor3){
        cout << "o maior valor � " << valor2 << endl;
    }if(valor3>valor1 && valor3>valor2){
        cout << "o maior valor � " << valor3 << endl;
    } if(valor1<valor2 && valor1<valor3){
        cout << "o menor valor � " << valor1;
    } if(valor2<valor1 && valor2<valor3){
        cout << "o menor valor � " << valor2;
    } if(valor3<valor1 && valor3<valor2){
        cout << "o menor valor � " << valor3;
    }
    

    return 0;
}