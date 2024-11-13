#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length, count;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    srand(time(NULL));

    printf("桁数: ");
    if (scanf("%d", &length) != 1 || length <= 0) { printf("有効な整数を入力してください\n"); return 1; }

    printf("生成数: ");
    if (scanf("%d", &count) != 1 || count <= 0) { printf("有効な整数を入力してください\n"); return 1; }

    for (int i = 1; i <= count; i++) { 
        printf("%d: ", i);
        for (int j = 0; j < length; j++) {
            printf("%c", charset[rand() % (sizeof(charset) - 1)]);
        }
        printf("\n");
    }
    return 0;
}
