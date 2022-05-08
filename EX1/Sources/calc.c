#include <stdio.h>
#include "D:\C\.vscode\EX1\Headers\calc.h"

int sum(int a[], int n)
{
    int s = 0;
    for(int i=0; i<n; i++)
    {
        s = s+ a[i];
    };
    return s;
};

int max(int a[], int n)
{   
    int i;
    int m= a[i];

    for (i=0; i<n; i++)
    {
        if(a[i]>m) m = a[i];
    };
    return m;

};

int min(int a[], int n)
{   
    int i;
    int m= a[i];

    for (i=0; i<n; i++)
    {
        if(a[i]<m) m = a[i];
    };
    return m;

};

int search(int a[], int n, int v)
{
    int b[20];
    int s=0;
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==v) 
        {
            b[s]=i;
            s++;
        }
    }
    printf("Position of %d in array: ", v);
    for(j=0; j<s; j++)
    {
        printf("%d", b[j]);
    }
}

