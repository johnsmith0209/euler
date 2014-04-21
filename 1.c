#include <stdio.h>
int main()
{
    long unsigned i,sum=0;

    for(i=0;i<1000;i++){
        if((i%5==0)||(i%3==0)){
            sum=sum+i;
        }
    }
    printf("%ld\n",sum);

    return 0;
}