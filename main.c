#include <stdio.h>
#include "locale.h"

int main() {
    setlocale(LC_ALL, "");
    char name [20] = "";
    printf("�������� ��� (������ � ��������): ");
    scanf("%s", name);
    printf("������, %s!\n", name);
    return 0;
}