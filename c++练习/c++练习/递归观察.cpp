#include<iostream>
using namespace std;
int f(int n) {
    cout << "进入 f(" << n << ")" << endl;
    if (n <= 1) {
        cout << "到底了，返回 1" << endl;
        return 1;
    }
    int r = n * f(n - 1);//当当前函数运行时遇到另一个函数会记录下当前运行位置让出栈顶的位置给新函数执行等他彻底执行完返回弹出栈顶时这个函数才会返回栈顶继续执行
    cout << "返回 " << r << endl;
    return r;
}
int main() {
    cout << f(3) << endl;
}