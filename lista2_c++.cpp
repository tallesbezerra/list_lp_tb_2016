#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n,i;
    float pot1,pot2,impar=1,par=0;

    cout << "Questao 2 na linguagem C++\n";
    cout << "Entre com o valor de n: ";
    cin >> n;

    if(n<1){
        cout << "Entrada invalida";
    }
    else{
        for(i=1;i<=2*n;i+=2){
            pot1=pow(i,i);
            pot2=pow((i+1),(i+1));
            if(n%2==0){
                par=par+(pot1/pot2);
            }else{
                impar=impar*(pot1/pot2);
            }
        }
        if(n%2==0){
            cout << "Resultado: " << par << endl;
        }else{
            cout << "Resultado: " << impar << endl;
        }
    }


return 0;
}

