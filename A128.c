#include<stdio.h>
#include<conio.h>
void binary(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	binary(n);
	getch();
}

void binary(int n)
{
	if(n==0)
		return;
	binary(n/2);
	printf("%d ",n%2);
}
