#include <stdio.h>
#define LARGE 600851475143  

int isPrime(unsigned long long num){
	unsigned long long mid = num / 2; 

	for(unsigned long long i = 2;i < mid ; i++){
		if( num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	unsigned long long i, mid, factor;
	mid = LARGE / 2;
	for(i = 2; i < mid; i++){
		if( LARGE % i != 0) continue;
		if(isPrime( i )){
			factor = i;
		}
	}
	printf("%lld\n", factor);
	return 0;
}
