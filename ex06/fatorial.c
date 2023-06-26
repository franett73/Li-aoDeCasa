#include <stdio.h>

int main()
{
    int fatorial=7;
    int resposta =1;

    for( ;fatorial >=1; --fatorial)
    { resposta *= fatorial;

    }
    printf (") numero fatorial é %i\n", resposta);

    return(0);
}