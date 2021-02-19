#include<stdio.h>
int sum(int x){
	int count=0,key=0,result=0;
	while(x>0){
		result=result+x%10;
		x=x-x%10;
		x=x/10;
	}
	return result;
}


int main(){
	int N=0,num=0,max=0,key=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&num);
		if(max<=sum(num)){
			if(max==sum(num)){
				if(key>=num){
					continue;
				}
			}
			max=sum(num);
			key=num;
		}
	
	}
	printf("%d",key);
	return 0;
}
