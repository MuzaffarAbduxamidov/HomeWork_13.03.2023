#include<stdio.h>

int main()
{
   int a;
   printf("Son kiriting: ");
   scanf("%d", &a);
   int Yuzlar=a/100;
   int Onlar=a/10%10;
   int Birlar=a%10;
   printf("Yuzlar->%d\n", Yuzlar);
   printf("Onlar->%d\n", Onlar);
   printf("Birlar->%d", Birlar); 
}
