#include <stdio.h>
#include <string.h>
#include "student.h"

struct Student {
	char fname [50];
	char lname [50];
	int age ;
	int sid ;
};

char printStudent(struct Student* student1)
{
        printf("The student's name is %s %s\n", student1->fname, student1->lname);
        printf("The student is %d years old\n", student1->age);
        printf("The student's id is %d\n", student1->sid);
}

int main()
{
	struct Student studentArr[5];
	char input[50];

	printf("What is your first name?\n");
	fgets(input, 50, stdin);
	sscanf(input, "%s", &studentArr[0].fname);

	printf("What is your last name?\n");
	fgets(input, 50, stdin);
	sscanf(input, "%s", &studentArr[0].lname);

	printf("What is your age?\n");
	fgets(input, 50, stdin);
	sscanf(input, "%d", &(studentArr[0].age));

	printf("What is your student id?\n");
	fgets(input, 50, stdin);
	sscanf(input, "%d", &(studentArr[0].sid));

	student(&studentArr[0]);
}

