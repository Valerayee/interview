#include <stdio.h>
#include "locale.h"

int main() {
    setlocale(LC_ALL, "");
    const char name [] = "Valery";
    printf("������, %s!\n", name);
    return 0;
}