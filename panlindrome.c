#include <stdio.h>


int stringLength(char* str)
{
  int count = 0;
  while (*(str+count)!='\0')
  {
    count++;
  }
  return count;
}

int isPalindrome(char* str)
{
  int length = stringLength(str);
  int i = 0;
  while(i < length)
  {
    printf("%c\n",*(str+length-1-i));
    printf("%c\n",*(str+i));
    if (*(str+i) != *(str+length-1-i))
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int main()
{
  printf("%d",isPalindrome("lol"));
 
}
