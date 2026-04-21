#include <stdio.h>

void check_even(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main() {
    int num;
    scanf("%d", &num);

    check_even(num);

    return 0;
}
