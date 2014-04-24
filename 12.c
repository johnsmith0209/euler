#include <stdio.h>
#include <stdlib.h>
long long getTriangleNum(long long num);
long long getDivisorNum(long long num);

int main(void){
	long long i=1, divisorNum, triangleNum;
	do{
		triangleNum = getTriangleNum(++i);
		divisorNum = getDivisorNum(triangleNum); 
	}
	while( divisorNum <= 500);

	printf("%lld\n", triangleNum);
}

long long getTriangleNum(long long num){
	if( num == 0) return 0;
	long long i, sum = 0;
	for(i=1; i<=num;i++){
		sum += i;
	}
	return sum;
}
long long getDivisorNum(long long num){
	long long i, sum=0;
	if( abs(num) == 1 || num == 0) return 1;
	for(i = 1; i <= num; i++ ){
		if( num % i == 0 ){
			sum++;
		}
	}
	return sum;
}