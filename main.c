#include <stdio.h>
#include <stdlib.h>

int main() {

    char username[];
    char password[];
    char los[];
    char si[] = "sign in";
    char li[] = "login";

    printf("Type login or sign in: \n");
    scanf("%s", los);

    if (los == si) {
        printf("Enter a Username: ");
