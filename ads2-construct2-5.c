/****************************************************************

    アルゴリズムとデータ構造
    演習問題  ads2-construct2-5.c
    
 ****************************************************************/
#include <stdio.h>

int main(void)
{
    int i,j,k;
        for(i=2;i<=1000;i++){
            k=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    k=1;
                    break;
                }
            }
        if(k==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

