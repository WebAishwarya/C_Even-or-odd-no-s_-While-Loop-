// Program to print even or odd numbers between 1 to 10 numbers

#include<stdio.h>

int main()
{
    printf("Program to print even or odd numbers between 1 to 10 numbers\n\n");
    
    int i = 1;
    
    while(i<=10)
    {
        if(i%2==0)
        {
            printf("Even Number : %d\n", i);
        }
        else
        {
            printf("Odd Number : %d\n", i);
        }
        
        i++;
    }
    
    return 0;
}
