#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Nhap n la so nguyen duong: ";
    cin >> n;

    if (n <= 0) 
	{
        cout << "N" << endl;
        return 0;
    }

    for (int i = n; i >= 1; i--) 
	{
        if (n % i == 0 && i % 2 != 0) 
		{
            cout << i << endl;
            return 0; 
        }
    }

    cout << "N" << endl;
    return 0;
}
