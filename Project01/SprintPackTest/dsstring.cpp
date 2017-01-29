#include "dsstring.h"

DSString::DSString()
{
    data = nullptr;
}

DSString::DSString(const char* arg)
{
    data = new char[strlen(arg) + 1];
    strcpy(data, arg);
}

DSString::DSString(const DSString& arg)
{
    if (arg.data != nullptr)
    {
        data = new char [strlen(arg.data) + 1];
        strcpy(data, arg.data);
    }
}

DSString& DSString::operator=(const char* arg)
{
    DSString temp(arg);
    *this = temp;
    return *this;
}

DSString& DSString::operator= (const DSString& arg)
{
    if (this != &arg)
    {
        delete [] data;
        data = new char [strlen(arg.data) + 1];
        strcpy(data, arg.data);
    }
    return *this;
}

bool DSString::operator==(const DSString& arg)
{
    return strcmp(data, arg.data) == 0;
}

bool DSString::operator==(const char* arg)
{
    return strcmp(data, arg) == 0;
}

DSString::~DSString ()
{
    if (data != nullptr)
        delete [] data;
}

std::ostream& operator<< (std::ostream& out, const DSString& arg)
{
    out << arg.data;
    return out;
}
