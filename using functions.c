/* Batın Güven 202211033
                
  (I am sorry for lacking of comment block in previous homeworks.)
*/

#include <stdio.h>

int number_to_lower(int n)
{
   char a;
 
   a=(char)((int)'a' + n -1);
  
    return a;
}
int number_to_upper(int n)
{
   char a;
  
   a=(char)((int)'A' + n -1);
   
   return a;
}
char lower_to_upper(char n)
{
   int a;
   
   a = (int)(n);
   
    a-=32;

  return (char)(a);
}
char upper_to_lower(char n)
{
   int a;
  
   a = (int)(n);
  
    a+=32;
  
  return (char)(a);
}
int main() {
  int n=5;
  char ch='e';

  printf("%d'th number of alphabet as lower case : %c\n",n,number_to_lower(5));

  printf("%d'th number of alphabet as upper case : %c\n",n,number_to_upper(5));

  printf("Upper case of %c : %c\n",ch,lower_to_upper('e'));
  
printf("Lower case of %c : %c\n",ch,upper_to_lower('E'));
  return 0;
}