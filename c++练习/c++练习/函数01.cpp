#include <iostream>
using namespace std;

// *************** 函数练习（定义、参数、返回值） ***************
//
// 【注意】练习2~6 原来都叫 power，同一个程序里不能有两个同名同参数的函数，
//   所以这里把它们分别改名为 powerEx2、powerEx3…… 内容和你原来写的一字不差。

// 练习1：最简单的加法函数
int add(int a, int b) {
    return a + b;
}

void ex1() {
    int a;
    a = add(3, 5);
    cout << a;
}

// 练习2：power 返回 int 版本
int powerEx2(double x, int n) {
    double val = 1.0;
    while (n--) val *= x;     //n--就算是0了也还会减
    return int(val);
}

void ex2() {
    cout << powerEx2(2.5, 2) << endl;
}

// 练习3：power 返回 double 版本
double powerEx3(double x, int n) {
    double val = 1.0;
    while (n--) val *= x;
    return val;
}

void ex3() {
    double a = powerEx3(2, 3);
    cout << a;
}

// 练习4：这一段原来只有函数定义，没有调用它的 main
double powerEx4(double x, int n) {
    double val = 1.0;
    while (n--) val *= x;
    return val;
}

// 练习5：用 cout 输出函数返回值
//   （void是不返回值的所以主函数不能再cout,副函数内不宜用cout用return）
double powerEx5(double x, int n) {
    double val = 1.0;
    while (n--) val *= x;
    return val;
}

void ex5() {
    cout << powerEx5(2, -3) << endl;
}

// 练习6：开负次方根
double powerEx6(double x, int n) {
    double val = 1.0;
    if (n < 0) {
        n = -n;
        while (n--) val /= x;
        return val;
    }
    else
        while (n--) val *= x;
    return val;
}

void ex6() {
    cout << powerEx6(2, 3);
}

// 练习7：求 x + x^2 + ... + x^n
//   你原来在这里写了两个同名的 sumPower（第一个其实是在算 x 的 n 次方，和 power 一样），
//   同名函数只能留一个，所以把第一个改名保留下来，第二个才是真正的求和版本。
double powerEx7(double x, int n) {
    double val = 1.0;
    if (n < 0) {
        n = -n;
        while (n--) val /= x;
        return val;
    }
    else
        while (n--) val *= x;
    return val;
}

double sumPower(double x, int n) {
    double term = 1.0, sum = 0.0;
    for (int i = 1; i <= n; i++) {
        term *= x;
        sum += term;
    }
    return sum;
}

void ex7() {
    cout << sumPower(2, 3);
}

// 练习8：还没写

int main() {
    ex1();
    //ex2();
    //ex3();
    //ex5();
    //ex6();
    //ex7();
    return 0;
}
