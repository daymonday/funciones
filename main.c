#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 50
int resto(int, int );
int EsPar(int);
int EsPrimo (int);
int Promedio(int, int);

int main()
{
    int n,par=0,impar=0,suma=0,primos=0;
    float prom=0.0;
    n = LeerYValidar(MIN,MAX);

    while(n!=-10)
    {
        if (EsPar(n))
        {
            par++;
        }
        else
        {
            impar++;
            suma+=n;
        }

        if(n=(EsPrimo(n)))
        {
            primos++;

        }
        prom=suma/impar;
        printf("La cantidad de numeros pares es:\n%d",par);
        printf("La cantidad de numeros primos es:\n%d",primos);
        printf("El promedio de los numeros impares es:\n%.2f",prom);


    }
    return 0;
}

int resto(int dividendo, int divisor)
{
    int resto;
    resto = dividendo%divisor;
    return resto;
}

int EsPar(int num)
{
    resto=(resto(num));
    if(resto==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int EsPrimo (int num)
{
    resto=(resto(num));
    if(resto!=0||num==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Promedio(int suma, int cont)
{
    int prom;

    if(cont>0)
    {
        prom=suma/cont;
    }
    else
    {
        prom=0;
    }
}

int EstaDentroDelRango(int numero1, int numero2,int num)
{

    if(num>=numero1&&num<=numero2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int LeerYValidar (int lim1,int lim2)
{
    int flagRango=0,valor;
    do
    {
        printf("Ingrese un valor:\n");
        fflush(stdin);
        scanf("%d",&valor);
        flagRango=EstaDentroDelRango(lim1,lim2,valor);
        if(flagRango==0&&valor==-10)
        {
            break;
        }
        else if(flagRango==0)
        {
            printf("El valor ingresado no es valido\n");

        }
    }
    while(flagRango==0);
    return valor;
}
