//补充:从右往左数求n的第k位的数字:(n/10**k)%10
#include<iostream>
using namespace std;
int main() {
	//练习1:
	/*int ma_x = 0;
	int arr[5] = { 300,350,200,400,250 };
	int i = 0;
	for (int i = 0;i < 5;i++)
		if (arr[i] > ma_x)
			ma_x = arr[i];
	cout << "最重的猪有" << ma_x << "斤" << endl;
	return 0;*/

	//练习2 数组逆置并输出:
	//int arr[] = { 1,2,3,4,5 };
	//int temp=0 ;
	//int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;
	//while (start < end) {
	//	temp = arr[start];              //要加上arr才行不然只交换了下标没交换数
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//	start++;
	//	end--;
	//}
	//for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)       //输出数组就立刻想用循环
	//		cout << arr[i];

	//冒泡排序练习:
	//int temp = 0;
	//int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	////错误:for (int i = 0;i <= 8;i++) {
	//for(int i=0;i<8;i++)
	//    //应该是不能取等因为i从0开始等于8就运行9轮了
	//	//错误:for (int j = 0;j <= 9 - i;j++) {
	//	for(int j = 0;j <= 7 - i;j++)     //j应该是7-i这样j+1才不会超出8,每轮找出一个放最右边的数,i轮剩余8-i个元素还需比较8-i-1次
	//		if (arr[j] > arr[j + 1]) {     //注意往左排的数是先输出的
	//			temp = arr[j+1];
	//			arr[j+1] = arr[j];
	//			arr[j] = temp;


	//		}
	//	}
	//
	//cout << "从小到大的排序:" << endl;
	//for (int k = 0;k < 9;k++)
	//	cout << arr[k] << " ";

	//冒泡练习改造加计数器:
	/*int sum1 = -1;
	int sum2 = 0;
	int temp = 0;
	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	for (int i = 0;i < 8;i++) {
		for (int j = 0;j <= 7 - i;j++) {
			sum1 += 1;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				sum2 += 1;
			}
		}
	}

	cout << "对比的次数为:" << sum1 << endl;
	cout << "交换的次数为:" << sum2 << endl;*/

	//
	const int N = 10;
	double arr[N];                      // 先开好 10 个格子，还没装东西

	for (int i = 0; i < N; i++) {
		cout << "请输入第 " << i + 1 << " 个数: ";
		cin >> arr[i];               // 每次读进一个格子,装多个数据只能用循环,cin不止可以输入一个数据输入数组也是可以的
	}
	double temp;
	for (int j = 0;j < N;j++) {
		for (int k = 0;k < N - j - 1;k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;

			}

		}
	}
	cout << "从小到大的排序:" << endl;
	for (int n = 0;n < N;n++)
		cout << arr[n]<<" ";













	//测试改动
}