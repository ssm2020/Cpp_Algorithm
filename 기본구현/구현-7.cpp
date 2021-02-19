#include<stdio.h>
#include<string.h>
int main(){
	char A[101]={'\0'};
	gets(A);
	for(int i=0;i<strlen(A);i++){
		if(A[i]==32){
			continue;
		}
		if(65<=A[i]&&A[i]<=90){
			printf("%c",A[i]+32);
			continue;
		}
		printf("%c",A[i]);
	}
	return 0;
}
