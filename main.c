#include <stdio.h>
#include "myMath.h"

int main(){
    printf("Please inset a real number\n");
    double number=0;
    scanf("%lf",&number);
    int i=(int)number;
    double f1=sub(add(Exponent(i),Power(number,3)),2);
    double f2=add(mul(number,3),mul(Power(number,2),2));
    double f3=sub(div(mul(Power(number,3),4),5),mul(number,2));
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %lf is:%0.4lf\n",number,f1);
    printf("The value of f(x)=3x+2x^2 at the point %lf is:%0.4lf\n",number,f2);
    printf("The value of f(x)=(4x^3)/5-2x at the point %lf is:%0.4lf\n",number,f3);
    return 0;


}