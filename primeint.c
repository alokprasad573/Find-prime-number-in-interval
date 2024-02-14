#include <stdio.h>
int primeint(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    printf(" Enter intervals :\n");
    scanf("%i %i", &n1, &n2);
    printf("Prime numbers between %d & %d :\n", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        if (primeint(i))
        {
            printf("%d\t", i);
        }
    }

    return 0;
}