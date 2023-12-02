#include <stdio.h>

// TODO
// double check
// string check
// devide by zero check
// null check

int sum(int a, int b);
int difference(int first_number, int second_number);
int multiple(int first_number, int second_number);
int divide(int first_number, int second_number);

int main() {
    int first_number, second_number;
    int quantity_succes_read_number = scanf("%d %d", &first_number, &second_number);
    char last_character = getchar();

    if (quantity_succes_read_number == 2 && last_character == '\n') {
        if (second_number != 0) {
            printf("%d %d %d %d\n", sum(first_number, second_number), difference(first_number, second_number),
                   multiple(first_number, second_number), divide(first_number, second_number));
        } else {
            printf("%d %d %d n/a\n", sum(first_number, second_number),
                   difference(first_number, second_number), multiple(first_number, second_number));
        }

    } else {
        printf("n/a\n");
    }
    return 0;
}

int sum(int first_number, int secodn_number) { return first_number + secodn_number; }

int difference(int first_number, int second_number) { return first_number - second_number; }

int multiple(int first_number, int second_number) { return first_number * second_number; }

int divide(int first_number, int second_number) { return first_number / second_number; }