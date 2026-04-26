# *Visualización del Conjunto de Julia*
En este proyecto genera una representación del Conjunto de Julia el cual es un fractal matemático, para ello se utilizo un programa en lenguaje C++ para el procesamiento numérico que genera un archivo que utilizará Gnuplot para la generación de la imagen final. Todo esto está automatizado mediante un archivo Makefile que se adaptó para el entorno Windows.

### Estructura del proyecto
- **main.cpp**: Es el programa principal en C++ que calcula el conjunto de datos.
- **julia_set.gp**: Script de Gnuplot que configura el formato de salida(en este caso PNG), estetica y clores de la imagen a generar.
- **Makefile**: Es el archivo que automatiza la compilación, ejecución y la graficación.

### Requisitos para ejecucion:
- Compilador para C++ (gpp o g++) con soporte para *C++23*.
- Make: Para ejecutar el archivo Makefile de automatización.
- Gnuplot: El programa debe estar instalado y agregado al Path del sistema para que el Makefile mediante la consola lo encuentre.

### Instrucciones de Uso
1. Para la generación completa del ejercicio, es necesario que se ejecute en la terminal el archivo Makefile. Para ello se tiene que abrir una consola y llegar hasta el path donde se encuentran los archivos del proyecto.

2. Una vez en el path correcto, simplemente se debe de ejecutar en la terminal el siguiente comando:
    ```bash
    make
    ```
    Con esto el makefile se ejecutara produciendo la siguiente salida:

    ![Ejemplo de ejecucion](/img/Makefile_run.png)

3. Cuando se haya ejecutado por completo sin errores, se generará una salida como la siguiente:

    ![Ejemplo de ejecucion](/img/julia_set.png)



