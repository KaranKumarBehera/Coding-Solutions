#include <stdio.h> 

int main() {
	int t,n1,k=0,n2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n1,&n2);
		printf("%d\n",n1%n2);
	}

	return 0;
}