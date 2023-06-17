#include <stdio.h>
int func(int a, int b) {
if (b == 0)
    return 1;
int temp = func(a, b / 2);

if (b%2!=0)
    return temp * temp * a;
else
    return temp * temp;
}
void main(){
    int x=func(2,5);
    printf("%d",x);
}
