#include<stdio.h>
int A[200001]={0,};
int B[200001]={0,};
void S(void){
	int key=0;
	for(int i=2;i<=200001;i++){
		A[i]=i;
	}
	for(int i=2;i<=200001;i++){
		if(A[i]==0){
			continue;
		}
		for(int j=i+i;j<=200001;j=j+i){
			A[j]=0;
		}
		B[key++]=A[i];
	}
}
int main(){
	int N=0,count=0,i=0;
	S();
	scanf("%d",&N);

	while(B[i]*B[i]<=N){
		count++;
		i++;
		if(B[i]==0){
			break;
		}
	}
printf("%d",count);
	return 0;

}
