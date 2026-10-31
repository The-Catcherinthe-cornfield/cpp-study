#include <iostream>
#include <cstdint>
#include<string>
using namespace std;
class Playlist {
private:
	int count;
	string* songs;

public:
	Playlist(int n) {
		count = n;
		if (n <= 0) {
			n = 1;
			cout << "已默认n等于1" << endl;
		}
		songs = new string[n];
		cout << "构造: " << count << " 首" << endl;

	}
	//深拷贝:
	Playlist(const Playlist& other) {
		count = other.count;   //.count先确定数组的长度
		songs = new string[count]; //新创建一个长度一致的内存,再存一份进去,不用再建一个新变量来接收
		for (int i = 0; i < count; i++) {
			songs[i] = other.songs[i];
		}
		cout << "深拷贝: " << count << " 首" << endl;
	}


	~Playlist() {
		if (songs != NULL) {
			delete[]songs;
			songs = NULL;
		}
		cout << "析构函数" << endl;
	}

	void setSong(int i, string name) {
		if (i >= 0 && i <= count - 1) {
			*(songs + i) = name;
		}
		else {
			cout << "下标越界" << endl;
			return;
		}
	}

	string getSong(int i) {
		if (i<0 || i>count - 1) {
			cout << "下标越界" << endl;
			return "";
		}
		else return*(songs + i);
	}

	void print() {
		for (int i = 0;i < count;i++) {
			cout << *(songs + i) << " ";
		}
		cout << endl;
	}


};
int main() {
	Playlist a(3);
	a.setSong(0, "晴天");
	a.setSong(1, "稻香");
	a.setSong(2, "七里香");

	Playlist b = a;          // 触发深拷贝
	b.setSong(0, "夜曲");

	cout << "a: ";
	a.print();
	cout << "b: ";
	b.print();
}