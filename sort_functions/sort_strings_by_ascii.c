#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *pa, const void *pb) {
       
        return strcmp(pa, pb); // sort in descending order: strcmp(pb, pa);
}

int main(void) {
        char names[][20] = {"Tim", "Steve", "Clayton", "Joosung", "Mike", "Jik", "Josh", "Kelby"};
        int name_elems = sizeof(names) / sizeof(names[0]);

        qsort(names, name_elems, sizeof(names[0]), compare_strings);

        for (int i = 0; i < name_elems; ++i) {
                printf("%s\n", names[i]);
        }

        printf("\n");
        
}