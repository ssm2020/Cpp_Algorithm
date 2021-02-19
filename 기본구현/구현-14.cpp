#include<stdio.h>
int result=0;
bool isPrime(int x){
	int A[100001]={0,},key=0,num=0;
	while(x!=0){
		A[key++]=x%10;
		x=x-x%10;
		x=x/10;
	}
	for(int i=0;i<key;i++){
		num=num*10+A[i];
	}
	result=num;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int N=0,vum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&vum);
		if(isPrime(vum)==true){
			if(result==1){
				continue; 
			}
			printf("%d ",result);
		}
	}
	return 0;
}
