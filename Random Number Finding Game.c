#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int randomNumber,n;
  randomNumber=rand()%100;
  do
    {printf("Lütfen bir n değeri giriniz:");
   scanf("%d",&n);

     if(n<randomNumber)
  {
    printf("girdiğiniz sayı random sayıdan küçük\n\n");

  }
  else if(n>randomNumber)
  {
    printf("girdiğiniz sayı random sayıdan büyük\n\n");
     }
  else if(n==randomNumber)
  {
    printf("tebrikler buldunuz!");
  }
       }  while(n!=randomNumber );
    return 0;
      }
