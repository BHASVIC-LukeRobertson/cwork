#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    ch = '5.5';
    printf("\nIf %c is  digit character or not? %d", ch, isdigit(ch));
    ch='+';
    printf("\nIf %c is  digit character or not? %d", ch, isdigit(ch));
    ch = 'f';
    printf("\nIf %c is  digit character or not? %d", ch, isdigit(ch));
    return 0;
}