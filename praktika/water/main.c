#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moleculeM=3.0e-23;
    float quarts, waterM=0.950;
    printf("Enter the number of quarts water: ");
    scanf("%f", &quarts);
    printf("Number of molecules in %.2f a quart of water  = %f\n",quarts, quarts*waterM/moleculeM);
    return 0;
}
