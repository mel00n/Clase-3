/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 02: Tipos de datos con tamaño explícito
 * Uso de stdint.h para tipos portables y correctos en sistemas embebidos.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 02_tipos_datos.c -o tipos && ./tipos
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {

    /* --- Tipos sin signo --- */
    printf("=== Sin signo ===\n");
    /* TODO: declarar uint8_t brillo_led, uint16_t contador_rpm, uint32_t timestamp_ms */
    /* TODO: imprimir cada uno con %u y su sizeof con %zu */

    /* --- Tipos con signo --- */
    printf("\n=== Con signo ===\n");
    /* TODO: declarar int8_t temp_celsius, int32_t altitud_m */
    /* TODO: imprimir con %d y sizeof */

    /* --- Punto flotante --- */
    printf("\n=== Flotantes ===\n");
    /* TODO: declarar float voltaje = 3.3f  y  double pi = 3.14159265358979 */
    /* TODO: imprimir voltaje con %.2f y pi con %.14f */

    /* --- Booleano --- */
    printf("\n=== Booleano ===\n");
    /* TODO: declarar bool sensor_activo = true e imprimir con %d */

    /* --- Bases numericas --- */
    printf("\n=== Bases numericas ===\n");
    /* TODO: declarar int pin_hex = 0xFF e imprimir su valor decimal */
    /* TODO: declarar int pin_octal = 010 e imprimir — NO es 10, es 8 */

    /* --- Tamaños en memoria --- */
    printf("\n=== sizeof de cada tipo ===\n");
    /* TODO: imprimir sizeof de uint8_t, uint16_t, uint32_t, int8_t, float, double */

    return 0;
}
