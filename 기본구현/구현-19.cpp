#include<stdio.h>
int main(){
	int N=0,count,A[101]={0,},key=0,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<N-1;i++){
		key=0;
		for(int j=i+1;j<N;j++){
			if(A[i]<=A[j]){
				key=1;
			}
		}
		if(key==0){
			sum++;
		}
	}
	printf("%d",sum);
	
	return 0;
}
