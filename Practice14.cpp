#include <iostream>
using namespace std;

int main()
{
    double var1, var2;
    
    beginning:
    system("cls");
    cout << "Enter first number: " << endl;
    cin >> var1;
    
    cout << "Enter second number: " << endl;
    cin >> var2;
    
    cout << "What do you want to do with that number?" << endl;
    cout << "+ - add"<< endl;
    cout << " - - substract"<< endl;
    cout << "* - multiply" << endl;
    cout << "/ - divide" << endl;
    
    char decision;
    
    cin >> decision;
    system("cls");
    switch(decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
                cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
                break;
        case '*':
                cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
                break;
        case '/':
            if (var2) //var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "You can't divide by 0" << endl;
                break;
        default:
            cout << "You typed wrong character";
    }
    
    char decision2;
    
    cout << "Do you want to cntinue that program (Y/N)";
    cin >> decision2;
    
    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
}