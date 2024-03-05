#include <stdio.h>
#include "mymath.h"

int main()
{
        int x, y;
        char op;
        printf("Enter your 1 num: ");
        scanf("%d", &x);
        printf("Enter your 2 num: ");
        scanf("%d", &y);
        printf("Choose your operation +, -, *, /, %%: ");
        getchar();
        op = getchar();

        switch (op)
        {
        case '+':
                printf("%d\n", add(x, y));
                break;
        case '-':
                printf("%d\n", sub(x, y));
                break;
        case '*':
                printf("%d\n", mul(x, y));
                break;
        case '/':
                printf("%d\n", div(x, y));
                break;
        case '%':
                printf("%d\n", mod(x, y));
                break;
        }
        return 0;
}