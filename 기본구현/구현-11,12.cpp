#include<stdio.h>
int main(){
	 int N=0,sum=0,count=1,key=9,i=0;
	 scanf("%d",&N);
	 while(i!=N){
	 	if(i==key){
	 		key=key*10+9;
	 		count++;
		 }
		sum=sum+count;
	 	i++;
	 }
	 printf("%d",sum);
	 	
	 
	return 0;
}
