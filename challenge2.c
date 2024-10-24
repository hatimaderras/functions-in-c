#include <stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main ()
{
int a=10;
int b= 2;
// before swap
printf("before the swap a= %d and b =%d :\n",a,b);
// after swap
swap(&a,&b);
printf("after the swap a=%d and b=%d\n,",a,b);
return 0;


}
