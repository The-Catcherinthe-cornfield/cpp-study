#include <iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name="张三";
	int age=18;
	int score=100;

public:
	void setScore(int Score) {
		score = Score;
	}
	int getScore() {
		return score;
	}
	void print() {
		cout << "姓名:" << name<<" " << "年龄:" << age<<" " << "分数:" << score << endl;
	}
};
int main()
{
	Student a;
	a.setScore(99);
	a.print();
	/*cout << a.score << endl;*/


}