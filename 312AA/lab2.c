#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
	if(x>0)
	{
	x=function(x);
	}
	return x;
}

int main(){
	int a=30, i=0;
	printf("xc");
	while (a>0){
		printf("xc");
		a=function(a);
		printf("xc");
		i++;
	}
	printf("%d", i);
	return 0;	
}

