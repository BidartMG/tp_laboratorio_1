/********************************************************************************************************************************************
* PROGRAMA: Trabajo Práctico n°3
*
* OBJETIVO: Descripción
*           Definir una estructura “movie” con los datos de una pelicula:
*           • Título • Género • Duración • Descripción • Puntaje • Link de imagen
*
*           Realizar un programa que permita agregar, borrar y modificar peliculas en un archivo binario mediante un menú:
*           1. Agregar película 2. Borrar película 3. Modificar película 4. Generar página web 5. Salir
*
*           La opción 3, listará las peliculas pero no por pantalla, sino generando un archivo html.
*           Crear una función que reciba un array de estructuras movie y el nombre del archivo html de salida, y se encargue de generarlo.
*
*
* VERSION 0.3 del 02/06/2017
* AUTORA: Mónica G. Bidart
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
