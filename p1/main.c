#include <stdio.h>

int main(void) {
    char Eng;
    char arr[10]={};
    char *p = nullptr;
    char *q = nullptr;
    char result;
    int many = 0;
    int count = 0;
    for (p = arr; p < arr + 10; p++){
        scanf(" %c", &Eng);
        *p = Eng;
    }
    result = arr[0];
    for (p = arr; p < arr + 10; p++) {
        count = 0;
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }

        if (count > many) {
            many = count;
            result = *p;
        }
    }

    printf("%c %d", result, many);

    return 0;
}
