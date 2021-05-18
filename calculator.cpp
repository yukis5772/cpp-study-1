#include <cstdio>
main()
{
    double a, b, ans;
    char op;

    printf("kagenjoujo(+,-,*,/)ga dekimasu.siteirei:2+5.shuryoji ha q\n");
    while (1)
    {
        printf("ready : ");
        if (scanf("%lf %c %lf", &a, &op, &b) != 3)
            break;
        switch (op)
        {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            if (b == 0.0)
            {
                printf("Error!(zero deno warizan ha dekimasen\n)");
                continue;
            }
            ans = a / b;
            break;
        default:
            printf("Error!(enzankigo no sitei ga ayamari desu\n)");
            continue;
        }
        printf("--> %g\n", ans);
    }
    printf(".... Power OFF\n");
}