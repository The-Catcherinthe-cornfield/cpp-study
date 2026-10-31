#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class Person {
public:
	string name;
	int age;

	Person() {
		cout << "无参构造" << endl;
	}

	Person(string Name, int Age) {
		name = Name;
		age = Age;
		cout << "有参构造:" << name << " " << age << endl;
	}

	Person(const Person& p) {
		name = p.name;
		age = p.age;   //拷贝函数还是要写这个赋值程序的不是他自动帮你赋值
		cout << "拷贝构造:" << name <<" "<< age << endl;
	}

	~Person() {
		cout << "析构函数" << name << " " << age << endl;
	}

};

void printPerson( Person p) {
	cout << "姓名和年龄:" << p.name << " " << p.age << endl;

}

Person createPerson() {
	Person a("李四", 20);
	return a;
}



int main() {
	Person p1("张三",18);
	Person p2(p1);
	printPerson(p1);
	Person p3 = createPerson();



}