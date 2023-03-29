#include <iostream>
#include <math.h> // calculos matematicos
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>


using  namespace std;

//declaracion de una funcion 
int suma(int n1, int n2);
int resta(int n1, int n2);



int main()
{
    int x, y,opcion;

    printf("1.-suma \n 2.-Resta \n ");
    scanf_s("%d",&opcion);
    
    switch (opcion)
    {
    case 1:
        printf("ingrese 2 numeros \n ");
        scanf_s("%d %d", &x, &y);
        printf("el resultado de la suma es: \n %d \n", suma(x, y));
        return main();
        break;

    case 2:
        printf("ingrese 2 numeros \n ");
        scanf_s("%d %d", &x, &y);
        printf("el resultado de la resta es: \n %d \n", resta(x, y));
        return main();
        break;
    default:
        return main();
        break;
    }
   
    //llamar la funcion
   // suma(x, y);
    //resta(x, y);
    //imprimir el resultado
   // printf("el resultado de la suma es: \n %d", suma(x, y));
    //printf("\n el resultado de la resta es: \n %d", resta(x, y));

}

//uso de la funcion 
int suma(int n1, int n2)
{
    int res;
    res = n1 + n2;
    //retorno de resultado
    return res;

}
int resta(int n1, int n2)
{
    int res;
    res = n1 - n2;
    //retorno de resultado
    return res;
}
// area= (3.14*r);
//r=(diametro/2);
/*
float area(float diametro)
{
        float pi=3.14, r,a;
        r=diametro/2;
        a=pi*r
        return a;
        

}
*/


