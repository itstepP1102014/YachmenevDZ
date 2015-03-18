#include <stdio.h>
#include <stdlib.h>

void temperatures(double Fr);

int main()
{
    double Fr;
    char ch;
    printf("Enter a value Fahrenheit (not number will close program): \n");

    while (scanf("%lf", &Fr)==1)
    {
        temperatures(Fr);
        printf("Enter a value Fahrenheit (not number will close program): \n");
    }
    printf("Mission accomplished\n");
    return 0;
}
void temperatures(double Fr)
{
    const double a= 1.8;
    double Celsius, Kelvin;
    Celsius = (Fr-32.0)/a;
    Kelvin = Celsius + 273.15;
    printf("\nCelsius\t\t Kelvin\t\t Fahrenheit\n");
    printf("%5.2f %17.2f %14.2f\n\n", Celsius,Kelvin, Fr);
}
