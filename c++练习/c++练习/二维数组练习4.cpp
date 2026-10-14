#include <iostream>
using namespace std;

// *************** 二维数组练习4：矩阵转置 ***************

// 练习1：方阵转置（3x3）
void ex1() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++) {
        for (int j = i + 1;j < sizeof(arr[0]) / sizeof(arr[0][0]);j++) {//j=i+1是因为这样就只会跟着(i,i+1)的位置来走而如果j=0那么j先加之后i再加同一个位置的坐标会出现两次又换回去了等于没换
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++) {
        for (int j = 0;j < sizeof(arr[0]) / sizeof(arr[0][0]);j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// 练习2：非方阵转置（3x4 转成 4x3），要新建一个数组来装
void ex2() {
    int a[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12}
    };
    int b[4][3] = {};//不是方阵所以要新建一个提前转置好的的空数组
    for (int i = 0;i < sizeof(a) / sizeof(a[0]);i++) {
        for (int j = 0;j < sizeof(a[0]) / sizeof(a[0][0]);j++) {//这里就可以j=0因为不在一个数组里是从a数组往b中搬要搬完所有
            int temp = a[i][j];
            b[j][i] = temp;
        }
    }
    for (int i = 0;i < sizeof(b) / sizeof(b[0]);i++) {
        for (int j = 0;j < sizeof(b[0]) / sizeof(b[0][0]);j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ex1();
    //ex2();
    return 0;
}
