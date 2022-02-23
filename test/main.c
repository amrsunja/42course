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

void test_memmove() {
  #include <string.h>
  #include <stdbool.h>
  #define DST "hello this is my name: Amir"
  #define SRC "goodby this is my name: Amir"

  char dest1[] = DST;
  const char src1[] = SRC;
  printf("Before testing:\n dest = %s,\n src = %s\n", dest1, src1);
  ft_memmove(dest1, src1, 7);
  printf("After testing:\n dest = %s,\n src = %s\n", dest1, src1);

  printf("\n");
  char dest2[] = DST;
  const char src2[] = SRC;
  printf("Before testing:\n dest = %s,\n src = %s\n", dest2, src2);
  memmove(dest2, src2, 7);
  printf("After testing:\n dest = %s,\n src = %s\n", dest2, src2);
  bool isValid = (*dest1 == *dest2);
  printf("%d", isValid);

}

// gcc -Werror -Wextra -Wall main.c ../ft_isalpha.c ../ft_isalnum.c ../ft_isdigit.c ../ft_isascii.c ../ft_isprint.c ../ft_strlen.c
int main() {
  //test_bool_ft(&ft_isalpha);
  //test_bool_ft(&ft_isalnum);
  //test_bool_ft(&ft_isdigit);
  //test_bool_ft(&ft_isascii); //to see if its work increment i > 128
  //test_bool_ft(&ft_isprint);
  //printf("%zu", ft_strlen("h"));
  test_memmove();


  

  return (0);
}