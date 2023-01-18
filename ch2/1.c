#include<stdio.h>
#include<limits.h>

int main() {
  printf("char min %d max %d\n", CHAR_MIN, CHAR_MAX);
  printf("unsigned char min %u max %u\n", 0, UCHAR_MAX);

  printf("short min %d max %d\n", SHRT_MIN , SHRT_MAX);
  printf("unsigned short min %u max %u\n", 0, USHRT_MAX);

  printf("int min %d max %d\n", INT_MIN , INT_MAX);
  printf("unsigned int min %u max %u\n", 0, UINT_MAX);

  printf("long min %ld max %ld\n", LONG_MIN , LONG_MAX);
  printf("unsigned long min %u max %lu\n", 0, ULONG_MAX);
  return 0;
}