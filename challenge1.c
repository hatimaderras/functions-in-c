#include <stdio.h>
void mySum(int x,int y){
int sum = x+y;
printf("the sum of %d + %d = %d\n",x,y,sum);
}
int main ()
{
    mySum(2,4);
    mySum(5,2);
    mySum(5,40);
    return 0;
}
