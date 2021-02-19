#include<stdio.h>
int main(){
	int N=0,A[10001]={0,},count=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<N;i++){
		count=0;
		for(int j=i-1;j>=0;j--){
			if(A[i]>A[j]){
				count++;
			}
		}
		printf("%d ",i-count+1);
	}
	
	
	return 0;
}
