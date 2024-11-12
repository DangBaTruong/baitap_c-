#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Nhap so tu nhien n: ";
    cin >> n;
    if (n>0){
    for(int i=n; i>=1; i--){
        cout << i << " ";
    }
    } else {
        cout <<"So ban nhap khong phai so tu nhien";
    }
    return 0;
}