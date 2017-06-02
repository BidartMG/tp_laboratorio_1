/********************************************************************************************************************************************
* PROGRAMA: Trabajo Pr�ctico n�3
*
* OBJETIVO: Descripci�n
*           Definir una estructura �movie� con los datos de una pelicula:
*           � T�tulo � G�nero � Duraci�n � Descripci�n � Puntaje � Link de imagen
*
*           Realizar un programa que permita agregar, borrar y modificar peliculas en un archivo binario mediante un men�:
*           1. Agregar pel�cula 2. Borrar pel�cula 3. Modificar pel�cula 4. Generar p�gina web 5. Salir
*
*           La opci�n 3, listar� las peliculas pero no por pantalla, sino generando un archivo html.
*           Crear una funci�n que reciba un array de estructuras movie y el nombre del archivo html de salida, y se encargue de generarlo.
*
*
* VERSION 0.3 del 02/06/2017
* AUTORA: M�nica G. Bidart
*******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

#define CANT 10
int main()
{
    char seguir = 's';
    eMovie theFilms[CANT];

    initArray(theFilms,CANT);
    cargarBinario(theFilms,CANT);

    while(seguir=='s' || seguir=='S')
    {
        system("cls");
        switch(menuPrincipal())
        {
        case 1:
            system("cls");
            printf("\n\t   AGREGAR PELICULA   \n");
            getDataFilms(theFilms,CANT);
            guardarBinario(theFilms,CANT);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("\n\t   BORRAR PELICULA   \n");
            downPelicula(theFilms,CANT);
            guardarBinario(theFilms,CANT);
            system("pause");
            break;
        case 3:
            system("cls");
            printf("\n\t   MODIFICAR PELICULA   \n");
            modificarPelicula(theFilms,CANT);
            guardarBinario(theFilms,CANT);
            system("pause");
            break;
        case 4:
            system("cls");
            printf("\n\t   GENERAR PAGINA WEB   \n");
            generarPaginaHtml(theFilms,CANT);
            system("pause");
            break;
        case 5:
            seguir='n';
            break;

        default:
            printf("\n\t   OPCION NO VALIDA. REINGRESE   \n");
            system("pause");
            break;
        }
    }


    return 0;
}
