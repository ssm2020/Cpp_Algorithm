#include<stdio.h>
#include<string.h>
int main(){
	char A[31]={'\0'};
	int count=0,count2=0;
	scanf("%s",A);
	for(int i=0;i<strlen(A);i++){
		if(A[0]==')'||A[strlen(A)-1]=='('){
			printf("NO");
			return 0;
		}
		if(A[i]=='('){
			count++;
		}
		else if(A[i]==')'){
			count2++;
		}
	}
	if(count==count2){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	
	return 0;
}
