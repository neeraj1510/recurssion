/* This program is used to demonstrate the use of recurssion for factorial calculation */
/* Time complexity --- need to check */
/* space complexisty   constatnt  */
#include<stdio.h>
int fact(int n)
{
        if(n <= 1)
                return n;
        return (n*fact(n-1));
}

int main()
{
        int num = 0;
        printf("enter the number\n");
        scanf("%d", &num);
        printf("factorial of %d = %d\n",num, fact(num));
}
