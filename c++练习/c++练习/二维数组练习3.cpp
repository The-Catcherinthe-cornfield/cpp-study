#include <iostream>
using namespace std;

// *************** 二维数组练习3：成绩统计 ***************
// 【还没做完】sums 复用到第1、2问；每科用 courseSum；maxIndex 版

// 三个学生的三科成绩，下面几个练习共用这一份数据
int score[3][3] = {
    {100, 100, 100},
    { 90,  50, 100},
    { 60,  70,  80}
};

// 练习1：每个学生的总分及其平均分
void ex1() {
    for (int i = 0;i < 3;i++) {
        int sum1 = 0;//这个和要定义在循环里否则每循环一次会叠加上一次的
        for (int j = 0;j < 3;j++) {
            sum1 += score[i][j];
        }
        cout << "每个学生的总分为:" << sum1 << " ";
        cout << "每个学生平均分为:" << (double)sum1 / 3 << endl;
    }
}

// 练习2：每科的平均分
void ex2() {
    for (int i = 0;i < 3;i++) {
        int sum2 = 0;
        for (int j = 0;j < 3;j++) {
            sum2 += score[j][i];
        }
        cout << "每科平均分为:" << (double)sum2 / 3 << endl;
    }
}

// 练习3：找出总分最高的学生的总分
void ex3() {
    int ma_x = 0;//这里就可以放心定义成0因为成绩不可能是负数(生活实际)
    for (int i = 0;i < 3;i++) {
        int sum1 = 0;//这个和要定义在循环里否则每循环一次会叠加上一次的
        for (int j = 0;j < 3;j++) {
            sum1 += score[i][j];
        }
        if (sum1 >= ma_x) {
            ma_x = sum1;
        }
    }
    cout << "最大值总分数为:" << ma_x << endl;
}

// 练习3的另一种写法：先把每个学生的总分存进 sums 数组，再找最大值
void ex3b() {
    int sums[3] = { 0 };
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            sums[i] += score[i][j];
        }
    }
    int ma_x = sums[0];
    for (int i = 0;i < 3;i++) {
        if (sums[i] > ma_x)
            ma_x = sums[i];
    }
    cout << "最大的学生分数和为:" << ma_x << endl;
}

int main() {
    //ex1();
    //ex2();
    //ex3();
    ex3b();
    return 0;
}
