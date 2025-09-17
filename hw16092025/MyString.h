#pragma once
#include <iostream>

class MyString
{
    char* str;
    int length;

public:
    MyString();                        
    MyString(int size);               
    MyString(const char* st);          
    MyString(const MyString& obj);     
    ~MyString();                       

    void Print();                      
    bool MyStrStr(const char* s);     
    void MyStrcpy(MyString& obj);      
    int MyChr(char c);                
    int MyStrLen();                   
    void MyStrCat(MyString& b);        
    void MyDelChr(char c);            
    int MyStrCmp(MyString& b);         
};
