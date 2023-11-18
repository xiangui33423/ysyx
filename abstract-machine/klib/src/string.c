#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int i = 0;
  while( *s != '\0')
  {
    i++;
    s++;
  }
  return ++i;
}

char *strcpy(char *dst, const char *src) {
    char *ret = dst;
    while(*src != '\0')
    {
      *dst = *src;
      src++;
      dst++;
    }
    *dst = '\0';
    return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *ret = dst;
  int i = 0;
  for(;i < n;i++)
  {
    *dst++=*src++;
  }
  *dst = '\0';
  return ret;
}

char *strcat(char *dst, const char *src) {
  char *ret = dst;
  char i = strlen(dst);
  dst += i;
  while(*src != '\0')
    {
      *dst = *src;
      src++;
      dst++;
    }
  *dst = '\0';
  return ret;
}

int strcmp(const char *s1, const char *s2) {
  while((*s1 != '\0') || (*s2 != '\0'))
  {
    if(*s1 != *s2) return *s1-*s2;
    s1++;
    s2++;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int i;
  for(i = 0; (i < n) &&((*s1 != '\0') || (*s2 != '\0')) ; i++,*s1++,*s2++)
  {
    if(*s1 != *s2) return *s1-*s2;
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  int i;
  size_t *dst = s;
  for(i = 0;i < n ;i++,*dst++)
  {
    *dst = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {

    int i;
    if (dst < src)
    {
        for (i = 0; i < n; i++)
        {
            *((size_t*)dst + i) = *((size_t*)src + i);
        }
        return dst;
    }
    else if (dst > src)
    {
        for (i = n; i >0; i--)
        {
            *((size_t*)dst + i) = *((size_t*)src + i);
        }
        return dst;
    }
    else
    {
        return dst;
    }
}

void *memcpy(void *out, const void *in, size_t n) {
  void *ret = out;
  while(n--)
  {
    *(size_t*) out = *(size_t*)in;
    out = (size_t*)out + 1;
    in = (size_t*)in + 1;
  }
  return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int i;
  for(i = 0;(*(size_t*)s1 != 0 || *(size_t*)s2 !=0) && i < n; i++,s1 = (size_t*)s1 + 1,s2 = (size_t*)s2 + 1)
  {
    if(*(size_t*)s1 != *(size_t*)s2) return (*(size_t*)s1 - *(size_t*)s2);
  }
  return 0;
}

#endif
