#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) 
	{
        cout << "N" << endl;
        return 0;
    }

    int k = 0;
    int sum = 0;

    while (sum + (k + 1) <= n) 
	{
        k++;
        sum += k;
    }

    cout << k << endl;
    
    return 0;
}
