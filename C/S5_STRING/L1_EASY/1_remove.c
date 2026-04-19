#include <stdio.h>
#include <string.h>

void printWithoutEnds(char str[]) {
    int n = strlen(str);

    for (int i = 1; i < n - 1; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];

    scanf("%s", str);  // read full string

    printWithoutEnds(str);

    return 0;
}