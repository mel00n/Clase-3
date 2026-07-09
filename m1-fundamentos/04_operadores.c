/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 04: Operadores
 * Operadores aritméticos, de comparación, lógicos, bitwise y de asignación compuesta.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 04_operadores.c -o ops && ./ops
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {
    /* --- Aritméticos --- */
    printf("=== Aritmeticos ===\n");
    int a = 10, b = 3;
    /* TODO: imprimir suma, resta, multiplicacion, modulo */
    /* TODO: imprimir division entera (10/3=3) y flotante ((float)a/b) */
    int c= a+b;
    int d = a-b;
    int e = a/b;
    float f = a/b;
    float g = (float)a/b;

    int h = a % b;
    int i= a*b;

    printf("Suma = %d \n", c);
    printf("Resta = %d \n", d);
    printf("Division 1= %d \n", e);
    printf("Division 2 = %f \n", f);
    printf("Division 3 = %f \n", g);
    printf("Modulo = %d \n", h);
    printf("Multiplicacion = %d \n", i);
    /* --- Comparacion --- */
    printf("\n=== Comparacion ===\n");
    float temp = 36.5f, umbral = 35.0f;
    /* TODO: imprimir resultado (0/1) de: temp>umbral, temp==umbral, temp!=umbral, temp>=umbral */
    printf("temp > umbral : %d \n", temp > umbral);
    printf("temp == umbral : %d \n", temp == umbral);
    printf("temp != umbral : %d \n", temp != umbral);
    printf("temp >= umbral : %d \n", temp >= umbral);
    /* --- Logicos --- */
    printf("\n=== Logicos ===\n");
    int bateria_baja = 1, sensor_error = 0;
    /* TODO: imprimir: bateria_baja && sensor_error,  bateria_baja || sensor_error,  !bateria_baja */

    /* --- Bitwise --- */
    printf("\n=== Bitwise ===\n");
    uint8_t registro = 0b00110101;
    printf("registro = 0x%02X\n", registro);
    /* TODO: activar bit 1 con |= y mostrar resultado */
    /* TODO: desactivar bit 2 con &=~ y mostrar resultado */
    /* TODO: invertir bit 7 con ^= y mostrar resultado */
    /* TODO: leer bit 0: (registro >> 0) & 1 */

    /* --- Asignacion compuesta --- */
    printf("\n=== Asignacion compuesta ===\n");
    int contador = 10;
    /* TODO: aplicar y mostrar: +=5, -=3, *=2, /=4, %=3 */

    return 0;
}
