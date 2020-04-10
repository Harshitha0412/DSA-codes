#include <stdio.h>  
#include <string.h>  
#define max 100  
int top,stack[max];  
  void push(char x)
{
      if(top == max-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop()
{
      printf("%c",stack[top--]);  
}  
  
  
int main()  
{  
   char str[]="Andhra Pradesh";  
   int l = strlen(str);  
   int i;  
  
   for(i=0;i<l;i++)  
        push(str[i]);  
  
   for(i=0;i<l;i++)  
      pop();  
}
