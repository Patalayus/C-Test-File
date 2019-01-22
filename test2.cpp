#include <iostream>
#include <vector>
using namespace std;

//user enters a number, then if the numbers are of variable sizes then it comments on the size
int main(){
        int num1;
        cout << "please enter a number\n";
        cin << num1;

        if(num1 > 10){
                cout << "your number is bigger than 10";
        }
        return 0;
}
