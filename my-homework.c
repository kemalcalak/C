#include <stdio.h>
#include <stdlib.h>




void simetrik(int matris[5][5],int *a)
{
    int i,j;
    *a=1;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(matris[i][j] != matris[j][i])
              {
                 *a ==0;
              }
        }
    }
}

void matris_bastir(int matris[5][5])
{
    int a,q;
    for(a=0;a<5;a++)
    {
        for(q=0;q<5;q++)
        {
            printf("%3d",matris[a][q]);
        }
        printf("\n");
    }


}

void diyogonal (int matris[5][5],int *b )
{
    int i,j;
    *b=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j && matris[i][j]!=0)
            {
                *b=0;
            }
        }
    }
}

int main()
{
    int a,b;
   int matris[5][5]=
   {
       {2,0,0,0,0},
       {0,6,0,0,0},
       {0,0,2,0,0},
       {0,0,0,7,0},
       {0,0,0,0,4},
   };
   matris_bastir(matris);
   simetrik(matris,&a);
   diyogonal(matris,&b);
    if(a==1)
        printf("simetriktir\n");
    else
        printf("simetrik degildir\n");

    if(b)
        printf("diyagonaldir\n");
    else
        printf("diyogonal degildir\n");

    return 0;
}
