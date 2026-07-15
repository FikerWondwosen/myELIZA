#include <iostream>
#include <regex>
#include <string>


using namespace std;


int main()
{

    string input;

    cout << "say some: ";
    
    getline(cin,input);

    cout << "you said: " << input << endl;


    return 0;
}