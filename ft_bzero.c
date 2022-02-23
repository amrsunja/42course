#include "libft.h"


void  ft_bzero(void *s, size_t n) {
  if (!s)
    return ;
  for (size_t i = 0; i < n; i++) {
    *(char*)(s+i) = 0;
  }
}
