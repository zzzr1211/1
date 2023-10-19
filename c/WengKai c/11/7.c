#include <stdio.h>

typedef union 
{
    int i;
    char ch[sizeof(int)];/* data */
} CHI;

int main ()
{
    CHI chi;
    int i;
    chi.i =1234;
    for (int i = 0; i < sizeof(int); i++)
    {
        printf("%02hhX",chi.ch[i]);/* code */
    }
    printf("\n");

    return 0;
}
