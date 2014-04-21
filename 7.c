#include <stdio.h>
int isPrime(long long num){
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
	long long x, count=0;
	for(x = 2;;x++){
		if( isPrime(x) ){
			count++;
			printf("%lldth prime is %lld\n", count, x);
			if( count == 10001)
				break;
		}
	}
	// printf("%lldth prime is %lld\n", count, x);
}