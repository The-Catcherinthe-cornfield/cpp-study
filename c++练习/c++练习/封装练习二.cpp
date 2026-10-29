#include <iostream>
#include<string>
using namespace std;

class Student01 {
public:    //如果不加public,class默认隐私则第17行是访问不了的
	int age = 18;
};
struct Student02 {
	int age = 19;
};


int main() {
	Student01 a;
	Student02 b;
	cout << a.age << endl;
	cout << b.age << endl;
}