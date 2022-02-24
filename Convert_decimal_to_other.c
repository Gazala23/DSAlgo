#include <stdio.h>
int main()
{
    int a;
    printf("print any number: ");
    scanf("%d", &a);
    printf("decimal %d=%d\n", a, a);
    printf("decimal %d=Octal %o\n", a, a);
    printf("decimal %d=hexadecimal %x\n",a, a);
    printf("decimal %d=Hexadecimal %X\n",a, a);
    return 0;
}