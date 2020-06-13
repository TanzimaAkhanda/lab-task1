#include<stdio.h>
int main(){
    int  a, b ,gcd, rem,lcm,n1,n2;
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(b!=0)
    {
       rem=a%b;
       a=b;
       b=rem;
    }
    lcm= ((n1*n2)/a);
    printf("%d\n",lcm);
    return 0;
}
