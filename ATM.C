#include"stdio.h"
#include"conio.h"
void main()
{
	int pin,num;
	float balance = 50000,amount;
	clrscr();
	printf("welcome to our ATM\n");
	printf("enter your pin : ");
	scanf("%d",&pin);
	if(pin==9876)
	{
		printf("entered correct pin now you can acces your account\n");
		printf("-------------\n");
		printf("-------------\n");
		printf("press 1 to check balance\n");
		printf("press 2 to deposit your amount\n");
		printf("press 3 to withdraw your amount\n");
		printf("press 4 to exit\n\n");
	printf("enter your choice : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("your current balance = %.2f\n",balance);
			printf("thank you for using our atm!!!!!!!!");
			break;
		case 2:

			printf("enter your deposit amount : ");
			scanf("%f",&amount);
			if(amount>=1)
			{
			printf("your old balance = %.2f\n",balance);
			balance = amount + balance;
			printf("your new balance = %.2f\n",balance);
			printf("thank you for using our atm!!!!!!!!!!");
			}
			else
			{
				printf("insufficiant amount entered");
			}
			break;
		case 3:
			printf("enter your withdrw amount : ");
			scanf("%f",&amount);
			if (amount>balance)
			{
				printf("insufficiant balance!\n");
			}
			else if(amount>=1)
			{
			printf("your old balance = %.2f\n",balance);
			balance = balance - amount;
			printf("your new balance = %.2f\n",balance);
			printf("thank you for using our atm!!!!!!!!!!!!");
			}
			else
			{
				printf("invalid amount entered\n");
			}
			break;
		case 4:
			printf("EXIT - thank for using our atm!!!!!!!!!!!!!!");
			break;
		default :
			printf("\ninvalid choice!\n");
			printf("try to enter correct choice");
			}
	}
	else
	{
		printf("invalid pin\n\n");
		printf("-------------\n");
		printf("-------------\n");
		printf("try to enter correct pin");
	}
	getch();
}
