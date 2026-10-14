#include <iostream>
using namespace std;

// *************** 二维数组练习 1、2 ***************

// 练习1：打印 3x4 的二维数组
void ex1() {
    int arr[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12}
    };
    for (int i = 0;i < 3;i++) {         //外层走行内层走列
        for (int j = 0;j < 4;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// 练习2：用 sizeof 求行列数，再求和、最大值、最小值、平均值
void ex2() {
    int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    cout << sizeof(arr) << endl;//整个数组占用字节
    cout << sizeof(arr[0]) << endl;//一行元素占用字节
    cout << sizeof(arr[0][0]) << endl;//一个元素所占用字节
    cout << sizeof(arr) / sizeof(arr[0][0]) << endl;//一共多少元素

    int hang = sizeof(arr) / sizeof(arr[0]);
    int lie = sizeof(arr[0]) / sizeof(arr[0][0]);//这里试过了用所有元素个数/行数来求列数比较麻烦故略去

    int sum = 0;
    int ma_x = arr[0][0];
    int mi_n = arr[0][0];//这样写才对不要以眼睛观察的真实数据来写死了,底层原理是最开始以第一个数为擂主后面的数不断与其比较,从而找出最大最小值
    for (int i = 0;i < hang;i++) {
        for (int j = 0;j < lie;j++) {
            sum += arr[i][j];
            if (arr[i][j] > ma_x) {
                ma_x = arr[i][j];
            }
            if (arr[i][j] < mi_n) {
                mi_n = arr[i][j];
            }
        }
    }
    cout << "数组的元素和:" << sum << endl;
    cout << "最大的元素为:" << ma_x << endl;
    cout << "最小的元素为:" << mi_n << endl;
    cout << "平均值为:" << (double)sum / (sizeof(arr) / sizeof(arr[0][0])) << endl;   //注意想保留小数就必须有一个小数类型的所以用double转换一下
}

int main() {
    ex1();
    //ex2();
    return 0;
}
