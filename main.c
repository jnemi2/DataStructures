#include <stdio.h>
#include "list.h"

int main() {
    List (int) list_of_ints = list_new(int);

    list_push(list_of_ints, 100);
    list_push(list_of_ints, 200);
    list_push(list_of_ints, 300);

    printf("%d\n%d\n%d\n", list_of_ints->buffer[0], list_of_ints->buffer[1], list_of_ints->buffer[2]);

    list_delete(list_of_ints);

    printf("%d\n%d\n%d\n", list_of_ints->buffer[0], list_of_ints->buffer[1], list_of_ints->buffer[2]);

    printf("Hello, World!\n");
    return 0;
}
