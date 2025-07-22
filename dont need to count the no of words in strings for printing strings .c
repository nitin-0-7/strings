/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   char arr[]="BholeBaba is my game changer of my life \0";
   int i=0;
   while(arr[i]!='\0'){
       printf("%c",arr[i]);
   
    i++;
   }
       
    return 0;
}