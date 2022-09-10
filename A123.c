#include<stdio.h>
#include<conio.h>
void nNatural(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	nNatural(n);
	getch();
}
void nNatural(int n)
{
	if(n==0)
	    return;
	nNatural(n-1);
	printf("%d  ",n*2-1);
}
