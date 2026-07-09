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
#include <stdint.h> /*libreria para tipos numericos estandares*/
#include <stdbool.h>

int main(void) {

    /* --- Tipos sin signo --- */
    printf("=== Sin signo ===\n");
    /* TODO: declarar uint8_t brillo_led, uint16_t contador_rpm, uint32_t timestamp_ms */
    uint8_t brillo_led = 23; /*declaras la variable tipo_de_dato nombre_variable = valor , la variable numerica tiene limites de 0 a 255 todos positivos, es de 8 bits*/
    uint16_t contador_rpm = 1543; /*limites de 0 a 65 535 , 16 bits , no se podria guardar en uint8_t*/
    uint32_t tiempo_ejecucion = 723873; /*0 a 4.26B*/
    /*uint64_t*/
    /*uint128_t*/

    /* TODO: imprimir cada uno con %u y su sizeof con %zu */

    printf("Variable brillo led: %d \n", brillo_led); /*%d = en formato decimal*/
    printf("Tamano de brillo_led: %zu ", sizeof(brillo_led)); /*devuelve valores en bytes*/
    
    printf("Variable contador rmp: %d \n", contador_rpm);
     printf("Tamano de contador rpm: %zu \n ", sizeof(contador_rpm));

    printf("Variable tiempo de ejecucion: %d \n", tiempo_ejecucion);
    printf("Tamano de tiempo de ejecucion: %zu \n", sizeof(tiempo_ejecucion));

    /* --- Tipos con signo --- */
    printf("\n=== Con signo ===\n");
    /* TODO: declarar int8_t temp_celsius, int32_t altitud_m */
    /* TODO: imprimir con %d y sizeof */
    int8_t temp_celsius = -15; /* ves que son diferentes a las sin signo? usan int*/
    int32_t altitud_m = -1340;

    printf("Variable Celcius: %d \n", temp_celsius); /*%d = en formato decimal*/
    printf("Tamano de altitud: %zu ", sizeof(temp_celsius));

    /* --- Punto flotante --- */
    printf("\n=== Flotantes ===\n");
    /* TODO: declarar float voltaje = 3.3f  y  double pi = 3.14159265358979 */
    /* TODO: imprimir voltaje con %.2f y pi con %.14f */
    float voltaje = 3.3;
    double pi = 3.141516;

    printf("Variable Celcius: %2f \n", voltaje); 
    printf("Tamano de altitud: %zu ", sizeof(voltaje));

    printf("Variable Celcius: %f \n", pi); 
    printf("Tamano de altitud: %zu ", sizeof(pi));
    /* --- Booleano --- */
    printf("\n=== Booleano ===\n");
    /* TODO: declarar bool sensor_activo = true e imprimir con %d */
    bool sensor_activo= true;

    printf("Variable Celcius: %d \n", sensor_activo); /*%d = en formato decimal*/
    printf("Tamano de altitud: %zu ", sizeof(sensor_activo));
    /* --- Bases numericas --- */
    printf("\n=== Bases numericas ===\n");
    /* TODO: declarar int pin_hex = 0xFF e imprimir su valor decimal */
    /* TODO: declarar int pin_octal = 010 e imprimir — NO es 10, es 8 */

    /* --- Tamaños en memoria --- */
    printf("\n=== sizeof de cada tipo ===\n");
    /* TODO: imprimir sizeof de uint8_t, uint16_t, uint32_t, int8_t, float, double */

    return 0;
}
