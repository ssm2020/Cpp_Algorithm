#include<stdio.h>
int main(){
	int N=0,M=0,sum=0;
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++){//M의 배수구하기 
		if(i%M==0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
