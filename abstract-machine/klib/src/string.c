#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  if(s==NULL) return 0;
  int i = 0;
  while( *s != '\0')
  {
    i++;
    s++;
  }
  return i;
}

char *strcpy(char *dst, const char *src) {
  if(src == NULL || dst==NULL) return dst;
    char *ret = dst;
    do
    {
      *dst = *src;
      src++;
      dst++;
    }while(*src != '\0');
    // *dst = '\0';
    return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  if(src == NULL || dst==NULL) return dst;
  char *ans = dst;
  while (*src != '\0' && n != 0) {
    *dst = *src;
    ++dst;
    ++src;
    --n;
  }
  // 将额外的空字符写入dest，直到写入了n个字符的总数。
  while (n != 0) {
    *dst = '\0';
    ++dst;
    --n;
  }
  return ans;
}

char *strcat(char *dst, const char *src) {
  if(src == NULL || dst==NULL) return dst;
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
  if(s==NULL) return s;
  int i;
  unsigned char *dst = s;
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
            *((unsigned char*)dst + i) = *((unsigned char*)src + i);
        }
        return dst;
    }
    else if (dst > src)
    {
        for (i = n; i >0; i--)
        {
            *((unsigned char*)dst + i) = *((unsigned char*)src + i);
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
    *(unsigned char*) out = *(unsigned char*)in;
    out = (unsigned char*)out + 1;
    in = (unsigned char*)in + 1;
  }
  return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int i;
  for(i = 0;(*(unsigned char*)s1 != 0 || *(unsigned char*)s2 !=0) && i < n; i++,s1 = (unsigned char*)s1 + 1,s2 = (unsigned char*)s2 + 1)
  {
    if(*(unsigned char*)s1 != *(unsigned char*)s2) return (*(unsigned char*)s1 - *(unsigned char*)s2);
  }
  return 0;
}

#endif
