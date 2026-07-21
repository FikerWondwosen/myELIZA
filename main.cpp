#include <iostream>
#include <regex>
#include <string>
#include <vector>

#include "conversation.h"

using namespace std;


int main()
{

    string input;
    vector<string> prevInput;

    cout << "myELIZA: Hello, what would you like to talk about?" << endl;
    cout << endl;

    while(true)
    {   
        cout << "You: ";
        getline(cin,input);
        cout << endl;

        if(input == "end")
        {
            cout << "myELIZA: Thank you for chatting with me, have a good day!" << endl;
            cout << endl;
            break;
        }

        cout << "myELIZA: "<< getResponse(input, prevInput) << endl;
        cout << endl;

    }
    
    

    return 0;
}