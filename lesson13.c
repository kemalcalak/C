#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ali=10;
    int *p;

    p=&ali;


    printf("%d\n",*p);
     printf("%d\n",p);
      printf("%d\n",ali);
       printf("%d\n",&ali);

    int *sayi;
    int n;
    n=20;

    sayi=&n;
    printf("%d\n",*sayi);
     printf("%d\n",sayi);
      printf("%d\n",n);
       printf("%d\n",&n);

       *sayi=30;

       printf("%d\n",n);
       printf("%d\n",&n);



}
