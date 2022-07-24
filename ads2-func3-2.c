/****************************************************************

    アルゴリズムとデータ構造
    演習問題  ads2-func3-2.c
    
 ****************************************************************/
#include <stdio.h>

int summation(int n1, int n2);

int main(void)
{
    int n1=5,n2=20;
    printf("n1=%d\n",n1);
    printf("n2=%d\n",n2);
    summation(n1,n2);
    return 0;
}

int summation(int n1, int n2)
{
    int s=0;
    int d;
    d = n2 - n1;
    if(d<0){
        d = -d;
    }
    while(d>0){
        s += d;
        d--;
    }
    printf("%dから%dまでの整数の和は%d\n",n1,n2,s);
}