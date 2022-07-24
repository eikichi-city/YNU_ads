// アルゴリズムとデータ構造第3回小テスト
#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    int i;
    
    printf("1~nまでのフィボナッチ数列：n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",fibo(i));
    }

    return 0;
}

int fibo(int n)
{
    static int fn;
    
    if(n>2){
        fn = fibo(n-1) + fibo(n-2);
    }
    else{
        fn = 1;
    }
    
    return fn;
}