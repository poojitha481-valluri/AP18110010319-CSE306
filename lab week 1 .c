1)
#include<stdio.h>
void main(){
int state=0,i=0;
char current,input[20];
printf("Enter input string \t :");
scanf("%s",input);
while((current=input[i++])!='\0'){
switch(state)
{
case 0: if(current=='a')
state=1;
else if(current=='b')
state=2;
else
{
printf("Invalid token");
exit(0);
}
break;
case 1: if(current=='a')
state=0;
else if(current=='b')
state=3;
else
{
printf("Invalid token");
exit(0);
}
break;
case 2: if(current=='a')
state=3;
else if(current=='b')
state=0;
else
{
printf("Invalid token");
exit(0);
}
break;
case 3: if(current=='a')
state=2;
else if(current=='b')
state=1;
else
{
printf("Invalid token");

exit(0);
}
break;
}
}
if(state==0)
printf("\n\nString accepted\n\n");
else
printf("\n\nString not accepted\n\n");
}
2)
#include<stdio.h>
void main()
{
  int state=0,i=0;
  char curr,input[20];
  printf("Enter str:\n");
  scanf("%s",input);
  while((curr=input[i++])!='\0')
  {
    switch(state)
    {
      case 0:
      if(curr=='a')
      state=1;
      else if(curr=='b')
      state=3;
      else
      {
      printf('Invalid\n');
      exit(0);
      }
      break;
      case 1:
      if(curr=='a')
      state=2;
      else if(curr=='b')
      state=3;
      else
      {
       printf("Invalid\n");
       exit(0);
      }
      break;
      case 2:
      if(curr=='a')
      state=2;
      else if(curr=='b')
      state=3;
      else
      {
      printf("Invalid\n");
      exit(0);
      }
      break;
      case 3:
      if(curr=='a')
      state=1;
      else if(curr=='b')
      state=4;
      else
      {
      printf("Invalid\n");
      exit(0);
      }
      break;
      case 4:
      if(curr=='a')
      state=1;
      else if(curr=='b')
      state=4;
      else
      {
      printf("Invalid\n");
      exit(0);
      }
      break;
    }
  }
  if(state==2||state==4)
  {
   printf("\nString accepted\n");
  }
  else
  {
   printf("\nString not accepted\n");
  }
}
