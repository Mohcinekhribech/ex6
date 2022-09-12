#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double rad(double a){
    double rad;
   rad=a*3.14/180;
   return rad;
}

int main()
{
    double a,b;
    int d=1;
    char c;
    int e;
    up :
    printf("\n\n\t\t CALCULATRICE \n");
    printf("******************************************************");
    printf("\n\t\t choisi un nombre : \n");
    printf("******************************************************");
    printf("\n\t 1 : (+)\t 2 : (-) \t 3 : (*) \n ");
    printf("\n\t 4 : (/)\t 5 : (cos) \t  6 : (sin)\n");
    printf("\n\t 7 : (tan)\t 8 : (!)\n");
    printf("******************************************************\n");

    scanf("%d",&e);
    if(e==1 || e==2 || e==3 || e==4){
    printf("Donne votre operation :");
    scanf("%f",&a);
    scanf(" %c",&c);
    scanf("%f",&b);
    if(c=='+'){
        printf("%.2f + %.2f = %.2f \n",a,b,a+b);
    }else if(c=='-'){
        printf("%.2f - %.2f = %.2f \n",a,b,a-b);
    }else if(c=='*'){
         printf("%.2f * %.2f = %.2f \n",a,b,a*b);
    }else if(c=='/'){
        if(b!=0){
            printf("%.2f / %.2f = %.2f \n",a,b,a/b);
        }else{
            printf("\t\t/!\\  error  /!\\");
        }
    }
    }
    if(e==5 ){
        printf("entrer x :");
        scanf("%lf",&a);
        printf("cos(%.0lf) = %lf",a,cos(rad(a)));
    }else if(e==6){
        printf("entrer x :");
        scanf("%lf",&a);
        printf("sin(%.0lf) = %.2f",a,sin(rad(a)));
    }else if(e==7){
        printf("entrer x :");
        scanf("%lf",&a);
        printf("tan(%.2f) = %.2f",a,tan(rad(a)));
    }else if(e==8){
        printf("entrer x :\n");
        scanf("%Lf",&a);

         int i;
         int b=1;
         for(i=0;i<a;i++){
            b*=(a-i);
          }
         printf("%.0f! = %d",a,b);
         }
    goto up;

    return 0;
}
