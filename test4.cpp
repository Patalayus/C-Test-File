#include <iostream>
#include <vector>
using namespace std;

int main(){
        int a = 1;
        double num1, num2;
        int option1, total;
        while (a < 101){
                cout << "loading... " << a << "%" << endl;
                a++;
                if(a == 101){
                        cout << "finished" << endl;
                }
        }
        cout << "Please enter a number\n";
        cin >> num1;
        cout << "Please enter another number\n";
        cin >> num2;
        cout << "Please select a function" << endl;
        cout << "1. +\n2. -\n3. *\n4. /\n";
        cin >> option1;
        if(option1 == 1){
                total = num1 + num2;
                cout << "Your total is " << total << endl;
        }else if(option1 == 2){
                total = num1 - num2;
                cout << "Your total is " << total << endl;
        }else if(option1 == 3){
                total = num1 * num2;
                cout << "Your total is " << total << endl;
        }else if(option1 == 4){
                total = num1 / num2;
                cout << "Your total is " << total << endl;
        }
}
