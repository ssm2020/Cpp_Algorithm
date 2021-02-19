#include<stdio.h>
int main(){
	int N,sum=1;
	scanf("%d",&N);
	printf("1");
	for(int i=2;i<N;i++){
		if(N%i==0){
			printf(" + %d",i);
			sum=sum+i;
		}
	}
	printf(" = %d",sum);
	return 0;
}
