#include "../include/utils.h"

//  Remove blanks from vector of strings
vector<string> kward_api::removeBlanks(vector<string> strVect)
{
        //  Loop through vector
        for (string str : strVect)
        {
            if (str == " ")
            {
                str = "";
            }
        }
        return strVect;
}

//  Tokenize string with string delimeter
vector<string> kward_api::tokenize(string str, string delim)
{
    vector<string> tokens; //  Line tokens
    size_t start = 0;      //  Start position
    size_t end;            //  End position

    //  Loop until delimeter is found or end of string
    while ((end = str.find(delim, start)) != string::npos)
    {
        //  Add token to vector
        string token = str.substr(start, end - start);
        tokens.push_back(token);

        start = end + delim.length();
    }

    return tokens;
}

//  Measure elapsed time in a given time domain
void kward_api::elapsed(Time start, cstr domain)
{
    //  Elapsed time
    long long elapsed;

    //  Check specified time domain
    if(domain == "us")
    {
        //  Microseconds
        elapsed = chrono::duration_cast<chrono::microseconds>(NOW - start).count();
        printf("\nElapsed time: %ldus", elapsed);
    }
    else if(domain == "ms")
    {
        //  Milliseconds
        elapsed = chrono::duration_cast<chrono::milliseconds>(NOW - start).count();
        printf("\nElapsed time: %ldms", elapsed);
    }
    else if(domain == "s")
    {
        //  Seconds
        elapsed = chrono::duration_cast<chrono::seconds>(NOW - start).count();
        printf("\nElapsed time: %lds", elapsed);
    }
}
