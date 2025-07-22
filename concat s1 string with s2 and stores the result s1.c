/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char s1[20]="Nitin chauhan";
    char s2[20]=" Rajput";
    strcat(s1,s2);
    printf("%s",s1);

    return 0;
}