#include <stdio.h>
#include <stdlib.h>

void Temperatures(double Fr);
int main()
{
    double Fr;
    char ch;
    printf("Enter a value Fahrenheit: \n");

    while (ch!='q')


      {

        scanf("%lf", &Fr);
        Temperatures(Fr);

        printf("The following data entry?\n");
        printf("To complete the program, enter - q: \n");
        scanf("%c", &ch);

      }
       printf("Mission accomplished\n");
    return 0;
}
void Temperatures(double Fr)
{
    double Celsius, Kelvin;
    Celsius = 1.8*Fr+32.0;
    Kelvin = Celsius + 273.16;
    printf("\nCelsius\t\t Kelvin\t\t Fahrenheit\n");
    printf("%5.2lf %17.2lf %14.2lf\n\n", Celsius,Kelvin, Fr);
}
