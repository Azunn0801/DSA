//
// Created by Azunn on 7/8/2025.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sortStr(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                swap(&str[i], &str[j]);
            }
        }
    }
}

void removeSpace(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    char tmp[1000];
    strcpy(tmp, str);

    removeSpace(tmp);
    if (strlen(tmp) == 0) {
        printf("\nChuoi khong hop le");
        exit(0);
    }

    removeSpace(str);
    sortStr(str);

    printf("%s\n", str);

    return 0;
}