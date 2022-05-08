#include <stdio.h>
#include "D:\C\.vscode\EX1\Headers\m_string.h"




int compare(int a[], int length_a, int b[], int length_b)
{
    for (int i=0;i<length_a;i++)
    {
        if(a[i]!=b[i]) return 0;
        else return 1;
    }
};

void insert(int a[], int n, int value, int p)
{   
    int i;
    for(i = n-1; i>= p-1; i-- )
    {
        a[i+1] = a[i];
    };
    a[p-1] = value;
    printf("Array after insert: ");
    for(int j=0; j<n+1; j++)
    {
        printf("%d ", a[j]);
    };
};