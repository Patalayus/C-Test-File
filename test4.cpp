#include <iostream>
#include <vector>
using namespace std;

int main(){
        int a = 1;
        while (a < 100){
                cout << "loading... " << a << "%" << endl;
                a++;
                if(a == 100){
                        cout << "finished" << endl;
                }
        }
}
