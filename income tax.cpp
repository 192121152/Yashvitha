#include<stdio.h>
int main()
{
    float tax = 0, income;

    printf ("enter your income \n");
    scanf ("%f", &income);
    if(income<1)
    {
    	printf("enter positive value \n");
    	exit(0);
	}
    if(income<150000)
    {
    	printf("no tax \n");
	}
	else {
	

    if (income >= 150000 && income <= 300000)
    {
        tax = income/10;
    }

    if (income >= 300001 && income <= 500000)
    {
    	tax = income/20;
    }

    if (income >= 500000)
    {
        tax = income/30;
    }

    printf ("your net income tax to be paid by end of this month is %f \n", tax);
}
    return 0;
}
