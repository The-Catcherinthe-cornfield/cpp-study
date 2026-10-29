#include <iostream>
#include<string>
using namespace std;
class Person {
public:
	string name;
	int age;

	Person() {
		cout << "调用无参构造函数" << endl;
	}
	Person(string name, int age) {
		cout << "调用有参构造函数:" << "姓名" << name << " " << "年龄" << age << endl;
	}
	~Person() {
		cout << "调用析构函数" << "姓名" << name << endl;
	}


};
int main() {   //先创建的后析构
	Person a;
	a.name = "张三";
	a.age = 18;

	Person b;
	b.name = "李四";
	b.age = 19;

	cout << endl;
	Person("李四", 18);


}