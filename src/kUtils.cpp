#include "../include/kUtils.h"
#include "../include/kTypes.h"

using namespace kapi::types;

//  Remove blanks from vector of strings
vector<string> kapi::removeBlanks(vector<string> strVect)
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
vector<string> kapi::tokenize(string str, string delim)
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
void kapi::elapsed(Time start, string domain)
{
    //  Elapsed time
    long long elapsed;

    //  Check specified time domain
    if(domain == "ns")
    {
        //  Nanoseconds
        elapsed = TIME_CAST(NOW - start, times::ns);
        printf("\nElapsed time: %ldns", elapsed);
    }
    else if(domain == "us")
    {
        //  Microseconds
        elapsed = TIME_CAST(NOW - start, times::us);
        printf("\nElapsed time: %ldus", elapsed);
    }
    else if(domain == "ms")
    {
        //  Milliseconds
        elapsed = TIME_CAST(NOW - start, times::ms);
        printf("\nElapsed time: %ldms", elapsed);
    }
    else if(domain == "s")
    {
        //  Seconds
        TIME_CAST(NOW - start, times::seconds);
        printf("\nElapsed time: %lds", elapsed);
    }
    else {
        //  Unknown input
        printf("\nError '%s' is not a recognized/supported domain type.\n", domain);
    }
}
