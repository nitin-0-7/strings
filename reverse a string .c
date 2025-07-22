/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char str[30];
  puts("Enter a string");
  scanf("%[^\n]s",str);
  //size
  int size=0;
  int k=0;
  while(str[k]!='\0'){
     size++;
      k++;
  }
  for(int i=0,j=size-1;i<=j;i++,j--){
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
  }
  puts("The Reverse sting is : ");
  puts(str);
  
    return 0;
}