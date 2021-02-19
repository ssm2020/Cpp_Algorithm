#include<stdio.h>
int main(){
	int N=0,num=0,sum=1,max=0,result=0,key=0;
	scanf("%d",&N);
	scanf("%d",&key);
	for(int i=1;i<N;i++){
		scanf("%d",&num);
		if(key<=num){
			sum++;
			if(max<sum){
				max=sum;
			}
			key=num;
		}
		else{
			sum=1;
			key=num;
		}
		
	}
	printf("%d",max);
	return 0;
}
