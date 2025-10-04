#include <stdio.h> 
 #define AGE 37
int main(void) { 
unsigned char j = 255; 
  j = j + 10; 
printf("%u", j); /* 9 */ 

printf("char size: %lu bytes\n", sizeof(char)); 
  printf("int size: %lu bytes\n", sizeof(int)); 
  printf("short size: %lu bytes\n", sizeof(short)); 
  printf("long size: %lu bytes\n", sizeof(long)); 
  printf("float size: %lu bytes\n", sizeof(float)); 
  printf("double size: %lu bytes\n", 
    sizeof(double)); 
  printf("long double size: %lu bytes\n", 
    sizeof(long double)); 
    printf("%d\n", AGE);
}

