#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int N=0,num=0,count2=0,count5=0;
	scanf("%d",&N);
	for(int i=2;i<=N;i++){
		num=i;
		while(1){
			if(num%2==0){
				count2++;
				num=num/2;	
			}
			if(num%5==0){
				count5++;
				num=num/5;
			}
			else{
				break;
			}
		}
	}
	if(count2>count5){
		printf("%d",count5);
	}
	else{
		printf("%d",count2);
	}
	
	return 0;
}
