#include <iostream>
#include<string>
using namespace std;
struct Student {   //结果体的定义就在里面写明所要用到的类型和变量名即可
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
    for (int i = 0;i < 3;i++) {
        cout << "姓名:" << arr[i].name << " " << "年龄:" << arr[i].age << " " << "分数:" << arr[i].score << endl;
    }
    int sum=0;
    for (int i = 0;i < 3;i++) {
        sum+= arr[i].score;
    }
    cout <<"平均分是:" << sum / 3 << endl;
    int ma = arr[1].score;
    string name;
    for (int i = 1;i < 3;i++) {
        if (arr[i].score > ma) {
            ma = arr[i].score;
            name = arr[i].name;//最大值也要同步更行才能以他为指标同步找最大值的人
        }
    }
    cout << "最大值的人为:" << name << endl;
}
