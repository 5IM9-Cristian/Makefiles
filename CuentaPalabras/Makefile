# Variables de compilación
CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = contador.exe
SRC = CuentaRepetidas.c

#Compila y ejecuta
all: $(TARGET) run clean

# Compilación del ejecutable
$(TARGET): $(SRC)
	@echo "Compilando el programa..."
	$(CC) $(CFLAGS) $< -o $@

# Regla para ejecutar el programa
run: $(TARGET)
	@echo "Iniciando aplicacion..."
	./$(TARGET)

# Limpieza para Windows
clean:
	@if exist $(TARGET) del /q $(TARGET)