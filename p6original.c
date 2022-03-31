#include<stdio.h>
#include<string.h>

void input_string(char *string, char *substring)
{
  printf("Enter the string \n");
  scanf("%s",string);
  printf("Enter the substring \n");
  scanf("%s",substring);
}

int str_reverse(char *string,char *substring)
{
  int r, j, i;
  for(i=0; string[i]!='\0'; i++)
  {
    for(j=0; substring[j]!='\0'; j++)
     {
       if(substring[j] == string[i])
       {
         i++;
         r = i - strlen(substring);
       }
     }
  }
  return r;
}

void output(char *string,char *substring,int index)
{
  printf("The index of SubString %s is %d\n",substring,index);
}

int main()
{
  int result;
  char s[20];
  char sub_s[20];
  input_string(s,sub_s);
  result = str_reverse(s,sub_s);
  output(s,sub_s,result);
  return 0;
}