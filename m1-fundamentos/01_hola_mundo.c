/* Programacion de Microcontroladores: ESP32
 * Pontificia Universidad Católica del Perú
 * Departamento de Ingeniería - Fabricum
 *
 * M1 — Script 01: Hola mundo
 * Primer programa: incluir cabeceras, usar printf y retornar de main.
 *
 * Compilar: gcc -Wall -Wextra -std=c11 -g 01_hola_mundo.c -o hola && ./hola
 */

#include <stdio.h> /* permite al usuario interuactar con el terminal, sin esta libreria no puedes hacer print*/
/*include con "" hace referencia a librerias propias, <> a propias */
int main(void) { /*FUNCION PRINCIPAL, debe retornar un codigo de respuesta, por eso es main para que devuelva 0*/

    /* TODO: imprimir "Hola, ESP32!" */
    printf("Hola , ESP32! \n");

    /* TODO: imprimir tu nombre */
    printf("Katherin \n");

    /* TODO: imprimir la version del firmware, ej: "Firmware v1.0" */
    printf("Firmaware v1.0 \n");

    return 0;
}
