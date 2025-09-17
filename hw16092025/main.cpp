#include "MyString.h"
#include <iostream>
using namespace std;

int main()
{
    
    MyString str1("Alice");
    MyString str2("Bob");

    
    cout << "str1: ";
    str1.Print();
    cout << "str2: ";
    str2.Print();

    
    MyString str3 = str1;
    cout << "str3 (copy of str1): ";
    str3.Print();

    
    if (str1.MyStrStr("li"))
    {
        cout << "'li' found in str1" << endl;
    }
    else
    {
        cout << "'li' not found in str1" << endl;
    }

    if (str2.MyStrStr("xy"))
    {
        cout << "'xy' found in str2" << endl;
    }
    else
    {
        cout << "'xy' not found in str2" << endl;
    }

    
    char ch = 'o';
    int index = str2.MyChr(ch);
    if (index != -1)
    {
        cout << "Character '" << ch << "' found in str2 at index " << index << endl;
    }
    else
    {
        cout << "Character '" << ch << "' not found in str2" << endl;
    }

    
    cout << "Length of str1: " << str1.MyStrLen() << endl;
    cout << "Length of str2: " << str2.MyStrLen() << endl;

    
    str1.MyStrCat(str2);
    cout << "str1 after concatenation with str2: ";
    str1.Print();

    
    str1.MyDelChr('i');
    cout << "str1 after deleting 'i': ";
    str1.Print();

    
    int cmp = str3.MyStrCmp(str2);
    if (cmp == 0)
    {
        cout << "str3 and str2 are equal" << endl;
    }
    else if (cmp < 0)
    {

        cout << "str3 is smaller than str2" << endl;
    }
    else
    {
        cout << "str3 is greater than str2" << endl;
    }

    return 0;
}