#include <stdio.h>
#include <math.h>

int main(){

    int n,i;
    float pot1,pot2,impar=1,par=0;

    printf("Questao 2 na linguagem C\n");
    printf("Entre com o valor de n: ");
    scanf("%d",&n);

    if(n<1){
        printf("Entrada invalida");
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
            printf("Resultado: %.6f\n",par);
        }else{
            printf("Resultado: %.6f\n",impar);
        }
    }


return 0;
}
