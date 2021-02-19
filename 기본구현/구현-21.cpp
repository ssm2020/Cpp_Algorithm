#include<stdio.h>
int main(){
	int A[11]={0,},B[11]={0,},count1=0,count2=0,win=0;
	for(int i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<10;i++){
		scanf("%d",&B[i]);
	}
	
	for(int i=0;i<10;i++){
		if(A[i]>B[i]){
			count1=count1+3;
			win=1;
		}
		else if(A[i]<B[i]){
			count2=count2+3;
			win=2;
		}
		else{
			count1++;count2++;
		}
	}
	if(count1>count2){
		printf("%d %d\n",count1,count2);
		printf("A");
	}
	else if(count1<count2){
		printf("%d %d\n",count1,count2);
		printf("B");
	}
	else{
		if(win==1){
			printf("%d %d\n",count1,count2);
			printf("A");
		}
		else if(win==2){
			printf("%d %d\n",count1,count2);
			printf("B");
		}
		else{
			printf("%d %d",count1,count2);
			printf("D");
		}
	}
	
	
	return 0;
}
