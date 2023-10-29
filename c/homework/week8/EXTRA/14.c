#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a;

 scanf("%c",&a);

 if (a=='A')
 {
    printf("85~100");
 }else if (a=='B')
 {
    printf("70~84");
 }else if (a=='C')
 {
    printf("60~69");
 }else if (a=='D')
 {
    printf("<60");

 }else printf("Error");
 
 
 
 
 return 0;
}