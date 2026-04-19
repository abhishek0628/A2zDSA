#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse(str, start + 1, end - 1);
}

int check(char str[], char target[]) {
    int n = strlen(str);

    for (int k = 1; k <= n; k++) {

        // create a working copy (important!)
        char temp[100];
        strcpy(temp, str);

        // rotate using 3 reversals
        reverse(temp, 0, n - 1);
        reverse(temp, 0, n - k - 1);
        reverse(temp, n - k, n - 1);

        if (strcmp(temp, target) == 0)
            return 1;
    }

    return 0;
}

int main() {
    char str[100], target[100];

    scanf("%s", str);
    scanf("%s", target);

    printf("%d", check(str, target));

    return 0;
}