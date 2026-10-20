#include <iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student s = { "赵六", 20, 88 };
	Student* p = &s;
	cout << "姓名:" << p->name << " " << "年龄:" << p->age << " " << "分数:" << p->score << endl;
	cout << (*p).name << " " << p->name << endl;//二者完全等价,*p解引用就等于s了
	p->score = 100;
	cout << (*p).score << endl;
}
