#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}



int sprintf(char *out, const char *fmt, ...) {
  va_list pargs;
  char *start = out;
  va_start(pargs,fmt);
  while(*fmt != '\0')
  {
    if(*fmt != '%')//空格，固定字符串
    {
      *out = *fmt;
      ++out;
      fmt++;
    }
    else
    {
      switch(*(++fmt))
      {
        case '%': *out = *fmt; 
                  out++;
                  fmt++;
                  break;
        case 'd': out+=itoa(va_arg(pargs,int),out,10);
                  fmt++;
                  break;
        case 's': char *s = va_arg(pargs,char*);
                  strcpy(out,s);
                  out+= strlen(s);
                  fmt++;
                  break;
      }
      
    }
  }
  *out = '\0';
  va_end(pargs);

  return out - start;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
