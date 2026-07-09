/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M2 — Script 03: Funciones
 * Prototipos, definiciones, guard clauses y retorno de valores.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 03_funciones.c -o func && ./func
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* --- Prototipos --- */
float celsius_a_fahrenheit(float celsius);
float promedio(const float datos[], uint8_t n);
bool  temperatura_en_rango(float temp, float min, float max);
void  imprimir_sensor(uint8_t id, const char nombre[], float valor);

/* --- Implementaciones --- */

float celsius_a_fahrenheit(float celsius) {
    /* TODO: retornar celsius * 9.0f/5.0f + 32.0f */
    return 0.0f;
}

float promedio(const float datos[], uint8_t n) {
    /* TODO: guard clause si n==0, retornar 0.0f */
    /* TODO: sumar todos los datos[] y dividir por n */
    float suma = 0.0f;
    return suma;
}

bool temperatura_en_rango(float temp, float min, float max) {
    /* TODO: retornar true si min <= temp <= max */
    return false;
}

void imprimir_sensor(uint8_t id, const char nombre[], float valor) {
    /* TODO: guard clause si nombre==NULL */
    /* TODO: imprimir "Sensor #id (nombre): valor C  [OK|ALERTA]"
     *       usando temperatura_en_rango() con rango 10.0-40.0 */
}

/* --- Main --- */
int main(void) {

    printf("=== Conversion de temperatura ===\n");
    /* TODO: convertir 0, 25, 100 grados C a Fahrenheit e imprimir */

    printf("\n=== Promedio ===\n");
    float lecturas[] = {23.1f, 24.5f, 25.0f, 26.3f, 25.8f};
    uint8_t n = 5;
    /* TODO: llamar a promedio() e imprimir el resultado */

    printf("\n=== Sensores ===\n");
    /* TODO: llamar a imprimir_sensor() con 3 sensores, uno fuera de rango */

    return 0;
}
