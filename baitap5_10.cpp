#include <iostream>
using namespace std;
int main(){
    int n, soDaoNguoc, soBanDau, soSau;
    cout << "Nhap n = ";
    cin >> n;

    soBanDau = n;
    soDaoNguoc = 0;
    while (n!=0){
        soSau = n % 10;
        soDaoNguoc = soDaoNguoc * 10 + soSau;
        n = n / 10;
    }
    if(soBanDau == soDaoNguoc){
        cout << soBanDau << " is a palindrome number";
    }
    else {
        cout << soBanDau << " is not a palindrome number";
    }
    return 0;
}