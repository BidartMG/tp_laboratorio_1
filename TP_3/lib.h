#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

typedef struct
{
    int idMovie;
    char title[50];
    char genre[50];
    int duracion;
    char description[500];
    int points;
    char linkImage[400];
    int isEmpty;
} eMovie;

int esSoloLetras(char*);
int esNumerico(char str[]);
void getString(char mensaje[],char input[]);
int getStringLetras(char*,char*);
int getStringNumeros(char mensaje[],char input[]);
void getValidString(char *requestMessage,char *errorMessage, char *input);
int getValidInt(char* requestMessage,char* errorMessage, int lowLimit, int hiLimit);
int getIntRango(int number,int lowLimit,int hiLimit);


int menuPrincipal();
int menuModificar();


int initArray(eMovie* pelis, int length);
int buscarPrimerOcurrencia(eMovie* pelisArray,int cantidadDeElementos,int valor);
int buscarPorID(eMovie* pelis,int arrayLenght,int id );
int setMovieData(eMovie* pelis,int length,char* title,char* genre,char* description,int duracion,int puntaje,char* linkImage,int idMovie);
int getDataFilms(eMovie* pelis,int length);
void listarPeliculas(eMovie* pelis,int length);
int downPelicula(eMovie* pelis,int length);
int modificarPelicula(eMovie* pelis,int length);

int cargarBinario(eMovie*,int);
void guardarBinario(eMovie*,int);
void generarPaginaHtml(eMovie*,int);

#endif // LIB_H_INCLUDED
