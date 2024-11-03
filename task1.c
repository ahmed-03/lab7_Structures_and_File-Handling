#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

int main() {
	int i,all;
	char name[50];

	printf("Enter the number of students: ");
	scanf("%d", &all);
	Student studentAll[all];
    
	for (i = 0; i < all; i++) {
	printf("Enter ID for student %d: ", i + 1);
	scanf("%d", &studentAll[i].id);

	printf("Enter name for student %d: ", i + 1);
	fgets(name,50,stdin);

	printf("Enter GPA for student %d: ", i + 1);
	scanf("%.2f", &studentAll[i].gpa);
	}
	//studentAll[i].name = name;

	printf("\nStudent Records:\n");
	for (i = 0; i < all; i++) {
	printf("ID: %d, Name: %s, GPA: %.2f \n", studentAll[i].id, studentAll[i].name, studentAll[i].gpa);
	
	}
	return 0;
}

