#include <stdio.h>
#include "D:\C\.vscode\EX1\Headers\calc.h"
#include "D:\C\.vscode\EX1\Headers\convert.h"
#include "D:\C\.vscode\EX1\Headers\m_string.h"



int main()
{
    int c;
    int a[20]={3, 5, 1, 3, 9, 6, 2, 8, 9, 5};
    int b[20]={9, 4, 3, 5, 7, 2, 4, 6, 3, 8};
    //tinh tong mang a
    printf("sum of array: %d\n", sum(a,10));
    //tim max mang a
    printf("max of array: %d\n", max(a,10));
    //tim min mang b
    printf("min of array: %d\n", min(b,10));
    // tim vi tri cua so 3 trong mang
    search(a, 10, 3);
    printf("\n");
    //chuyen so 10 sang nhi phan
    dec_to_bin(10);
    printf("\n");
    //chuyen so 30 sang hex
    dec_to_hex(30);
    printf("\n");
    //so sanh 2 mang a va b
    c=compare(a,10,b,10);
    printf("are two array equal? ");
    if(c) printf("equal"); 
    else printf("not equal");
    printf("\n");
    //chen them so 5 vao vi tri so 3 trong mang b
    insert(b, 10, 5, 3);    


    return 0;
}
