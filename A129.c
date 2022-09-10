#include<stdio.h>
#include<conio.h>
void octal(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	octal(n);
	getch();
}

void octal(int n)
{
	int oct;
	if(n==0)
		return;
	octal(n/8);
	printf("%d",n%8);
}
