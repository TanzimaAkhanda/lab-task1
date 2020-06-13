#include<stdio.h>
int main(){
    int  x, y ,gcd, rem;
    scanf("%d %d",&x,&y);
    while(b!=0)
    {
       rem=x%y;
       x=y;
       y=rem;
    }
    gcd =x;
    printf("%d\n",gcd);
    return 0;
}
