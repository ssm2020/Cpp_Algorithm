#include<stdio.h>
using namespace std;
int main(){
	int N=0,A[101]={0,},B[101]={0,};
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
		B[i]=1;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(A[i]<A[j]){
				B[i]++;
			}
		}
		printf("%d ",B[i]);
	}
	
	
	return 0;
}
