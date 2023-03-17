#include <iostream>

using namespace std;

int main() 
{
    //Problem 4:The nested conditional statement shown below has been written by aninexperienced C/C++ programmer. 
    //The behavior of the statement is not correctly represented by the formatting.
    //if (n < 10)if (n > 0)cout << "The number is positive." << endl;elsecout << "The number is ______________." << endl;a)
    //What is the output of the statement if the variable n has the value 7 ? If n has the value 15 ? If n has the value -3 ?b)
    //Correct the syntax of the statement so that the logic of the correctedstatement corresponds to the formatting of the original statement.
    // Also, replacethe blank with an appropriate word or phrase.c)
    // Correct the formatting of the (original) statement so that the new formatreflects the logical behavior of the original statement.
    //Also, replace the blank with an appropriate word or phrase.


    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 10) {
        if (n > 0) {
            cout << "The number is positive." << endl;
        }
        else {
            cout << "The number is negative." << endl;
        }
    }
    else {
        cout << "The number is greater than or equal to 10." << endl;
    }
    return 0;
}