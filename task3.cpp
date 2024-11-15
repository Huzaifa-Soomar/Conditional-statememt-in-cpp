#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;

    cout << "enter 1st number";
    cin >> num1;

    cout << "enter 2nd number";
    cin >> num2;

    cout << "enter 3rd number";
    cin >> num3;
    

    if (num1>num2 && num1>num3)
    {
        cout << num1  << "\t 1st number is greater";

    }else if (num2>num1 && num2>num3)
    {
        cout << num2   << "\t 2nd number is greater";

    }else{
        cout << num3  << "\t 3rd number is greater";

    }   

}