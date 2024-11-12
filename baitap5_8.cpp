#include <iostream>

using namespace std;

int main() {
    int n, tich = 1;
    cout << "Nhap so n: ";
    cin >> n;

    while (n > 0) {
        int soSau = n % 10;
        tich = tich * soSau;
        n /= 10;
    }

    cout << "Tich cac chu so cua " << n << " la: " << tich << endl;
    return 0;
}