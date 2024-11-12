#include <iostream>
using namespace std;
int main() 
{
    int a;
    cout << "Nhap so nguyen duong a: ";
    cin >> a;

    if (a <= 0) 
	{
        cout << "N" << endl;
        return 0;
    }

    bool foundOdd = false;
    cout << "Cac chu so le: ";
    
    while (a > 0) 
	{
        int digit = a % 10;
        
        if (digit % 2 != 0) 
		{
            cout << digit;
            foundOdd = true;
        }
        a /= 10;
    }

    if (!foundOdd) 
	{
        cout << "N";
    }
    cout << endl;
    
    return 0;
}
