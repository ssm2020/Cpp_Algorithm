#include<stdio.h>
#include<string.h>
int main(){
	char A[101]={'\0'};
	int B[10]={0,},max=0,index=0;
	scanf("%s",A);
	for(int i=0;i<strlen(A);i++){
		B[A[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(max<=B[i]){
		
			max=B[i];
			index=i;
		}
	}
	printf("%d",index);
	
	
	return 0;
}
