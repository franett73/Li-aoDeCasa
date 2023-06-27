#include <stdio.h>


int main(void)
{ int fat =10;
  int resp =1;
   
   for ( ;fat >= 1; --fat)
   {
    resp = resp * fat;//significa a mesma coisa que (resp *=fat);
   }
   printf("o fatorial é :%i\n",resp);

    return(0);
}