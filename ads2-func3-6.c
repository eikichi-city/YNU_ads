// アルゴリズムとデータ構造第2回 ads2-func3-6.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int n;
    int k[4]={0,0,0,0};
    int f=0;
    int c=1;
    int a=0;

    printf("あなたの血液型を勝手に予想します\n");
    
    printf("number = ");
    scanf("%d",&n);
    n = n % 4 + 1;
     
    do{    
        do{
            srand(time(NULL));
            n = ( n + rand() ) % 4 + 1;
        }while(n==k[0] || n==k[1] || n==k[2] || n==k[3]);
        
        if(n==1){
            printf("あなたの血液型はA型ですか？[Yes:1 / No:other]：");
            scanf("%d",&a);
        }
        else if(n==2){
            printf("あなたの血液型はB型ですか？[Yes:1 / No:other]：");
            scanf("%d",&a);
        }
        else if(n==3){
            printf("あなたの血液型はO型ですか？[Yes:1 / No:other]：");
            scanf("%d",&a);
        }
        else{
            printf("あなたの血液型はAB型ですか？[Yes:1 / No:other]：");
            scanf("%d",&a);
        }
        if(a==1){
            f=1;
        }
        else if(c==4){
            break;
        }
        else{
            k[c]=n;
            c++;
        }
    }while(f!=1);

    printf("当てるまでに%d回かかりました\n",c);

    return 0;
}