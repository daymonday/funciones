#include <stdio.h>
#include <stdlib.h>
int fecha_valida(int,int,int);
int bisiesto(int);
int cant_dias_mes(int,int);

int main()
{

    int d,m,a,esfechavalida;
    esfechavalida=fecha_valida(d,m,a);

    printf("Ingrese mes:\n");
    scanf("%d",&m);
    fflush(stdin);
    printf("Ingrese anio:\n");
    scanf("%d",&a);
    fflush(stdin);
    do
    {
        printf("Ingrese mes:\n");
        scanf("%d",&m);
        fflush(stdin);
        printf("Ingrese anio:\n");
        scanf("%d",&a);
        fflush(stdin);
    }
    while(esfechavalida!=1);
    return 0;
}

int fecha_valida (int d,int m, int a)
{
    int r=0;
    if (a>=1582)
    {

        if(m>=1&&m<=12)
        {
        }
        else if(d>=1&&d<=cant_dias_mes(m,a))
        {
            r=1;
        }
    }
        else;
        return r;
    }


    int bisiesto(int a)
    {
        if((a%4==0&&a%100!=0)||a%400==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int cant_dias_mes(int m, int d)
    {
        int cdm=0,a;
        if(m==4||m==6||m==9||m==11)
        {
            cdm=30;
        }
        else if(m==2)
        {
            cdm=28+bisiesto(a);
        }
        else
        {

            cdm=31;
        }
        return cdm;
    }
