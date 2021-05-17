#include <iostream>
#include <cstdio>
using namespace std;
main()
{
    double a, b, ans;
    char op;

    cout << "kagenjoujo(+,-,*,/)ga dekimasu.siteirei:2+5.shuryoji ha q\n"
         << endl;
    while (1)
    {
        cout << "ready : " << endl;
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
                cout << "Error!(zero deno warizan ha dekimasen\n)" << endl;
                continue;
            }
            ans = a / b;
            break;
        default:
            cout << "Error!(enzankigo no sitei ga ayamari desu\n)" << endl;
            continue;
        }
        cout << "--> %g\n"
             << ans << endl;
    }
    cout << ".... Power OFF\n"
         << endl;
}