#include <stdio.h>
#include <math.h>
#define TOP 2000000

int isPrime(unsigned long long num){
	if( num == 1 || num == 2){
		return 1;
	}
	unsigned long long mid = num / 2; 

	for(unsigned long long i = 2;i <= mid ; i++){
		if( num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	unsigned long long sum=0, i;
	for(i = 2; i < TOP; i++){
		if( isPrime(i) ){
			sum += i;
		}
	}
	printf("%lld\n", sum);
	return 0;
}