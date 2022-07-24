// 2164204_ads4.c
#include <stdio.h>
#define N 50000
int a[N]={};

void game(int n);

int main(void)
{
    int n,m;
    
    for(m=1;m<=N;m++) {
        a[m]=m;
    }
    
    printf("1~50000までの整数を入力してください\n");
    
    do{
        printf("n = ");
        scanf("%d",&n);
    } while(n<1 || n>50000);
    
    game(n);

    return 0;
}

void game(int n)
{
    int i, j, k ,l ,ll;
    i = 0;
    j = N - 1;

    do {
        k = ( i + j ) / 2; 
        if ( n == a[k]) {
            ll = 3;
        }
        else if ( n > a[k] ) {
            i = k + 1;
            ll = 1;
        }
        else {
            j = k - 1;
            ll = 2;
        }
    
        printf("%d\n",a[k]);
        printf("大きい(1)／小さい(2)／アタリ！(3):");
        scanf("%d",&l);
    
        while(l!=ll){
            printf("ホント!?\n");
            printf("%d\n",a[k]);
            printf("大きい(1)／小さい(2)／アタリ！(3):");
            scanf("%d",&l);
        }
    
    } while ( a[k] != n && i <= j );
    
}