#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
  printf("enter the string \n");
scanf("%[^\n]s",a);
    
}
int count_words(char *string)
{ 
 
  char* word;
  int count =0;
 word=strtok(string, " ,\".-");

  while( word != 0)
  {
      printf("%s ", word);
      word=strtok(0, " ,\".-");
      count++;

  }
return count;
}
void output( int a)
{
  printf(" has  %d words in the string \n",  a); 

}
int main()
{
 char string[1000];
 int a;
 input_string(string);
 a = count_words(string);
 output(a);
 return 0; 
     
}