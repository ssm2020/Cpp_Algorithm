#include<stdio.h>
int main(){
	char A[10]={'\0'};
	int sum=0,i=0,c_sum=0,j=0,h_sum=0;
	scanf("%s",A);
	i=1;
	if(A[i]!='H'){
		while(A[i]!='H'){
			c_sum=c_sum*10+(A[i]-'0');
			i++;
		}
		j=i+1;
		if(A[j]=='\0'){
			h_sum=1;
		}
		else{
		
		while(A[j]!='\0'){
			h_sum=h_sum*10+(A[j]-'0');
			j++;
		}
	}
	}
	else{
		sum=sum+12;
		j=2;
		if(A[3]=='\0'){
			h_sum=1;
		}
		else{
		
		while(A[j]!='\0'){
			h_sum=h_sum*10+(A[j]-'0');
			j++;
		}
	}
	}
	c_sum=c_sum*12;
	
	printf("%d",sum+c_sum+h_sum);
	
	return 0;
}
