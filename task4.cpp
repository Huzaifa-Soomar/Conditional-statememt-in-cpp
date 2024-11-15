#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int a, b, c;
    char rating;
    cout << "Enter Years of Service:" << endl;
    cin >> a;
    cout << "Performance Rating:(A,B,C)" << endl;
    cin >> rating;
    if (a>9 && rating=='A') {

    cout<<"You get 20% bonus"<<endl;}
    else if (a>9 && rating=='B'){

    cout<<"You get 18% bonus"<<endl;

    }
    else if (a>9 && rating=='C'){
    cout<<"You get 15% bonus"<<endl;
    }
    else if (a>=5 && a<10 && rating=='A'){
    cout<<"You get 15% bonus"<<endl;
    }
    else if (a>=5 && a<10 && rating=='B'){
    cout<<"You get 13% bonus"<<endl;  
      }
    else if (a>=5 && a<10 && rating=='C'){
    cout<<"You get 10% bonus"<<endl;
    }
     else if (a<5 && rating=='A'){
    cout<<"You get 10% bonus"<<endl;
    }
    else if (a<5 && rating=='B'){
    cout<<"You get 8% bonus"<<endl;
    }
    else if (a<5 && rating=='C'){
    cout<<"You get 5% bonus"<<endl;
    }
    return 0;
}