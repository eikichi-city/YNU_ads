/****************************************************************

    アルゴリズムとデータ構造
    演習問題  ads2-func3-5.c
    
 ****************************************************************/
#include <stdio.h>

int prime(int n);

int main(void)
{
    int n;
    
    for(n=2;n<=100;n++){
        if(prime(n)==1){
            printf("%d\n",n);
        }
    }
    
    return 0;
}

int prime(int n)
{
    int j;
    int k=1;
    
    for(j=2;j<n;j++){
        if(n%j==0){
            k=0;
        }    
    }
    
    return k;
}
