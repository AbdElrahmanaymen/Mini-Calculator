#include<stdio.h>
#include<conio.h>

int main() {
    char operator;
    int num1,num2;

    printf("Enter two numbers as operands\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter the operation (+-*/%)\n");
    scanf("%d",&operator);

    switch(operator) {
        case '+':
                  printf(num1+num2);
                break;
        case '-':
                printf(num1-num2);
                break;
        case '*':
                printf(num1*num2);
                break;
        case '/':
                printf(num1/num2);
                break;
        case '%':
               x=num2 ;
                printf(num1%x);
                break;
        default:
                printf("ERROR: Unsupported Operation");
    }
    return 0;
}
