#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 15;

    // 1. Simple if
    if (a < b)
        printf("a is less than b\n");

    // 2. if - else
    if (a > b)
        printf("a is greater than b\n");
    else
        printf("b is greater than a\n");

    // 3. if - else if - else
    if (a > b && a > c)
        printf("a is greatest\n");
    else if (b > c)
        printf("b is greatest\n");
    else
        printf("c is greatest\n");

    // 4. Nested if
    if (a < b) {
        if (a < c)
            printf("a is smallest\n");
    }

    return 0;
}
