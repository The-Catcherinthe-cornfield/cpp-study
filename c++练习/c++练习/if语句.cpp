#include <iostream>
using namespace std;

// *************** if / switch 语句练习 ***************
//
// 【用法】想跑哪个练习，就在下面 main() 里只留对应那一行调用。

// 练习1：判断 num 是否同时被 3 和 5 整除
void ex1() {
    int num;
    cin >> num;
    bool result = num % 3 == 0 && num % 5 == 0;
    cout << boolalpha << result << endl;
}

// 练习2：按分数输出等级
void ex2() {
    int score;
    cin >> score;
    if (0 <= score && score <= 100) {
        if (score >= 90 && score <= 100)
            cout << "优秀" << endl;
        else if (score >= 80 && score <= 89)
            cout << "良好" << endl;
        else if (score >= 70 && score <= 79)
            cout << "中等" << endl;
        else if (score >= 60 && score <= 69)
            cout << "及格" << endl;
        else if (score < 60)
            cout << "不及" << endl;
    }
    else {
        cout << "成绩不存在" << endl;
        return;//原来这里是 return 0;，改成 void 函数后不用再返回 0
    }
}

// 练习3(重要)：简易计算器
void ex3() {
    double a, b;
    char op;
    cin >> a >> op >> b;
    switch (op) {
    case'+':cout << a + b << endl; break;
    case'-':cout << a - b << endl; break;
    case'*':cout << a * b << endl; break;
    case'/':
        if (b == 0)cout << "除数不能为零" << endl;
        else	   cout << a / b << endl;
        break;

    default:cout << "运算符错误" << endl;
    }
}

int main() {
    ex1();
    //ex2();
    //ex3();
    return 0;
}
