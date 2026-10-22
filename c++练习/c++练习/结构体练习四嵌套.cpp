#include <iostream>
#include<string>
using namespace std;
struct Date {
    int year, month, day;
};

struct Student {
    string name;
    int age;
    Date birthday;     
};
int main() {
    Student a;
    a.name = "张三";
    a.age = 18;
    a.birthday.year=2006;
    a.birthday.month= 5;
    a.birthday.day = 12;
    cout << "姓名:" << a.name << " " << "年龄:" << a.age << " " << "生日:" << a.birthday.year << "-" << a.birthday.month << "-" << a.birthday.day << endl;

    Student c;
    c.name = "王五";
    c.age = 20;
    c.birthday.year = 2004;
    c.birthday.month = 11;
    c.birthday.day = 27;
    cout << "姓名:" << c.name << " " << "年龄:" << c.age << " " << "生日:" << c.birthday.year << "-" <<c.birthday.month << "-" << c.birthday.day << endl;
   
    Student b;
    b.name = "李四";
    b.age = 19;
    b.birthday.year = 2005;
    b.birthday.month = 8;
    b.birthday.day = 3;
    cout << "姓名:" << b.name << " " << "年龄:" << b.age << " " << "生日:" << b.birthday.year << "-" << b.birthday.month << "-" << b.birthday.day << endl;

    Date arr[3] = {
        {2006,5,12},
        {2004,11,27},
        {2005,8,3},

    };
    Student arr1[3] = {
        {"张三",18,arr[0]},
        {"王五",20,arr[1]},
        {"李四",19,arr[2]}
    };
    string name = arr1[0].name;
    int mi = arr1[0].birthday.year;
    for (int i = 1;i < 3;i++) {
        if (arr1[i].birthday.year < mi) {
            name = arr1[i].name;
            mi = arr1[i].birthday.year;
        }
    }
    cout << "年龄最大的是:" << name << " " << "出生年份为:" << mi << endl;




}
