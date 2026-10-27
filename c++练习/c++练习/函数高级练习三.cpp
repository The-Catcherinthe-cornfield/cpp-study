#include <iostream>
#include<string>
using namespace std;
int add(int a, int b = 0) {
    cout << "[int 两参版] ";
    return a + b;
}

int add(int a, int b, int c) {
    cout << "[int 三参版] ";
    return a + b + c;
}

double add(double a, double b = 0.0) {
    cout << "[double 版] ";
    return a + b;
}
int main() {
    cout << add(1) << endl;
    cout << add(1, 2) << endl;
    cout << add(1, 2, 3) << endl;
    cout << add(1.5, 2.5) << endl;

    cout << endl;

    /*cout << add(1, 2.5) << endl;*/ //因为没有精确匹配的,所以第一个和第三个函数都可先做一次转换从而符合,所以编译器不知道选哪个会报错
}