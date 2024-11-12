#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    int a = 0, b = 1, next;
    cout << "Day Fibonacci tu 0 den " << n << ": ";
    
    while (a <= n) 
	{
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    printFibonacci(n);

    return 0;
}
