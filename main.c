#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER OF TABLE TO BE DISPLAYED");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
    printf("%d*%d=%d\n",n,i,n*i);

    }
    return 0;
}
