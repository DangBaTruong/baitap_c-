#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;

    for(int i=m; i<=n; i++){
        int sum = 0; 
        int temp = i;
        while(temp > 0){
            int soSau = temp % 10;
            sum = sum + (soSau * soSau * soSau);
            temp = temp / 10;
        }
        if(sum == i){
            cout << i << " " << endl;
        }
    }
    return 0;
}