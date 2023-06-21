#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *pa, const void *pb) {
        const int *p1 = pa;
        const int *p2 = pb;
        return *p1 - *p2; // sort in descending order: *p2 -*p1;
}

int main(void) {
        char names[][20] = {"Tim", "Steve", "Clayton", "Joosung", "Mike", "Jik", "Josh", "Kelby"};
        int name_elems = sizeof(names) / sizeof(names[0]);

        qsort(names, name_elems, sizeof(names[0]), compare_int);

        int nums[] = {2, 45, 23, 12, 76, 26};
        int num_elems = sizeof(nums) / sizeof(int);

        qsort(nums, num_elems, sizeof(int), compare_int);
        printf("Sorted Nums:\n");
        for (int i = 0; i < num_elems; ++i) {
                printf("%d\t", nums[i]);
        }
        printf("\n");
}