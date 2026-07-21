#include <iostream>
#include <regex>
#include <string>
#include <vector>

#include "conversation.h"

using namespace std;


int main()
{

    string input;

    while(input != "end")
    {   cout << "you: ";
        getline(cin,input);
        cout << endl;

        cout << "myELIZA: "<<genericResp(input) << endl;
        cout << endl;

    }
    
    

    return 0;
}