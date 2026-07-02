/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 05: printf y especificadores de formato
 * Dominar el formateo de enteros, flotantes, strings, alineacion y sizeof.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 05_printf_formato.c -o fmt && ./fmt
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

    /* --- Enteros --- */
    printf("=== Enteros ===\n");
    int32_t  poblacion = 1500000;
    uint8_t  brillo    = 255;
    uint32_t ciclos    = 4000000u;
    /* TODO: imprimir poblacion con %d */
    /* TODO: imprimir brillo con %u y con %02X */
    /* TODO: imprimir ciclos con %u y con PRIu32 */

    /* --- Flotantes --- */
    printf("\n=== Flotantes ===\n");
    float voltaje = 3.3f, temp = -15.5f;
    /* TODO: imprimir voltaje con %f, %.2f, %.4f, %8.3f, %e */
    /* TODO: imprimir temp con %.1f */

    /* --- Strings y chars --- */
    printf("\n=== Strings y chars ===\n");
    char letra = 'A';
    /* TODO: imprimir letra con %c y con %d (valor ASCII) */
    /* TODO: imprimir "Firmware v1.2.0" usando %s con una variable */

    /* --- Alineacion --- */
    printf("\n=== Tabla alineada ===\n");
    /* TODO: imprimir tabla con %-10s (izquierda) y %6.1f (derecha):
     *   Sensor    Valor   Estado
     *   Temp      36.5    WARN
     *   Humedad   72.0    OK
     *   Voltaje    3.3    OK
     */

    /* --- sizeof --- */
    printf("\n=== sizeof con %%zu ===\n");
    /* TODO: imprimir sizeof(int32_t), sizeof(float), sizeof(void*) */

    return 0;
}
