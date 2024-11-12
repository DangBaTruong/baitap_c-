#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    ifstream inFile("output.txt"); 

    if (!inFile) 
	{
        cout << "Khong the mo tep de doc." << endl;
        return 1;
    }

    string line;
    
    while (getline(inFile, line)) 
	{
        cout << line << endl;
    }

    inFile.close(); 

    return 0;
}
