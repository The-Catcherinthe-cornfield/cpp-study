#include <iostream>
#include<string>
using namespace std;
struct Student {
    string name;
    int age;
    int score;
};
int main() {
    Student arr[3] = {
        {"张三",18,90},
        {"李四",19,85},
        {"王五",20,95}
    };
    Student* p = arr;
    for (int i = 0;i < 3;i++) {
        cout << (*(p + i)).name<<" ";
    }
    cout << endl;
    string name= (*p).name;
    int ma = (*p).score;  //养成习惯:都要初始化到具体的值,名字和分数组一对,别就定义一下就行了
    for (int i = 1;i < 3; i++) {
        if ((*(p + i)).score > ma) {
            ma = (*(p + i)).score;
            name = (*(p + i)).name;
        }
    }
    cout << "分数最高者为:" << name << endl;
    int n = 5;
    n %= 10;
    cout << n;
}