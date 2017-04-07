/*****************************************************************************************

* Programa: Calculador TP 1
*
* Objetivo:
        Hacer una calculadora.El programa iniciará y contará con un menú de opciones:
            1. Ingresar 1er operando (A = x)
            2. Ingresar 2do operando (B = y)
            3. Calcular la suma (A + B)
            4. Calcular la resta (A - B)
            5. Calcular la división (A / B)
            6. Calcular la multiplicación (A * B)
            7. Calcular el factorial (A!)
            8. Calcular todas las operaciones
            9. Salir
*
* Version 0.1 del 07 abril de 2017
* Autora: Mónica Bidart
*
*****************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    char auxiliar;
    int opcion=0;
    int flagA = 0;
    int flagB = 0;
    float primerOper,segundoOper;
    float resultado;
    int resultadoFact;
    while(seguir=='s')
    {
        system("cls");
        if(flagA)
        {
            printf("1- Ingresar 1er operando (A = %.2f)\n",primerOper);
        }
        else
        {
            printf("1- Ingresar 1er operando (A = x)\n");
        }
        if(flagB)
        {
            printf("2- Ingresar 2do operando (B = %.2f)\n",segundoOper);
        }
        else
        {
            printf("2- Ingresar 2do operando (B = y)\n");
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%c",&auxiliar);
        if((auxiliar>='a'&&auxiliar<='z')||(auxiliar>='A'&&auxiliar<='Z'))
        {
            printf("Error.Debe ingresar un valor numerico\n\n");
            system("pause");
            continue;
        }
        else{
          scanf("%d",&opcion);
        }
        switch(opcion)
        {
        case 1:
            printf("\tIngrese primer operando: ");
            scanf("%f",&primerOper);
            flagA = 1;
            break;
        case 2:
            printf("\tIngrese segundo operando: ");
            scanf("%f",&segundoOper);
            flagB = 1;
            break;
        case 3:
            system("cls");
            if(flagA && flagB)
            {
                resultado = sumar(primerOper,segundoOper);
                printf("\nLa adicion de ambos operandos: %.2f\n\n\n",resultado);
            }
            else
            {
                printf("Error. Debe ingresar ambos operandos\n\n\n");
            }
            system("pause");
            break;
        case 4:
            system("cls");
            if(flagA && flagB)
            {
                resultado = restar(primerOper,segundoOper);
                printf("\nLa diferencia de ambos operandos: %.2f\n\n\n",resultado);
            }
            else
            {
                printf("Error. Debe ingresar ambos operandos\n\n\n");
            }
            system("pause");
            break;
        case 5:
            system("cls");
            if(flagA && flagB)
            {
                if(segundoOper == 0)
                {
                    printf("Error. No es posible dividir por 0");
                    break;
                }
                resultado = dividir(primerOper,segundoOper);
                printf("El cociente entre ambos operandos: %.2f\n\n\n",resultado);
            }
            else
            {
                printf("Error. Debe ingresar ambos operandos\n\n\n");
            }
            system("pause");
            break;
        case 6:
            system("cls");
            if(flagA && flagB)
            {
                resultado = multiplicar(primerOper,segundoOper);
                printf("\nEl producto de ambos operandos: %.2f\n\n\n",resultado);
            }
            else
            {
                printf("Error. Debe ingresar ambos operandos\n\n\n");
            }
            system("pause");
            break;
        case 7:
            system("cls");
            if(flagA)
            {
                if(primerOper < 0)
                {
                    printf("Error.El numero a factorear debe ser positivo");
                    system("pause");
                    break;
                }
                else
                {
                    resultadoFact = factorial((int)primerOper);
                    printf(" El factorial de %.0f es: %d\n\n\n",primerOper,resultadoFact);
                    system("pause");
                    break;
                }
            }
            else
            {
                printf("Error. Debe ingresar el numero a factorear. \n\n\n");
                system("pause");
                break;
            }
            break;
        case 8:
            system("cls");
            if(flagA && flagB)
            {
                resultado = sumar(primerOper,segundoOper);
                printf("\nLa adicion de ambos operandos: %.2f\n\n\n",resultado);
                resultado = restar(primerOper,segundoOper);
                printf("\nLa diferencia de ambos operandos: %.2f\n\n\n",resultado);
                resultado = dividir(primerOper,segundoOper);
                printf("El cociente entre ambos operandos: %.2f\n\n\n",resultado);
                resultado = multiplicar(primerOper,segundoOper);
                printf("\nEl producto de ambos operandos: %.2f\n\n\n",resultado);
                resultadoFact = factorial((int)primerOper);
                printf(" El factorial de %.0f es: %d\n\n\n",primerOper,resultadoFact);
            }
            else
            {
                printf("Error. Debe ingresar ambos operandos\n\n\n");
            }
            system("pause");
            break;
        case 9:
            seguir = 'n';
            break;
        default:
            printf("\tError. Debe ingresar opcion entre 1 y 9. Reingrese: \n\n");
            system("pause");
            break;
        }
    }

    return 0;
}
