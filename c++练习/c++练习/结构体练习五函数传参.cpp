#include <iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
void printStudent(Student s) {
	cout << s.name << " " << s.age << " " << s.score << endl;
}

void modifyByValue(Student s) {
	s.score = 100;
	cout << s.name << " " << s.age << " " << s.score << endl;
}

void modifyByPointer(Student* s) {
	s->score = 100;
	cout << s->name << " "<< s->age<<" "<< s->score<<endl;
}

void printStudentReadOnly(const Student* s) {
	s->score = 100;
	cout << s->name << " " << s->age << " " << s->score << endl;
}
int main() {
	Student x = { "赵六",20,88 };
	printStudent(x);
	cout << x.name << " " << x.age << " " << x.score << endl;
	cout << endl;
	modifyByValue(x);
	cout << x.name << " " << x.age << " " << x.score << endl;
	cout << endl;
	modifyByPointer(&x);
	cout << x.name << " " << x.age << " " << x.score << endl;

}