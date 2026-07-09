/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 03: Variables y constantes
 * Diferencia entre #define (preprocesador) y const (verificado por el compilador).
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 03_variables_constantes.c -o vars && ./vars
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* TODO: definir con #define: PIN_LED=2, VOLTAJE_NOMINAL=3.3f, MAX_SENSORES=8 */
#define PIN_LED = 2 /*Este valor va a ser cte por todo el codigo*/
#define VOLTAJE_NOMINAR 3.3f /*no necesita ;*/
#define MAX_SENSORES 8
/* TODO: declarar con const: const uint8_t FRECUENCIA_HZ = 10 */
/*                           const float   UMBRAL_TEMP_C = 35.0f */
const uint8_t FRECUENCIA_HZ = 10;
const float   UMBRAL_TEMP_C = 35.0f; /*SI NECESITA QUE PONGAS ;*/

int main(void) {

    printf("=== Variables ===\n");
    /* TODO: declarar e inicializar:
     *   int32_t contador=0, float temperatura=25.5f,
     *   uint8_t nivel_bateria=87, bool led_activo=false, char estado='I'
     */
    int32_t contador=0;
    float temperatura=25.5f;
    uint8_t nivel_bateria=87;
    bool led=false;
    char estado='I';

    /* TODO: imprimir estado inicial */
    printf("Valores iniciales: contador= %d temp=%.1f bat=%d led=%d esatdo%c \n", contador, temperatura, nivel_bateria , led , estado);

    /* TODO: modificar todas las variables a nuevos valores */
    contador=42;
    temperatura=37.2f;
    nivel_bateria=55;
    led=true;
    estado='A';
    /* TODO: imprimir estado modificado */
    printf("Valores iniciales: contador= %d temp=%.1f bat=%d led=%d estado%c \n", contador, temperatura, nivel_bateria , led, estado);
    printf("\n=== Constantes #define ===\n");
    /* TODO: imprimir PIN_LED, VOLTAJE_NOMINAL, MAX_SENSORES */
    printf("El valor de frecuencia es %d \n", FRECUENCIA_HZ);
    printf("\n=== Constantes const ===\n");
    /* TODO: imprimir FRECUENCIA_HZ y UMBRAL_TEMP_C */

    /* Descomenta para ver el error de compilacion:
     * FRECUENCIA_HZ = 20;   -> error: assignment of read-only variable */

    return 0;
}
