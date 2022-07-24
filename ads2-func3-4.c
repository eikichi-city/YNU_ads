/****************************************************************

    アルゴリズムとデータ構造
    演習問題  ads2-func3-4.c
    
 ****************************************************************/
#include <stdio.h>

char disp(void);

int main(void)
{
    int i;
    
    for(i=0;i<100;i++){
        disp();
    }
    
    return 0;
}

char disp(void)
{
    printf("I love you❤️\n");
}