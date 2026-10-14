//#include<iostream>
//using namespace std;
//练习1:
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	int a;
//	a = add(3, 5);
//	cout << a ;
//	return 0;
//
//}
// 

//练习2:
//int power(double x, int n) {
//    double val = 1.0;
//    while (n--) val *= x;     //n--就算是0了也还会减
//    return int(val);
//}
//int main() { cout << power(2.5, 2) << endl; }

//练习3:
//double power(double x, int n) {
//    double val = 1.0 ;
//    while (n--) val *= x;
//    return val;
//}
//int main() {
//    double a = power(2, 3);
//        cout << a;
//}

//练习4:
//double power(double x, int n) {
//    double val = 1.0;
//    while (n--) val *= x;
//    return val;
//}


//练习5:
//double power(double x, int n) {      //void是不返回值的所以主函数不能再cout,副函数内不宜用cout用return
//    double val = 1.0;
//    while (n--) val *= x;
//    return val;
//}
//int main() { cout<<power(2, -3) << endl; }

//练习6开负次方根:
//double power(double x,int n) {
//	double val = 1.0;
//	if (n < 0) {
//		n = -n;
//		while (n--) val /= x;
//		return val;
//	}
//	else
//		while (n--) val *= x;
//		return val;
//}
//int main() { cout << power(2, 3); }

//练习7:
//double sumPower(double x, int n) {
//	double val = 1.0;
//	if (n < 0) {	
//		n = -n;
//		while (n--) val /= x;
//		return val;
//	}
//	else
//		while (n--) val *= x;
//		return val;
//
//
//}
//double sumPower(double x, int n) {
//	double term = 1.0, sum = 0.0;
//	for (int i = 1; i <= n; i++) {
//		term *= x;
//		sum += term;
//	}
//	return sum;
//}
//int main() {
//	cout << sumPower(2, 3);
//}

//练习8:







//练习3
//练习3
//练习3
