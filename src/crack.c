#include <stdio.h>

int main() {
    double x, y;
    int quantity_succes_number_read = scanf("%lf %lf", &x, &y);
    char last_char = getchar();
    if (quantity_succes_number_read == 2 && last_char == '\n') {
        if (x * x + y * y < 25.0) {
            printf("GOTCHA\n");
        } else {
            printf("MISS\n");
        }
    } else {
        printf("n/a\n");
    }
    return 0;
}