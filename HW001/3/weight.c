#include <stdio.h>
#include <stdlib.h>

int main()
{
    double weight_Jack, weight_Wiliam, weight_Sue, weight_Judith;
    char a[]="Jack", b[]="Wiliam", c[]="Sue", d[]="Judith";

    printf("enter weight of Jack = ");
    scanf("%lf",&weight_Jack);
    printf("enter weight of Wiliam = ");
    scanf("%lf",&weight_Wiliam);
    printf("enter weight of Sue = ");
    scanf("%lf",&weight_Sue);
    printf("enter weight of Judith = ");
    scanf("%lf",&weight_Judith);

    printf("%10s | %10.3f\n%10s | %10.3f\n%10s | %10.3f\n%10s | %10.3f\n",a,weight_Jack,b,weight_Wiliam,c,weight_Sue,d,weight_Judith);
    return 0;
}
