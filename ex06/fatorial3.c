#include<stdio.h>

int main(void)
{ int fat =9;
  int resp=1;

  for ( ;fat >=1;--fat)
  {
    resp = resp* fat; 
  }
  printf("o numero fatorial é :%i\n",resp);
  return(0);

}