#include <stdio.h>
#include "D:\C\.vscode\EX1\Headers\convert.h"

void dec_to_bin(int n)
{
    int c=0;
    int b[10];
    for (int i=0; n>0; i++)
    {
        b[i]=n%2;
        n=n/2;
        c++;
    };
    printf("Decimal to binary: 0b");
    for(int i=c-1; i>=0;i--) printf("%d", b[i]);
};

void dec_to_hex(int n)
{
    int c=0;
    int s=0; 
    char b[10];
    for (int i=0;n>0;i++)
    {
        s=n%16;
        if(n<10)  b[i]=48+s;
        else b[i]=55+s;
        n=n/16;
        c++;
    }
    printf("Decimal to hex: 0x");
    for(int i=c-1; i>=0;i--) printf("%c", b[i]);
}