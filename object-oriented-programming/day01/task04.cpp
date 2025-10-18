#include <iostream>

using namespace std;


int main()
{
    char ch;
    int num;
    char res;

    cout << "Enter a Char::";
    cin>> ch;


    num = ch;
    res = num;
    if (num > 64 && num < 91) {
         res = num + 32;
        cout << res;
    }else if (num  > 96 && num < 123) {
        res = num - 32;
        cout << res;
    } else {
        cout << "Plz enter a char";
    }


    return 0;
}
