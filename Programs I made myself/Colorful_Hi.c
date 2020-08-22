#include <stdio.h>

void higrn(char c);

int main()
{
  char cor;
  printf("\nWelcome to the big colorful \"HI\" printing program!\n\n Current available colors:\t r = red\n\t\t\t\t g = green\n\t\t\t\t y = yellow\n\t\t\t\t b = blue\n\t\t\t\t m = magenta\n\t\t\t\t c = cyan\n\t\t\t\t anything else = white\n\n");
  while(1)
  {
    printf("Please choose a color: ");
    scanf(" %c",&cor);
    higrn(cor);
  }
  
  
}

void higrn(char c)
{
  int valcor;
  switch(c)
  {
    case 'r': valcor = 31; break;
    case 'g': valcor = 32; break;
    case 'y': valcor = 33; break;
    case 'b': valcor = 34; break;
    case 'm': valcor = 35; break;
    case 'c': valcor = 36; break;
    default : valcor =  0;
  }
  printf("\033[1;%dm\n",valcor);
  printf("_/\t\t_/\t\t_/\n_/\t\t_/\n_/\t\t_/\t\t_/\n_/_/_/_/_/_/_/_/_/\t\t_/\n_/\t\t_/\t\t_/\n_/\t\t_/\t\t_/\n_/\t\t_/\t\t_/\n");
  printf("\033[0m\n");
}