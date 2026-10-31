#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class Person {
public:

	string name = "张三";
	int age= 18;

	/*Person(string Name.int Age) {
		cout << "有参构造" << endl;   //一旦有有参构造就不生成无参构造
	}*/

	//Person(const Person& p) {
	//	name = p.name;
	//	age = p.age;
	//	cout << "拷贝函数" << endl;   //一旦有了拷贝构造就不再生成有参与无参构造
	//}

	~Person() {
		cout << "析构函数" << endl;  //析构不是构造函数不影响编译器是否默认生成无参有参构造与拷贝构造
	}


};
int main() {
	/*Person p;*/

	/*Person p1;
	Person("李四", 20);*/

	Person p;
	Person p1("李四", 20);
}