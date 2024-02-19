#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double area_1(double);
double area_2(double);

int main()
{
    double l;
    printf("please enter the lenght in inch\n");
    scanf("%lf",&l);
    printf("the area in inch =%f\n ",area_1(l));
    printf("the area in cm =%f\n",area_2(l));
    return 0;
}

double area_1 (double l)
{
    return l*l;

}
double area_2 (double l)
{
    return area_1(l)*2.45*2.45;
}
