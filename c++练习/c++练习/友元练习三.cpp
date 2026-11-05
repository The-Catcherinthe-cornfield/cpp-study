#include <iostream>
#include<string>
using namespace std;

class Diary;
class Reader {
public:
	void read(const Diary& d);
	void preview(const Diary& d);
};

class Diary {
	friend void Reader::read(const Diary& d);  //记得写函数类型和参数,因为这里的友元又涉及到了Diary所以前面又要先声明D,并且涉及到了R类中的函数所以要把R类与其函数名一起声明在前但是函数功能要在类外单独定义
private:
	string content;
public:
	Diary(string m_content) {
		content = m_content;
	}

};

void Reader::read(const Diary& d) {
	cout << d.content << endl;
}
void Reader::preview(const Diary& d) {
	/*cout << d.content << endl;*/
	cout << "无权读取正文" << endl;
}

int main() {
	Diary p("今天学会了友元");
	Reader q;
	q.read(p);
	q.preview(p);

}