#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;

    int K = log10(temp) + 1;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, K);
        temp /= 10;
    }

    return (sum == N);
}

int main() {
    int N;
    printf("Enter number: ");
    scanf("%d",&N);

    if (isArmstrong(N)) {
        printf("Yes,it is a Armstrong Number.\n");
    }
    else {
        printf("Not a Armstrong Number.\n");
    }

    return 0;
}
