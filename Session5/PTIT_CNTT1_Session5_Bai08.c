//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convert(char *str, int len) {
    if (len == 0) {
        return 0;
    }
    return convert(str, len - 1) * 10 + (str[len - 1] - 48);
}

int main() {
    char tmp[100];
    scanf("%s", tmp);
    int len = strlen(tmp);
    char *str = malloc((len + 1) * sizeof(char));
    strcpy(str, tmp);
    printf("%d", convert(str, len));

    return 0;
}
