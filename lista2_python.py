import math
print('Questao 2 na linguagem Python\n')
n= input('Entre com o valor de n: ')
par=0
impar=1
if n<1:
    print('Entrada invalida')
else:
    for i in range(1,2*n,2):
        pot1 = math.pow(i,i)
        pot2 = math.pow(i+1,i+1)
        if n%2==0:
            par=par+(pot1/pot2)
        else:
            impar=impar*(pot1/pot2)

    if n%2==0:
        print("Resultado: %.6f"%(par));
    else:
        print("Resultado: %.6f"%(impar));
    
