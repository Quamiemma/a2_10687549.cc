#include <iostream>
using namespace std;
int main(){
    int mark = 0;
    //ask for the user input and store
    //it in mark
    cout << "Enter your score : " << endl;
    cin mark;
    
    if (mark >= 80 && mark <= 100){
         cout << "A" << endl;
    }
    else if (mark >= 70 && mark <= 79){
        cout << "B" << endl;
    }
  else if (mark >= 55 && mark <= 69){
        cout << "C" << endl;
    }
   else if (mark >= 40 && mark <= 54){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
}
