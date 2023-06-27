#include<stdio.h>

int main(void)
{int fat =3;
int resp =1;
    for ( ;fat >= 1;--fat)
    {
     resp *= fat;
    }
    printf("o fatorial é: %i\n",resp);


    return(0);
}