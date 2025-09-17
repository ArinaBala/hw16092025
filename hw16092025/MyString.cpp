#include "MyString.h"
#include <cstring>   

using namespace std;


MyString::MyString()
{
    length = 80;
    str = new char[length + 1] {};
}

MyString::MyString(int size)
{
    length = size;
    str = new char[length + 1] {};
}

MyString::MyString(const char* st)
{
    length = strlen(st);
    str = new char[length + 1];
    strcpy_s(str, length + 1, st);
}

MyString::MyString(const MyString& obj)
{
    length = obj.length;
    str = new char[length + 1];
    strcpy_s(str, length + 1, obj.str);
}

MyString::~MyString()
{
    delete[] str;
}


void MyString::Print()
{
    cout << str << endl;
}


bool MyString::MyStrStr(const char* s)
{
    return strstr(str, s) != nullptr;
}


void MyString::MyStrcpy(MyString& obj)
{
    delete[] obj.str;
    obj.length = length;
    obj.str = new char[length + 1];
    strcpy_s(obj.str, length + 1, str);
}






int MyString::MyChr(char c)
{
    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
        return 0;
    }
}

int MyString::MyStrLen()
{
    return length;
}


void MyString::MyStrCat(MyString& b)
{
    char* temp = new char[length + b.length + 1];
    strcpy_s(temp, length + 1, str);
    strcat_s(temp, length + b.length + 1, b.str);
    delete[] str;
    str = temp;
    length += b.length;
}

void MyString::MyDelChr(char c)
{
    int newLen = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != c)
        {
            str[newLen++] = str[i];
        }
    }
    str[newLen] = '\0';
    length = newLen;
}

int MyString::MyStrCmp(MyString& b)
{
    int res = strcmp(str, b.str);

    if (res < 0)
    {
        return -1;
    }
    if (res > 0)
    {
        return 1;
    }
    return 0;
}