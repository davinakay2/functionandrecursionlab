#include <stdio.h>
int main()
{
    int n;
    long long int factorial = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial Number of %d is: %lld\n", n, factorial);
    return 0;
}