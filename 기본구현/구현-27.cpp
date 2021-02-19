#include<stdio.h>
int main(){
	int N=0,key=0,A[1001]={0,},num=0;
	scanf("%d",&N);
	for(int i=2;i<=N;i++){
		key=2;num=i;
		while(num>1){
			if(num%key==0){
				A[key]++;
				num=num/key;
			}
			else{
				key++;
			}
		}
	}
	printf("%d! = ",N);
	for(int i=2;i<=N;i++){
		if(A[i]!=0){
			printf("%d ",A[i]);
		}
	}
	
	
	
	
	
	return 0;
}
