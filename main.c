//Se ingresan números enteros comprendidos entre 100 y 2000 (usar función LeerYValidar). Determinar
//usando la función EstaDentroDelRango:

//a. Cantidad de números ingresados entre 100 y 500
//b. Cantidad de números pares ingresados entre 500 y 1200
//c. Promedio de números ingresados entre 1200 y 2000
//El ingreso de datos finaliza cuando se ingresa un número igual a 99.

//Para realizar este programa se deben realizar las siguientes funciones:

//• EstaDentroDelRango: que reciba 3 enteros correspondientes a un número a validar y los límites
//superior e inferior del rango. La función debe retornar un 1 si el número a validar se encuentra
//dentro del rango indicado o un 0 si no lo está.

//• LeerYValidar: que reciba los límites superior e inferior de un rango y retorne un número que se
//encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la función). Para validar el
//rango utilizar la función EstaDentroDelRango realizada en el punto anterior.

#include <stdio.h>
#include <stdlib.h>

int EstaDentrodelRango (int n1, int n2,int num);
int LeerYValidar (int lim1,int lim2,int valor);

int main()
{
    int cant1=0,cant2=0,cant3=0,n,suma3=0;

    do
    {

        if(LeerYValidar(500,1200,n))
        {
            cant2+=1;
        }
        else if(LeerYValidar(1200,2000,n))
        {

            cant3+=1;
            suma3+=suma3;
        }
        else
        {
            cant1+=1;
        }
        printf("\nIngrese un número:\n");
        scanf("%d",&n);
        fflush(stdin);
    }
    while (n!=99);
    printf("\n La cantidad de numeros entre 100 y 500 que fueron ingresados es:\n %d \n",cant1);
    printf("\nLa cantidad de numeros entre 500 y 1200 que fueron ingresados es:\n %d\n",cant2);
    printf("\nEl promedio de los numeros entre 1200 y 2000 que fueron ingresados es:\n %d \n",suma3/cant3);
    return 0;
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

int LeerYValidar (int lim1,int lim2,int valor)
{

    printf("Ingrese el limite inferior:\n");
    scanf("%d",&lim1);
    fflush(stdin);
    printf("Ingrese el limite superior:\n");
    scanf("%d",&lim2);
    printf("Ingrese un valor:\n");
    scanf("%d",&valor);
    if (EstaDentroDelRango(lim1,lim2,valor) == 1)
    {
        return valor;
    }

    else
    {
        printf("Ingrese un valor:\n");
        scanf("%d",&valor);
    }
}




