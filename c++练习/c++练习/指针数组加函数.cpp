#include<iostream>
using namespace std;
void bubbleSort(int* arr, int n) {//记住冒泡排序是有两层循环的:外层是轮数,内层是每一轮的对比!
	for (int i = 0;i < n;i++) {
		for (int k = 0;k < n - i - 1;k++) {
			if (*(arr + k) > *(arr + k + 1)) {
				int temp = *(arr + k);
				*(arr + k) = *(arr + k + 1);
				*(arr + k + 1) = temp;
			}
		}

	}
}
int main(){
	int arr[5] = { 30, 20, 10, 40, 20 };
	bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int j = 0;j < sizeof(arr) / sizeof(arr[0]);j++) {
		cout << arr[j] << endl;
	}
}
	