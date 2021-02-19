#include<stdio.h>
#include<string.h>
int main(){
	int A[123]={0,};
	int B[123]={0,};
	char C[101]={'\0'};
	scanf("%s",C);
	for(int i=0;i<strlen(C);i++){
		A[C[i]]++;
	}
	scanf("%s",C);
	for(int i=0;i<strlen(C);i++){
		B[C[i]]++;
	}
	for(int i=65;i<=122;i++){
		if(A[i]!=B[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
