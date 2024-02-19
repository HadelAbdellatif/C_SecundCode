#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void number();
int main()
{
    number();
    return 0;
}

void number()
{
    float a;
    printf("please enter the value\n");
    scanf("%f",&a);
    a=a*100;
    a=a+0.5;
    a=(int)(a);
    a=(float)(a/100);
    printf("the value =%f\n",a );

}
