#include <stdio.h>

int main(){
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char x;
	printf("enter x");
	scanf("%c",&x);
	for(int i=0;i<26;i++)
	{
		if(x==a[i])
		{
			printf("The value is an alphabet");
		}
		else
		printf("the value is not an alphabet");
	}
	return 0;
}
