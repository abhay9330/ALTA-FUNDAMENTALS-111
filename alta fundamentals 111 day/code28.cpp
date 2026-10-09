#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    int marks;
};
int main()
{
    struct Student s = {"Rahul", 19, 88};

    printf("%s, %d, %d", s.name, s.age, s.marks);

    return 0;
}