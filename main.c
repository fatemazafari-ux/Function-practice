#include <stdio.h>

int tempAdvisor(int temp, int fan);

int main() {
    int temp, fan, result;

    scanf("%d %d", &temp, &fan);

    result = tempAdvisor(temp, fan);

    if (result == 1)
        printf("Turn ON the fan");
    else if (result == 2)
        printf("Temperature is normal");
    else if (result == 3)
        printf("Turn ON fan immediately");
    else if (result == 4)
        printf("Fan already running");
    else
        printf("No action needed");

    return 0;
}
