#include <stdio.h>
#include <string.h>

int isAnagram(char str[], char str2[]) {
    int hash[256] = {0};

    int n1 = strlen(str);
    int n2 = strlen(str2);

    if (n1 != n2)
        return 0;

    for (int i = 0; i < n1; i++) {
        hash[(unsigned char)str[i]]++;
        hash[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (hash[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str[100], str2[100];

    scanf("%s", str);
    scanf("%s", str2);

    printf("%d", isAnagram(str, str2));

    return 0;
}