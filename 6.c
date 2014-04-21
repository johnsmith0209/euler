#include <stdio.h>
#include <math.h>

long long sumSquare(int from, int to){
	long long sum = 0;
	for(int i=from;i<=to;i++){
		sum += i;
	}
	return pow(sum, 2);
}

long long squareSum(int from, int to){
	long long sum = 0;
	for(int i=from;i<=to;i++){
		sum += pow(i, 2);
	}
	return sum;
}

int main(){
	int from=1, to=100;
	long long sum_square, square_sum;
	sum_square = sumSquare(from, to);
	square_sum = squareSum(from, to);
	printf("%.0f\n", fabs(square_sum - sum_square));
}
