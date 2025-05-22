#include <stdio.h>
void byValue(int x) {
	x *= 2;
}
void byPtr(int* x) {
	*x *= 2;
}
struct Student
{
	int id;
	int grade;
	char gender;
};

void PrintStudent(Student* s) {
	printf("%i\n", s->id);
	printf("%i\n", s->grade);
	printf("%c\n", s->gender);
}
int main() {
	Student s;
	s.id = 5;
	s.grade = 100;
	s.gender = 'M';
	PrintStudent(&s);
}