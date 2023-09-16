#include <stdio.h>


void add()
{
    int a=50;
    int b=60;
    int c=a+b;
    printf("Sum is %d \n",c);
}
void product()
{
    int a=50;
    int b=60;
    int c=a*b;
    printf("Product is %d \n",c);
}
int main()
{
    product();
    add();
    return 0;
}
