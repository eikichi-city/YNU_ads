// 2164204_ads06.c(with kuku.txt)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c,n=0,m=0,i=0,j=0;
    FILE *infp;
    int table[9][9];
    
    infp = fopen("kuku.txt","r");
    
    while((c=getc(infp)) != EOF)
    {
        if(c==',')
        {
            table[i][j]=n*10+m;
            n=0;
            m=0;
            j++;
        }
        else if(c=='\n')
        {
            table[i][j]=n*10+m;
            n=0;
            m=0;
            i++;
            j=0;
        }
        else if(m!=0)
        {
            n=m;
            m=c-'0';
        }
        else
        {
            m=c-'0';
        }
    }
    table[i][j]=n*10+m;
    
    printf("columon size = %d\n",j+1);
    printf("row size = %d\n",i+1);
    
    for(i=0;i<9;i++)
            {
                for(j=0;j<9;j++)
                {
                    printf("%3d",table[i][j]);
                }
                printf("\n");
            }

    fclose(infp);
    
    return 0;
}
