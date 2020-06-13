#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int fibo[n + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= a; i++)
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
    printf("%d\n", fibo[a]);
    return 0;
}
