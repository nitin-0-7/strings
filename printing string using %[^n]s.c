/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   char str[70];
   scanf("%[^\n]s",str);  //only the first word will be considered without "%[^\n]s"
  // gets(str); //print etire string
   printf("your input Was : %s ",str);
    return 0;
}