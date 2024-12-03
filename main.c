#include <stdio.h>
#include "locale.h"

int main() {
    setlocale(LC_ALL, "");
    char name [20] = "";
    printf("Запишите имя (только в латинице): ");
    scanf("%s", name);
    printf("Привет, %s!\n", name);
    return 0;
}