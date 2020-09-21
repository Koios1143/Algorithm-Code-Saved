#include<iostream>
#include <iomanip> //setprecision會用到的函式庫
using namespace std;
 
int main()
{
    double x; //儲存浮點數
    int n; //儲存小數位數

    
        cout << "請輸入一浮點數: "; //提示使用者，讓他知道現在要輸入浮點數
        cin >> x; //輸入x的值
        cout << "請輸入此浮點數輸出的小數位數: "; //提示使用者，讓他知道現在要輸入欲輸出的小數位數
        cin >> n; //輸入n的值
        cout << endl; //換行
        cout << "輸出結果: " << fixed  <<  setprecision(n) << x <<  endl << endl; //輸出結果
    
    return 0;
}
