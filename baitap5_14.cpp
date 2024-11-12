#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int num)
{
    int sum = 0, original = num;
    
    while (num > 0) 
	{
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return sum == original;
}

bool isPrime(int num) 
{
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); i++) 
	{
        if (num % i == 0) return false;
    }
    return true;
}

int main() 
{
    char choice;
    do 
	{
        cout << "\nMENU\n";
        cout << "1. Armstrong\n";
        cout << "2. Prime\n";
        cout << "3. Finish\n";
        cout << "Nhap lua chon (1/2/3): ";
        cin >> choice;

        if (choice == '1') 
		{
            int num;
            cout << "Nhap mot so: ";
            cin >> num;
            if (isArmstrong(num)) 
			{
                cout << num << " la so Armstrong.\n";
            } 
			else 
			{
                cout << num << " khong phai so Armstrong.\n";
            }
        } 
		else if (choice == '2') 
		{
            int num;
            cout << "Nhap mot so: ";
            cin >> num;
            
            if (isPrime(num)) 
			{
                cout << num << " la so nguyen to.\n";
            } 
			else 
			{
                cout << num << " khong phai so nguyen to.\n";
            }
        } 
		else if (choice == '3') 
		{
            char finishChoice;
            cout << "Ban co muon ket thuc chuong trinh khong (c/k)? ";
            cin >> finishChoice;
            
            if (finishChoice == 'c' || finishChoice == 'C') 
			{
                cout << "Ket thuc chuong trinh.\n";
                break;
            }
        } 
		else 
		{
            cout << "Khong hop le. Vui long chon lai.\n";
        }
    } 
	while (true);

    return 0;
}
