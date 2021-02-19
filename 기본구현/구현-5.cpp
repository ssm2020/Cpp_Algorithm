#include<stdio.h>
int main(){
	char A[16]={'\0'};int age=0;
	scanf("%s",A);
	if(A[7]=='1'){
		age=100-((A[0]-'0')*10+A[1]-'0')+20;
		printf("%d M",age);
	}
	if(A[7]=='2'){
		age=100-((A[0]-'0')*10+A[1]-'0')+20;
		printf("%d W",age);
	}
	if(A[7]=='3'){
		age=20-((A[0]-'0')*10+A[1]-'0');
		printf("%d M",age);
	}
	if(A[7]=='4'){
		age=20-((A[0]-'0')*10+A[1]-'0');
		printf("%d W",age);
	}
	
	
	return 0;
}
