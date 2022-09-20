#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num1,num2,sum,sub,mul,div;
    char A='+',B='-',C='*',D='/';
    printf("Data types!\n");
    printf("Enter two numbers: \n");
//    scanf("%lf",&num1);
//    scanf("%lf",&num2);

    scanf("%lf%lf",&num1,&num2);// /n might cause glitch
    sum=num1 + num2;
    sub=num1 - num2;
    mul=num1 * num2;
    div=num1 / num2;

     printf("Sum of %lf %c %lf is %lf\n",num1,A,num2,sum);
     printf("Sub of %lf %c %lf is %lf\n",num1,B,num2,sub);
     printf("Mul of %lf %c %lf is %lf\n",num1,C,num2,mul);
     printf("Div of %lf %c %lf is %lf\n",num1,D,num2,div);




    return 0;
}
