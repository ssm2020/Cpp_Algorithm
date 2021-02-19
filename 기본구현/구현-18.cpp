#include<stdio.h>
int main(){
	int N=0,m=0,key=0,count,max=0;
	scanf("%d %d",&N,&m);
	for(int i=0;i<N;i++){
		scanf("%d",&key);
		if(key>m){
			count++;
			if(max<count){
				max=count;
			}
		}
		else{
			count=0;
		}
	}
	if(max==0){
		printf("-1");
		return 0;
	}
	
	printf("%d",max);
	
	return 0;
}
