#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

static void reverse(char *s,int len)
{
  char *end = s + len - 1;
  char tmp;
  while(s < end)
  {
    tmp = *s;
    *s = *end;
    *end = tmp;
    s++;end--;
  }
}

int itoa(int n,char *s, int base)
{
    assert(base<=16);
    int i = 0;
    int sign = n<0 ? -1 : 1;
    int bit;
    n = n * sign;
    while(n!=0)
    {
        bit = n % base;
        n /= base;
        if(bit > 9) *s = bit - 10 + 'A';
        else *s = bit + '0';
        s++;
        i++;
    }
    if(sign == -1)
    {
        *s++ = '-';
        i++;
    }
    reverse(s-i,i);
    *s = '\0';
    return i;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
