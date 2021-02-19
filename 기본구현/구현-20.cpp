#include<stdio.h>
int main(){
	int A[101]={0,},B[101]={0,},num=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<num;i++){
		scanf("%d",&B[i]);
	}
	//가위1 바위2 보3 
	for(int i=0;i<num;i++){
		if(A[i]-B[i]==1){
			printf("A\n");
		}
		else if(A[i]-B[i]==-1){
			printf("B\n");
		}
		else if(A[i]-B[i]==2){
			printf("B\n");
		}
		else if(A[i]-B[i]==-2){
			printf("A\n");
		}
		else{
			printf("D\n");
		}
	} 
	
	
	return 0;
}
