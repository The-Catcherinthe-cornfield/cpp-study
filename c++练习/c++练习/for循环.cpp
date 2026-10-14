//#include <iostream>
//using namespace std;
//***************初始化>条件>循环体>更新>条件>循环体**********************
//int main() {
    /*int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << "  Factors  ";
    for (int k = 1; k <= n; k++)//不要填分号在这
        if (n % k == 0)
            cout << k << " ";
    cout << endl;
    return 0;*/

    //int s = 0;
     //      初始化    条件  更新
    //for (int i = 1; i <= 5; i++)
        //循环体
         //s += i;
    //cout << s << endl;
    

//练习1:
    /*int sum = 0;
    for (int i = 2;i <= 100;i += 2)
        sum += i;
    cout << "一到一百的偶数和为 " << sum << endl;
    return 0;*/

//练习2:
    /*long long f=1;
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
        f *= i;
    cout << n<<"!= " << f << endl;
    return 0;*/

//练习3:
        /*int n;
        cin >> n;
        bool prime = (n >= 2);
        for (int k = 2; k * k <= n && prime; k++)
            if (n % k == 0)
                prime = false;
        cout << (prime ? "yes" : "no") << endl;   
        return 0;
    */

//练习3强化:
    /*int i = 1;
    int n;
    cin >> n;
    for (i = 1;i <= n;i++)
        if (n % i == 0) {
            int j = n / i;
            cout << i<<" " << j << endl;
        }
    cout << endl;*/
//强化2:
    //int sum=0;
    //int c=0;//后面用到了c的自加所以得先赋值先
    //int i = 1;
    //int n;
    //cin >> n;
    //for (i = 1; i <= n;i++)
    //    if (n % i == 0) {
    //        c++;
    //        sum += i;
    //    }
    //cout << "个数" << "=" <<c<< endl;
    //cout << "总和" << "=" <<sum<< endl;

//加练:
    /*int k;
    for (k = 1;k*k <= 100;k++)
        cout << k * k << " ";*/

        







//}