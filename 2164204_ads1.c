// アルゴリズムとデータ構造第1回小テスト
#include <stdio.h>

int main(void)
{
    struct seiseki {
        int A;
        int B;
        int C;
        float average;
    };
    
    struct seiseki st[3];
    int i;
    
    for(i=0;i<3;i++)
    {
        printf("%dのAの点数:",i+1);
        scanf("%d",&st[i].A);
        printf("%dのBの点数:",i+1);
        scanf("%d",&st[i].B);
        printf("%dのCの点数:",i+1);
        scanf("%d",&st[i].C);
        st[i].average = (st[i].A + st[i].B + st[i].C)/3;
    }
    
    for(i=0;i<3;i++)
    {
        printf("%dのAの点数＝%d\n",i+1,st[i].A);
        printf("%dのBの点数＝%d\n",i+1,st[i].B);
        printf("%dのCの点数＝%d\n",i+1,st[i].C);
        printf("%dのaverage＝%f\n",i+1,st[i].average);
    }
    
    
    
  
    return 0;
}
