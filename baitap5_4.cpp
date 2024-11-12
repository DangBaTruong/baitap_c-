#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Nhap so nguyen n: ";
    cin >> n;
    int sum=0;
    if(n>0){
    for(int i=1; i<=n; i++){
        int a = i*i; 
        sum= sum + a;
    }
    cout << sum;
    }else {
        cout <<"So ban nhap khong phai so duong";
    }
    return 0;
}