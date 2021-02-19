#include<stdio.h>
int main(){
	int N,A,max=-101,min=101;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A);
		if(max<A){
			max=A;
		}
		if(min>A){
			min=A;
		}
	}
	printf("%d",max-min);
	
	
	return 0;
}
