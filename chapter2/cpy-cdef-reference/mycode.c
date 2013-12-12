#include <stdio.h>
#include "mycode.h"

void printStruct (/*const*/ struct mystruct * s)
{
  printf (".string = %s\n", s->string);
  printf (".integer = %i\n", s->integer);
  printf (".string_array = \n");

  size_t i;
  for (i = 0; i < s->integer; ++i) 
    printf ("\t[%zu] = [%s]\n", i, s->string_array [i]);
}
