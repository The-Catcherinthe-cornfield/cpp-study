#include <iostream>
using namespace std;

// *************** while / do-while 语句练习 ***************

// 练习1：求 1 到 100 之和
void ex1() {
    int i = 1, sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "sum=" << sum << endl;
}

// 练习2：求 1 到 100 所有偶数和（do-while 写法）
void ex2() {
    int i = 0, sum = 0;
    do {
        sum += i;
        i += 2;

    } while (i <= 100);
    cout << "sum=" << sum << endl;
}

// 练习3：求阶层 n!
void ex3() {
    int n, i = 1;
    long long f = 1;
    cin >> n;
    while (i <= n) {
        f *= i;
        i++;

    }
    cout << f << endl;
}

int main() {
    ex1();
    //ex2();
    //ex3();
    return 0;
}
