#include <stdio.h>

int main(){
	long long i, j;
	for(i=20;;i++){
		int flag = 0;
		for(j=1;j<=20;j++){
			if(i % j != 0){
				flag = 1;break;
			}
		}
		if( flag == 0 ) break;
	}
	printf("%lld\n", i);
}