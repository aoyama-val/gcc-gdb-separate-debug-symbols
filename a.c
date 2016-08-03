#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hoge(int a, int b)
{
  int i;
  int ret = 0;
  for (i = 0; i < b; i++) {
    ret += a;
  }
  return ret;
}

int main(int argc, char *argv[])
{
  int a = 3;
  int b = 2;
  int ret;
  
  printf("start\n");
  ret = hoge(a, b);
  printf("ret = %d\n", ret);

  return 0;
}
