#include <iostream>
using namespace std;

int main(){

    int score;

    cout << "Enter your test score";
    cin >> score;

    if (score >=90)
    {
        cout << "Grade : A";
    }else if (score >=85)
    {
        cout << "Grade : B+";
    }else if (score >=75)
    {
        cout << "Grade : B";
    }else if (score >=70)
    {
        cout << "Grade : C+";
    }else if (score >=60)
    {
        cout << "Grade : C";
    }else{
        cout << "Grade : D";
    }
    
    
    
    
    
}