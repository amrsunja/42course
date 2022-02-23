#include "libft.h"


void  *ft_memcpy(void *dst, const void *src, size_t n) {
  if (!dst)
    return (NULL);
  for (size_t i = 0; i < n; i++) {
    *(char*)(dst + i) = *(char*)(src + i);
  }

  return (dst);
}
