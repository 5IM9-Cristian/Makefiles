# Analizador de Frecuencia de Palabras en C
El objetivo de este proyecto es desarrollar una herramienta en lenguaje C que procese una cadena de texto para así, identificar las palabras repetidas y contabilizar su frecuencia de aparición. Ademas de que mediante el uso de un archivo Makefile, se busca la automatización de su compilación y ejecución.

### Características y estructura del código

1. Se acepta una cadena de con un tamaño maximo de 1000 caracteres, el cual se puede modificar en la definicion que se encuentra en la cabecera del codigo en la seccion *#define*, y la cadena se puede cambiar en la funcion main, donde se encuentra declarada.
2. Se hace uso de una estructura llamada *Palabra* que contiene un arreglo de caracteres donde se guardara una palabra, y ademas tiene una variable de tipo entero que sirve como contador, en otras palabras, cada que se encuentre una palabra nueva, se guardara en la estructura con la cadena de la palabra y las veces que ha aparecido.
3. La funcion *cuentapalabra()* recibe como parametros una cadena y un arreglo de tipo Palabra (referida a la estructura nombrada anteriormente) donde se guardaran las palabras encontradas, aqui es donde ocurre todo el proceso.
4. Normalizacion del texto: Antes de comenzar a contar las palabras es necesario normalizar el texto, dentro del codigo se encuentra una función llamada *minusculas* la cual recibe como parametros la cadena, dicha cadena sera transformada a minusculas mediante un ciclo que recorre caracter por caracter, con el objetivo de facilitar la identificacion de palabras iguales, evitando asi la diferencia dada por las mayusculas (Ejemplo: Mayuscula != mayuscula).
5. Mediante un sistema de tokens se va recorriendo la cadena caracter por caracter hasta que se topa con uno de los simbolos del token, como el espacio, punto o coma, esto quiere decir que acaba de encontrar una palabra y se verifica su existencia, si la palabra existe se aumenta su contador, si no, se crea una Palabra nueva y se agrega al arreglo. Al terminar este proceso se despliegan las palabras que se hayan repetido mas de una vez.

### Ejecución mediante Makefile
Para ejecutar el código, simplemente basta con abrir la terminal, navegar hasta el path donde se encuentran los archivos y escribir el siguiente comando:

```bash
    make
```

Esta instruccion ejecuta el archivo Makefile que a su vez, contiene la rutina para la compilacion y ejecucion del programa usando la cadena escrita por defecto y desplegando los resultados como se muestra a continuacion:

![Ejemplo de ejecucion](/img/Ejecucion_Ejemplo_CuentaPalabras.png)
