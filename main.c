#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,discrminiant,root1,root2;
    printf("ENTER THE COEFFICIENTS A B C");
    scanf("%f %f %f ",&a ,&b,&c);

    discrminiant=(b*b)-(4*a*c);

    if(discrminiant>0){
        printf(" \n ROOTS ARE REAL AND DISTINT \n");
        root1=(-b+sqrt(discrminiant))/(2*a);
        root2=(-b+sqrt(discrminiant))/(2*a);
        printf("Root 1=%.2f \n ",root1);
        printf("Root 2=%.2f \n ",root2);
    }
    else if(discrminiant==0){
    printf("\n Roots are Real and Equal \n");
    root1=-b/(2*a);
    printf(" Root1 = Root2= %.2f \n ",root1);
    }

    else{
    printf("\n Roots are imaginary \n");
    float realPart=-b/(2*a);
    float imagPart=sqrt(-discrminiant)/(2*a);
    printf("Root1 =%.2f +%.2f i \n",realPart,imagPart);

    }
    return 0;
}
