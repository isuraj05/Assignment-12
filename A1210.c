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
	int rev=0;
	if(n==0)
	    return;
	rev=rev*10+n%10;
	printf("%d",rev);
	nNatural(n/10);											
}
