#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int N=0,A[101]={0,},B[101]={0,},C[101]={0,};
	scanf("%d",&N);
	for(int i=0;i<N-1;i++){
		B[i]=i+1;
	}
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<N-1;i++){
		C[i]=abs(A[i]-A[i+1]);
	}
	sort(C,C+N-1);
	for(int i=0;i<N;i++){
		if(B[i]!=C[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	
	return 0;
}
