#include <stdio.h>

int digitSum();

int main()
{

    digitSum();
    return 0;
}

int digitSum()
{

    int number = 0;
    int digits = 0;
    int remain = 0;
    int cal = 0;

    printf("Enter 5 digit number : ");
    scanf("%d", &number);

    for (int i = 0; i < 5; i++)
    {
        remain = number % 10;
        cal = cal + remain;
    }

    printf(" Sum of Digits : %d", cal);
}