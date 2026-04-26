#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define Max 1000 //Tamaño maximo de la cadena
#define sizeP 100 //Tamaño de una palabra de la cadena

//Estructura para guardar cada palabra y el contador de veces que aparece
typedef struct Palabra{
    char palabras[sizeP];
    int cuenta;
}Palabra;

//Declaracion de una funcion que transforma una cadena a minusculas, acepta la cadena en sus parametros
void minusculas(char* cadena);
//Declaracion de la funcion que cuenta las palabras, recibe la cadena y un arreglo de palabras para guardarlas
int cuentapalabra(char* cadena, Palabra palabras[]);

int main(){
    char cadena[Max] = "Un archivo Makefile es una herramienta esencial para automatizar la "
                       "compilacion de un proyecto. El archivo Makefile utiliza reglas para "
                       "gestionar cada archivo fuente y cada archivo objeto. Si un archivo "
                       "fuente cambia, el archivo Makefile detecta el cambio y actualiza el "
                       "archivo ejecutable de forma automatica. La automatizacion mediante un "
                       "Makefile ahorra tiempo al programador porque evita repetir comandos "
                       "de compilacion manualmente. Un buen Makefile define dependencias "
                       "claras para asegurar que el proyecto se mantenga siempre actualizado.";
    Palabra palabras[Max];
    
    //Numero de palabras totales en la cadena, llamada a la funcion
    int palabraindice = cuentapalabra(cadena, palabras);

    //Despliegue de palabras y sus cantidades
    printf("Palabras repetidas y sus cantidades:\n");
    for (int i = 0; i < palabraindice; i++) {
        if (palabras[i].cuenta > 1) {
            printf("%s: %d\n", palabras[i].palabras, palabras[i].cuenta);
        }
    }

    return 0;
}

//Definicion de la funcion cuentapalabra
int cuentapalabra(char* cadena, Palabra palabras[]){
    int index = 0;//Indice a devolver
    char *token = strtok(cadena, " ,.\n\t");//Declaracion de un token separador
    while (token != NULL) {//Mientras el token no este vacio, osea que contenga una palabra se ejecuta el resto
        minusculas(token);//Se transforma a minuscula
        
        int encontrado = 0;//Se verifica si la palabra ya existe en el arreglo de palabras(estructura)
        for (int i = 0; i < index; i++) {
            if (strcmp(palabras[i].palabras, token) == 0) {//Se usa strcmp para usar una comparacion bit a bit
                palabras[i].cuenta++;
                encontrado = 1;//Si la encuentra se marca como encotrada y se aumenta el contador
                break;
            }
        }
        
        if (!encontrado && index < Max) {//Si la palabra no esta en el arreglo de palabras la agrega
            strcpy(palabras[index].palabras, token);
            palabras[index].cuenta = 1;
            index++;
        }
        
        token = strtok(NULL, " ,.\n\t");//Obtiene el siguiente token para recorrer toda la cadena
    }
    return index;//Devuelve el indice
}

void minusculas(char* cadena){
    while(*cadena){//Se ejecuta mientras la cadena no sea caracter nulo
        *cadena = tolower(*cadena);//Convierte a minuscula la cadena
        cadena++;//Aumenta el contador para avanzar al siguiente caracter
    }
    return;
}