#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	char name[20];
	int grades;
} student_t;

int compare_marks(const void *pa, const void *pb)
{

	const student_t *p1 = pa;
	const student_t *p2 = pb;

	return p2->grades - p1->grades;
}

int main(void)
{
	student_t records[] = { {1, "Tim", 80},
	{2, "Steve", 87},
	{3, "Clayton", 90},
	{4, "Joosung", 78},
	{5, "Mike", 95},
	{6, "Jik", 89},
	{7, "Josh", 97},
	{8, "Kelby", 100}
	};

	int n = sizeof(records) / sizeof(student_t);

	qsort(records, n, sizeof(student_t), compare_marks);

	for (int i = 0; i < n; ++i) {

		printf("id: %d\tName: %s\tGrade: %d\n", records[i].id,
		       records[i].name, records[i].grades);
	}

	printf("\n");

}