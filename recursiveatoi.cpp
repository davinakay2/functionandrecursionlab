#include <stdio.h>
int main()
{
    char n[10];
    scanf("%s", n);
    int number = 0;
    int i = 0;
    while (n[i] && (n[i] >= '0' && n[i] <= '9'))
    {
        number = number * 10 + (n[i] - '0');
        i++;
    }
    printf("%d\n", number);
    return 0;
}