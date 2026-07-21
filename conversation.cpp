#include "conversation.h"

string getResponse(string& input , vector<string>& prevInput){

    if(isRepeated(input, prevInput))
    {
        return "You said this earler, why does it matter to you?";
    }


    prevInput.push_back(input);

    string response = genericResp(input);

    if(response != "")
    {
        return response;
    }
    else{
        return "sorry, I didn't understand";
    }
    
    
}

bool isRepeated(string& input, vector<string>& prevInput){

    for(int i = 0; i < prevInput.size(); i++)
    {
        if(prevInput[i] == input)
        {
            return true;
        }
    }

    return false;


}

string genericResp(const string& text){

    

    regex haveHasPatterns("\\b(have|has|I've|had|own)\\b",regex_constants::icase);

    if(regex_search(text,haveHasPatterns))
    {//handles any inputs that contains the ownership of something
        return "how does having that make you feel?";
    }

    regex wantPatterns("\\b(want|need|wish|crave|require)\\b",regex_constants::icase);

    if(regex_search(text,wantPatterns))
    {//handles any inputs that contains the need for something

        return "Why do you feel like you need that?";

    }   

    regex purchasePatterns("\\b(buy|bought|purchase|purchased|acquire|obtain|take|gain|secure)\\b",regex_constants::icase);

    if(regex_search(text,purchasePatterns))
    {//handles any inputs that contains the purchase of something

        return "Do you think you made the right purchase?";

    }

    return "";

}

// string relationshipResp(const string& text){

// }

// string concernResp(const string& text){

// }

// string financialResp(const string& text){

// }
// string wellbeingResp(const string& text){

// }
// string educationResp(const string& text){

// }

// string entertainmentResp(const string& text){

// }

// string otherResp(const string& text){

// }
