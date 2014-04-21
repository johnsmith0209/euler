#include <stdio.h>
#define TOP_VALUE 4000000
long fibonacci(long a, long b, long evensum){
    if(a >= TOP_VALUE){
        return evensum;
    }
    if( b % 2 == 0){
        evensum += b;  
    } 
    return fibonacci(b, a + b, evensum);
}

int main()
{
    long unsigned sum=0, ret=0;

    ret = fibonacci(1, 2, sum);
    printf("%ld\n", ret);

    return 0;
}