#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
    MyString str1;
    MyString str2("Hello, World!");
    MyString str3(50);

    str1.output();
    str2.output();
    str3.output();

    str1.MyStrcpy(str2);
    str1.output();

    cout << "Substring found: " << str2.MyStrStr("World") << endl;
    cout << "Character 'o' found at index: " << str2.MyChr('o') << endl;
    cout << "Length of str2: " << str2.MyStrLen() << endl;

    str1.MyStrCat(str2);
    str1.output();

    str1.MyDelChr('o');
    str1.output();

    cout << "Comparison result: " << str1.MyStrCmp(str2) << endl;

    MyString str4 = str1 + str2;
    str4.output();

    ++str4;
    str4.output();

    --str4;
    str4.output();

    cout << "Number of MyString objects: " << MyString::getObjectCount() << endl;

    return 0;
}