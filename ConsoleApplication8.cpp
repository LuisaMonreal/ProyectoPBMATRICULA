#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

// estructura
struct operacionsuma
{
    int n1, n2;
};

//declara de funcion 
int opsuma(int x, int y);
int mayorx(int x, int x2, int x3);


int main()
{
    operacionsuma suma[3];
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese los 2 numeros \n");
        scanf_s("%d %d", &suma[i].n1, &suma[i].n2);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("el resultado es %d \n", opsuma(suma[i].n1, suma[i].n2));
        if (i == 2)
        {
            printf("el mayor es %d \n", mayorx(suma[i - 2].n1, suma[i - 1].n1, suma[i].n1));

        }
    }
    system("pause");

}

// definir funcion
int opsuma(int x, int y)
{
    int res;
    res = x + y;
    return res;
}

int mayorx(int x, int x2, int x3)
{
    int mayor = 0;
    if (x > x2 && x > x3)
    {
        mayor = x;
        return mayor;
    }
    if (x2 > x && x2 > x3)
    {
        mayor = x2;
        return mayor;
    }
    if (x3 > x2 && x3 > x)
    {
        mayor = x3;
        return mayor;
    }

}