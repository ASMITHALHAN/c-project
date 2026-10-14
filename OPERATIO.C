#include"stdio.h"
#include"conio.h"
void main()
{
	char op;
	float a,b;
	clrscr();
	printf("enter expression (e.g. 5+3)\n");
	scanf("%f%c%f",&a,&op,&b);
	switch(op)
	{
	case'+':
		printf("=%.2f\n",a+b);
		break;
	case'-':
		printf("=%.2f\n",a-b);
		break;
	case'*':
		printf("=%.2f\n",a*b);
		break;
	case'/':
		if(b!=0)
		printf("=%.2f\n",a/b);
		else
		printf("division by zero!\n");
		break;
	default:
		printf("INVALID OPERATOR\n");
		}
	getch();
}