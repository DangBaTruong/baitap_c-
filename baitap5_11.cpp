#include <iostream>
#include <vector>
using namespace std;
void docTiengAnh(int n){
    vector<string> words;
    while (n!=0){
        int soSau = n % 10;
        switch (soSau) {
        case 0: words.push_back("zero");
            break;
        case 1: words.push_back("one");
            break;
        case 2: words.push_back("two");
            break;
        case 3: words.push_back("three");
            break;
        case 4: words.push_back("four");
            break;
        case 5: words.push_back("five");
            break;
        case 6: words.push_back("six");
            break;
        case 7: words.push_back("seven");
            break;
        case 8: words.push_back("eight");
            break;
        case 9: words.push_back("nine");
            break;
        default:
            break;
        }

    }
    n = n / 10;
}
int main(){
    vector<string> words;
    int n;
    cout << "Nhap n = ";
    cin >> n;
    docTiengAnh(n);
    for(int i= words.size()-1; i>=0; i--){
        cout << words[i] << " " << endl;
    }
    return 0;
}