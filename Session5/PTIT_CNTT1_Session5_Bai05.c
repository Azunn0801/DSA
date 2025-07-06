//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char str[], int l, int r) {

    if (l >= r) {
        return true;
    }
    if (str[l] != str[r]) {
        return false;
    }

    return check(str, l + 1, r - 1);
}

int main() {
    char str[100];
    scanf("%s", str);
    int l = 0;
    int r = strlen(str) - 1;
    if (check(str, l, r)) {
        printf("Palindrome valid");
    } else {
        printf("Palindrome invalid");
    }

    return 0;
}