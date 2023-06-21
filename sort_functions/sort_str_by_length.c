#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *pa, const void *pb) {
        return strlen(pa) - strlen(pb);
}

int main(void) {
        char strings[][20] = {"banana bread", "kiwi", "Mighty Thor", "x", "apple", "car"};
        int num_strings = sizeof(strings) / sizeof(strings[0]);

        qsort(strings, num_strings, sizeof(strings[0]), compare_strings);

        for (int i = 0; i < num_strings; ++i) {
                printf("%s\n", strings[i]);
        }

        printf("\n");
}