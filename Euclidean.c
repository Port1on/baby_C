#include<stdio.h>

int main(void)
{
    int number1, number2, f, pi, answer;
    
    printf("The first number is:");     //输入要求的两个数
    scanf("%d", &number1);
    printf("The second number is:");
    scanf("%d", &number2);
    
    if(number1 < number2)               //判断数的大小
    {
        f = number1;
        number1 = number2;
        number2 = f;
    }

    pi = number1 % number2;             //pi为余数
    answer  = number1 / number2;

    while(pi != 0)
    {
        number1 = number2;
        number2 = pi;
        pi = number1 % number2;
    }
    answer = number2;
    
    printf("the answer is : %d", answer);
    putchar('\n');
}
