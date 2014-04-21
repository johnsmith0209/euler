#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c;
	for(a=1;a<1000;a++){
		for(b=a;b<1000;b++){
			c = sqrt( pow(a, 2) + pow(b, 2) );
			if( c - (int) c != 0) continue;//not integer
			if( a + b + c == 1000){
				goto finish;
			} 
		}
	}
	finish :
		printf("%.0f\n", a * b * c);
	return 0;
}
