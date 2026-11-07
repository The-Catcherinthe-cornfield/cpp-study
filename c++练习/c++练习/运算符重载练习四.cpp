//让两个分数对象独立保存数据
#include <iostream>
#include<string>
using namespace std;
class HeapScore {
private:
	int* score;
public:
	HeapScore(int initialScore) {
		score = new int(initialScore);
	}
	~HeapScore() {
		if (score != NULL)
			delete score;
	}

	void setScore(int newScore) {
		*(this->score) = newScore;
	}
	int getScore() const {
		return *(this->score);
	}

	HeapScore& operator=(const HeapScore& p){   //返回类型为引用可以方便多项连等
		setScore(*p.score);  //注意这里不要重新创建一个指针接收否则原始的就被遗漏了这里的set也就是把新的分数写进原指针指向的整数
		return *this;
	}

};
int main() {
	HeapScore a(10);
	HeapScore b(20);
	cout << "a=" << a.getScore() << " " << "b=" << b.getScore() << endl;
	a=b;
	cout <<"a="<< a.getScore() << " " << "b="<<b.getScore() << endl;
	b.setScore(35);
	cout << "a=" << a.getScore() << " " << "b=" << b.getScore() << endl;

	a = a;
	cout << "a=" << a.getScore() << " " << "b=" << b.getScore() << endl;
}