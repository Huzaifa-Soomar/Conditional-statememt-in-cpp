#include <iostream>

using namespace std;

int main(){
  
  float sub1;
  float sub2;

  int entranceTestScore;

  cout << "Enter you Math marks"<< endl;
  cin >> sub1;

  cout << "Enter you science marks"<< endl;
  cin >> sub2;

  cout << "Enter your Entrance Test marks"<< endl;
  cin >> entranceTestScore;


  if (sub1 >=60 && sub2 >=60)
  {
    if (entranceTestScore >=80)
    {
        cout << "congrats you are eligible";
    }
    
  }else{
    cout << "unfottunately you are not eligible";
  }
  

}