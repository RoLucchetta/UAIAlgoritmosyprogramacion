#include <stdio.h>

int main() {
    float valorVehiculo;
    int cantidadVehiculos;
    float sueldoBase = 500;
    float plusPorVehiculo;
    float comisionPorVehiculo = 50;
    float sueldo;

    // Pedir al usuario que ingrese el valor del vehÝculo
    printf("Ingrese el valor del vehiculo: ");
    scanf("%f", &valorVehiculo);

    // Pedir al usuario que ingrese la cantidad de vehÝculos vendidos
    printf("Ingrese la cantidad de vehiculos vendidos: ");
    scanf("%d", &cantidadVehiculos);

    // Calcular el plus por cada vehÝculo vendido (10% del valor del vehÝculo)
    plusPorVehiculo = valorVehiculo * 0.10;

    // Calcular el sueldo total
    sueldo = sueldoBase + (plusPorVehiculo + comisionPorVehiculo) * cantidadVehiculos;

    // Imprimir el sueldo
    printf("El sueldo del vendedor es: %.2f\n", sueldo);

    return 0;
}
