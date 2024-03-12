#include <iostream>
using namespace std;

int myNum()
{
    int x = 5;
    int y = 6;
    int result = x + y;
    cout<< result;
    return result;
}

int main()
{
    cout<< "Hello World. My name is Madi. \n";
    cout<< "5 + 6 is: ", myNum(), "\n";
}