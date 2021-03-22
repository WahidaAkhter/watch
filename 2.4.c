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
     int search;
     scanf("%d",&search);
     printf("search element is %d\n",search);

    for(k=0; k < n; k++){
        if(data[k] == search){
            loc=k;
        }
    }
    printf("%d is the location and %d is found",loc+1,search);

    return 0;
}

