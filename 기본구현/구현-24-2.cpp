#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int N=0,A[102]={0,},num=0,B[102]={0,},key=0;
	int n1=0,n2=0;
	scanf("%d",&N);
	scanf("%d",&key);
	for(int i=1;i<N;i++){
		scanf("%d",&num);
		if(A[abs(key-num)]==0){
			A[abs(key-num)]++;
		}
		else{
			printf("NO");
			return 0;
		}
		key=num;

	}
	printf("YES");





	return 0;
}
