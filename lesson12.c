#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

void init_table(int ali[A][B])
{
    int i,j;
    printf("%d * %d boyutunda bir matris giriniz\n",A,B);
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            scanf("%d",&ali[i][j]);
        }
    }
}
void printf_tablo(int ali[A][B])
{
    int i,j;
    printf("Tablomu su sekilde gorunmektedir\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%4d",ali[i][j]);
        }
        printf("\n");
    }
}
void calcul(int ali[A][B],int *max,int *min,int *toplam)
{
    int i,j;
    *max=ali[0][0];
    *min=ali[0][0];
    *toplam=0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(ali[i][j]>*max)
            {
                *max=ali[i][j];
            }
            if(ali[i][j]<*min)
            {
                *min=ali[i][j];
            }
            *toplam=*toplam+ali[i][j];
        }
    }
}

int main()
{
int min,max,toplam;
int ali[A][B];
init_table(ali);
printf_tablo(ali);
calcul(ali,&max,&min,&toplam);
printf("Maximum degerimiz : %d\n",max);
printf("Minumum degerimiz : %d\n",min);
printf("Toplam degerimiz : %d",toplam);
    return 0;
}
