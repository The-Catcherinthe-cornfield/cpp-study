#include <iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
Student* findByName(Student* students, int n, string name) {
    for (int i = 0;i < n;i++) {
        if (students[i].name == name)
            return &students[i];
    }
    return NULL;  //return不要放错位置以执行函数就直接结束了
}

int main() {
    Student students[5] = {
    { "张三", 18, 90 },
    { "李四", 19, 85 },
    { "王五", 20, 95 },
    { "赵六", 19, 70 },
    { "孙七", 18, 88 }
    };
    Student *r=findByName(students, sizeof(students) / sizeof(students[0]), "李四");
    if (r != NULL)
        cout << r->name << endl;
    else
        cout << "没找到" << endl;

}