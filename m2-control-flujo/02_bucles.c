/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M2 — Script 02: Bucles
 * for, while, do-while, break y continue aplicados a escenarios de firmware.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 02_bucles.c -o bucles && ./bucles
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {

    /* --- for --- */
    printf("=== for ===\n");
    /* TODO: imprimir los numeros 0 al 9 en una linea */

    float lecturas[] = {23.1f, 24.5f, 25.0f, 26.3f, 25.8f};
    uint8_t n = 5;
    /* TODO: recorrer lecturas[], imprimirlas y calcular el promedio */

    printf("\nCuenta regresiva:\n  ");
    /* TODO: for decreciente de 5 a 0 */

    printf("\nPorcentajes:\n  ");
    /* TODO: for con paso 25: imprimir 0, 25, 50, 75, 100 */

    /* --- while --- */
    printf("\n=== while ===\n");
    int intentos = 0, max_intentos = 5;
    bool conectado = false;
    /* TODO: while que simule reintentos de conexion; exito en el intento 3 */

    printf("\nLoop infinito simulado:\n");
    int ciclo = 0;
    /* TODO: while(1) que imprima "Ciclo N" y rompa tras 5 ciclos */

    /* --- do-while --- */
    printf("\n=== do-while ===\n");
    uint16_t lectura_adc = 0;
    int intentos_adc = 0;
    /* TODO: do-while que lea ADC hasta obtener valor en rango 1000-4095 (max 5 intentos)
     *   Simular: lectura_adc = intentos_adc * 700 */

    /* --- break y continue --- */
    printf("\n=== break y continue ===\n");
    /* TODO: recorrer lecturas[]; si <=25.0 usar continue ("ignorado"),
     *       si >25.0 usar break ("ENCONTRADO") */

    return 0;
}
