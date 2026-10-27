#include <stdio.h>
int main()
{
    int operand1, operand2,result=0;
    char operator;
    printf("Enter operator : ");
    scanf("%c",&operator);
    printf("Enter two operands : ");
    scanf("%d%d",&operand1, &operand2);

    switch (operator)
    {
    case '+' : result = operand1 + operand2;
               break;
    case '-' : result = operand1 - operand2;
               break;
    case '/' : result = operand1 / operand2;
               break;
    case '*' : result = operand1 * operand2;
               break;
    case '%': result = operand1 % operand2;
               break;
    default : printf("Wrong Operator ");
    }

if(result)
    printf("result = %d\n",result);
return 0;
}
