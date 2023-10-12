
#include <stdio.h>
struct Student {
    char name[50];
    int id;
    int age;
};

int main() {
    struct Student student1, student2;
    strcpy(student1.name, "Mehedi Hasan");
    student1.id = 109;
    student1.age = 20;
    strcpy(student2.name, "Rakib Hasan");
    student2.id = 96;
    student2.age = 21;
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("Age: %d\n", student1.age);
    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("Age: %d\n", student2.age);

    return 0;
}
