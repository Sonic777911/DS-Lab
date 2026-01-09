//Type your content here
#include <stdio.h>
int main(){
	int a[100],b,n,flag,i;
	flag =0;
	scanf("%d",&b);
	for(int i =0 ; i<b;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(int i=0;i<b;i++){
		if(n==a[i]){
			flag+=1;
			printf("found at position %d\n",i);
			break;
		}

	}
	if(flag==0){
		printf("%d not found\n",n);
	}

	return 0;
}
