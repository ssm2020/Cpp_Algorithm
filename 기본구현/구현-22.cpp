#include<stdio.h>
int main(){
	int N=0,K=0,A[100001]={0,},max=0,sum=0,n1=0,mid=0,n2=0;
	scanf("%d %d",&N,&K);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<K;i++){
		sum=sum+A[i];
	}
	max=sum;
	for(int i=K;i<N;i++){
		sum=sum-A[i-K]+A[i];
		if(max<sum){
			max=sum;
		}
	}
	printf("%d",max);
	
	return 0;
}
