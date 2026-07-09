/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M2 — Script 04: Paso por valor y por referencia
 * Diferencia entre recibir una copia vs. recibir la dirección del original.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 04_paso_valor_referencia.c -o pval && ./pval
 */

#include <stdio.h>
#include <stdint.h>

/* Por valor: solo lectura — no puede modificar el original */
float celsius_a_fahrenheit(float c);

/* Por referencia: modifica el arreglo original */
void escalar_lecturas(float lecturas[], uint8_t n, float factor);

/* Dos valores de salida via punteros */
void estadisticas(const float datos[], uint8_t n, float *out_min, float *out_max);

/* --- Implementaciones --- */

float celsius_a_fahrenheit(float c) {
    /* TODO: retornar c * 9.0f/5.0f + 32.0f */
    return 0.0f;
}

void escalar_lecturas(float lecturas[], uint8_t n, float factor) {
    /* TODO: multiplicar cada lecturas[i] por factor */
}

void estadisticas(const float datos[], uint8_t n, float *out_min, float *out_max) {
    /* TODO: guard clause si datos==NULL o n==0 */
    /* TODO: inicializar *out_min y *out_max con datos[0] */
    /* TODO: recorrer el arreglo actualizando *out_min y *out_max */
}

/* --- Main --- */
int main(void) {

    printf("=== Paso por valor ===\n");
    float temp_c = 37.0f;
    float temp_f = celsius_a_fahrenheit(temp_c);
    /* TODO: imprimir temp_c y temp_f — comprobar que temp_c no cambio */

    printf("\n=== Paso por referencia ===\n");
    float lecturas[] = {23.1f, 24.5f, 25.0f, 26.3f, 25.8f};
    uint8_t n = 5;
    printf("Antes: ");
    for (uint8_t i = 0; i < n; i++) printf("%.1f ", lecturas[i]);
    printf("\n");
    /* TODO: llamar a escalar_lecturas() con factor=1.1f */
    printf("Despues (x1.1): ");
    for (uint8_t i = 0; i < n; i++) printf("%.1f ", lecturas[i]);
    printf("\n");

    printf("\n=== Multiples valores de salida ===\n");
    /* TODO: declarar float min, max; llamar estadisticas(lecturas, n, &min, &max); imprimir */

    return 0;
}
