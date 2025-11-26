#include <stdio.h>

int main()
{
    long long N, P, Q;
    char C;

    scanf("%lld",&N);
    scanf("%lld%c %lld",&P,&C,&Q);

    long long result;

    if (C=='+')
    {
        result = P + Q;
    } else
    {
        result = P * Q;
    }

    if (result > N)
        printf("OVERFLOW\n");
    else
        printf("OK\n");

    return 0;
}
