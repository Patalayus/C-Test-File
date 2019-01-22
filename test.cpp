#include <iostream>
#include <vector>
using namespace std;

int main()
{
        //outputs hello world to the user
        cout << "Hello World" << endl;

        //declare integer variables luke, sunny and total
        int sunny;
        int luke;
        int total;

        //asks the user for an input and then assigns this input to the variable sunny
        cout << "please enter a number\n";
        cin >> sunny;

        //asks the user for an input and then assigns this input to the variable luke
        cout << "pleae enter another number\n";
        cin >> luke;

        //adds together these two numbers, and then outputs this number to the user
        total = luke + sunny;
        cout << total << endl;

        return 0;
}
