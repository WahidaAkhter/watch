#include<stdio.h>

int main()
{
    int k=0,loc=0;
    int n;
    scanf("%d",&n);
    int data[n+1];


    for(k=0; k < n; k++){
        scanf("%d",&data[k]);
    }
    int max=data[0];

    for(k=0; k < n; k++){
        if(data[k] > max){
            max=data[k];
            loc=k;
        }
    }
    printf("%d is location and %d is large",loc+1,max);

    return 0;
}
