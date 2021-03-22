#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,x1,x2;;
    scanf("%lf %lf %lf",&a,&b,&c);

    int d=(b*b)-4*a*c;
    printf("d is : %d\n",d);

    if(d > 0){
        x1= -b + sqrt(d)/2*a;
        x2= -b - sqrt(d)/2*a;

        printf("x1 is : %lf and x2 is : %lf",x1,x2);
    }
    if(d==0){
        x1= -b/2*a;
        printf("%lf",x1);
    }
    if(d < 0) {
        printf("no real solution");
    }
    return 0;
}
