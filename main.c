#include <stdio.h>

void main()

{

    float grados_celcius;
    float grados_kelvin = 273.15;

    printf("Ingrese los grados en Celsius: ");
    scanf("%f",&grados_celcius);

    printf("La temperatura en Kelvin es: %f",grados_celcius+grados_kelvin);

}