#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    up :
    printf("donne votre operation :");
    scanf("%d",&a);
    scanf(" %c",&c);
    scanf("%d",&b);

    if(c=='+'){
        printf("%d + %d = %d \n",a,b,a+b);
    }else if(c=='-'){
        printf("%d - %d = %d \n",a,b,a-b);
    }else if(c=='*'){
         printf("%d * %d = %d \n",a,b,a*b);
    }else if(c=='/'){
        printf("%d / %d = %.2f \n",a,b,a/b);
    }
    goto up;

    return 0;
}
