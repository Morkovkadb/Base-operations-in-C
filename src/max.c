#include <stdio.h>

int max(int first_number, int second_number);

int main() {
    int first_number, second_number;
    int quantity_succes_read_number = scanf("%d %d", &first_number, &second_number);
    char last_character = getchar();

    if (quantity_succes_read_number == 2 && last_character == '\n') {
        printf("%d\n", max(first_number, second_number));
    } else {
        printf("n/a\n");
    }
    return 0;
}

int max(int first_number, int second_number) {
    return (first_number > second_number) ? first_number : second_number;
}