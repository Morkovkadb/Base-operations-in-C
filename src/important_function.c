#include <math.h>
#include <stdio.h>

int main() {
    double x;
    double y;
    int quantity_succes_read_number = scanf("%lf", &x);
    char last_char = getchar();

    if (quantity_succes_read_number == 1 && last_char == '\n') {
        y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1.0 / 3.0) - 1e3) * x + 3) / (x * x / 2) -
            x * pow((10 + x), (2.0 / x)) - 1.01;
        double rounded_y = round(y * 10.0) / 10.0;
        printf("%.1lf\n", rounded_y);
    } else {
        printf("n/a\n");
    }
    return 0;
}