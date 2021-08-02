
#include<stdio.h>
#include<string.h>
void q0(char str[],int i);
void q1(char str[],int i);
void q2(char str[],int i);
void q3(char str[],int i);

void q0(char str[],int i)
{
  if (i==strlen(str))
  {
   printf("rejected or halted at state q0\n");
   return;
  }
  if(str[i]=='a')
  {
   printf("(q0,a)-->q1\n");
   q1(str,i+1);
  }
  else if(str[i]=='b')
  {
   printf("(q0,b)-->q0\n");
   q0(str,i+1);
  }
  else if(str[i]=='c')
  {
   printf("(q0,c)-->q0\n");
   q0(str,i+1);
  }
}
void q1(char str[],int i)
{
  if (i==strlen(str))
  {
   printf("rejected or halted at state q1\n");
   return;
  }
  if (str[i]=='a')
  {
   printf("(q1,a)-->q1\n");
   q1(str,i+1);
  }
  else if(str[i]=='b')
  {
   printf("(q1,b)-->q2\n");
   q2(str,i+1);
  }
  else if(str[i]=='c')
  {
   printf("(q1,c)-->q0\n");
   q0(str,i+1);
  }
}
void q2(char str[],int i)
{
  if (i==strlen(str))
  {
   printf("rejected or halted at state q2\n");
   return;
  }
  if (str[i]=='a')
  {
   printf("(q2,a)-->q1\n");
   q1(str,i+1);
  }
  else if(str[i]=='b')
  {
   printf("(q2,b)-->q0\n");
   q0(str,i+1);
  }
  else if(str[i]=='c')
  {
   printf("(q2,c)-->q3\n");
   q3(str,i+1);
  }
}
void q3(char str[],int i)
{
  if (i==strlen(str))
  {
   printf("string is accepted\n");
   return;
  }
  if (str[i]=='a')
  {
   printf("(q3,a)-->q1\n");
   q1(str,i+1);
  }
  else if(str[i]=='b')
  {
   printf("(q3,b)-->q0\n");
   q0(str,i+1);
  }
  else if(str[i]=='c')
  {
   printf("(q3,c)-->q0\n");
   q0(str,i+1);
  }
}
int main()
{
 char Str[10];
 int i=0;
 printf("enter the string:");
 scanf("%s",&Str);
 q0(Str,i);
 return 0;
}


