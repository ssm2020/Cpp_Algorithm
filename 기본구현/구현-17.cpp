#include<stdio.h>
int main(){
	int N=0,A,B,min=0,max=0,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		sum=0;
		scanf("%d %d",&A,&B);
		min=1;max=A;
		while(min<=max){
			if(min==max){
				sum=sum+min;
				break;
			}
			sum=sum+min+max;
			min++;
			max--;
		}
	
		if(sum==B){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
