#include "libft.h"


void  *ft_memset(void *b, int c, size_t len) {
  if (!b)
    return (NULL);
  for (size_t i = 0; i < len; i++) {
    *(unsigned char*)(b + 1) = (unsigned char) c;
  }

  return (b);
}
