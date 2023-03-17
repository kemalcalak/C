#include <stdio.h>
#include <stdlib.h>



typedef struct{
float x;
float y;
}nokta;





int main()
{
    nokta ali;
    ali.x=3.562;
    ali.y=8.625;

    printf("X eksenimiz %.3f ,Y eksenimiz %.3f",ali.x,ali.y);


    return 0;
}
