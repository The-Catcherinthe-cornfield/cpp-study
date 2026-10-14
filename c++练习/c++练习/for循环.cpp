#include <iostream>
using namespace std;

// *************** for 循环：初始化 > 条件 > 循环体 > 更新 > 条件 > 循环体 **********************
//
// 【用法】每个练习写成独立的函数，互不干扰。
//   想跑哪个练习，就在文件最下面 main() 里只留那一行调用，其余保持注释。
//   好处：不用整段注释掉代码，编译器还能帮你检查每个练习的语法。

// 练习0：求 n 的所有因数
void ex0() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << "  Factors  ";
    for (int k = 1; k <= n; k++)//不要填分号在这
        if (n % k == 0)
            cout << k << " ";
    cout << endl;
}

// 练习0-2：求 1+2+3+4+5
void ex0b() {
    int s = 0;
    //      初始化    条件  更新
    for (int i = 1; i <= 5; i++)
        //循环体
        s += i;
    cout << s << endl;
}

// 练习1：求 1~100 的偶数和
void ex1() {
    int sum = 0;
    for (int i = 2;i <= 100;i += 2)
        sum += i;
    cout << "一到一百的偶数和为 " << sum << endl;
}

// 练习2：求 n 的阶乘
void ex2() {
    long long f = 1;
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
        f *= i;
    cout << n << "!= " << f << endl;
}

// 练习3：判断质数
void ex3() {
    int n;
    cin >> n;
    bool prime = (n >= 2);
    for (int k = 2; k * k <= n && prime; k++)
        if (n % k == 0)
            prime = false;
    cout << (prime ? "yes" : "no") << endl;
}

// 练习3强化：输出 n 的所有因数对
void ex3b() {
    int i = 1;
    int n;
    cin >> n;
    for (i = 1;i <= n;i++)
        if (n % i == 0) {
            int j = n / i;
            cout << i << " " << j << endl;
        }
    cout << endl;
}

// 强化2：求 n 的因数个数和因数总和
void ex3c() {
    int sum = 0;
    int c = 0;//后面用到了c的自加所以得先赋值先
    int i = 1;
    int n;
    cin >> n;
    for (i = 1; i <= n;i++)
        if (n % i == 0) {
            c++;
            sum += i;
        }
    cout << "个数" << "=" << c << endl;
    cout << "总和" << "=" << sum << endl;
}

// 加练：输出 100 以内的完全平方数
void ex4() {
    int k;
    for (k = 1;k*k <= 100;k++)
        cout << k * k << " ";
    cout << endl;
}

int main() {
    ex0();
    //ex0b();
    //ex1();
    //ex2();
    //ex3();
    //ex3b();
    //ex3c();
    //ex4();
    return 0;
}
