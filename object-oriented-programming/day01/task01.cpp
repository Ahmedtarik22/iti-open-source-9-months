#include <iostream>

using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter a num1::";
    cin >> num1;

    cout << "Enter a num2::";
    cin >> num2;


    cout << "\n***************************** Arthematic Operators: *****************************";
    cout << "\nnum1 + num2 : " << num1+num2 << endl;
    cout << "num1 - num2 : " << num1-num2 << endl;
    cout << "num1 * num2 : " << num1*num2 << endl;




    if(num2 == 0 )

    {
        cout << "Plz enter sec num != 0 : ";
        cin >> num2;
        cout << "num1 / num2 : " << num1/num2;
    }else {
        cout << "num1 / num2 : " << num1/num2;
    }
    return 0;
}
