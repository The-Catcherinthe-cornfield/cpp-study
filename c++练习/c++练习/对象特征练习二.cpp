#include <iostream>
#include<string>
using namespace std;
class Person {
public:
	string Name;
	int Age;
	Person() {
		cout << "调用无参函数" << endl;
	}
	Person(int age) {
		Name = "无名";
		Age = age;
		cout << "调用有参函数" <<Name << Age << endl;

	}
	
	~Person() {
		cout << "调用析构函数" <<Name<<Age<< endl;
	}



};
int main() {
	Person p1(10);
	cout << endl;
	Person p2 = Person(20);
	cout << endl;
	Person p3 = 30;

}