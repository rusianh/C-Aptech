#include <stdio.h>

int main() {
   int a, b;

   a = 11;
   b = 99;

   // de nhap gia tri tu ban phim, ban co the su dung phan code
   // ben trong phan comment duoi day:
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

   if(a > b)
      printf("a lon hon b");
   else
      printf("a khong lon hon b");

   return 0;
}
