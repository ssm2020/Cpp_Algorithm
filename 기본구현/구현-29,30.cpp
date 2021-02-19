#include<stdio.h>
int main(){
	int N=0,left=1,mid=0,right=0,key=1,sum=0;
	scanf("%d",&N);
	while(left!=0){
		left=N/(key*10);
		mid=(N/key)%10;
		right=N%key;
		
		if(mid>3){
			sum=sum+(left+1)*key;
		}
		else if(mid<3){
			sum=sum+(left*key);
		}
		else{
			sum=sum+(left*key)+right+1;
		}
		key=key*10;
	}

	printf("%d",sum);
	
	
	return 0;
}
