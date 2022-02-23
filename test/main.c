#include "../libft.h"
#include <stdio.h>

void test_bool_ft(int (*ft)(int)) {
  // can test all functions with get bool response
  for(int i = 0; i <= 127; i++) {
    char* resp = (*ft)(i) == 1 ? "True" : "False";
    printf("%c -> %s\n", i, resp);
  }
  printf("--------------------------------------------\n");
}

// gcc -Werror -Wextra -Wall main.c ../ft_isalpha.c ../ft_isalnum.c ../ft_isdigit.c ../ft_isascii.c ../ft_isprint.c ../ft_strlen.c
int main() {
  //test_bool_ft(&ft_isalpha);
  //test_bool_ft(&ft_isalnum);
  //test_bool_ft(&ft_isdigit);
  //test_bool_ft(&ft_isascii); //to see if its work increment i > 128
  //test_bool_ft(&ft_isprint);
  //printf("%zu", ft_strlen("h"));

  

  return (0);
}
