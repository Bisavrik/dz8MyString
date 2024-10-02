#ifndef MYSTRING_H
#define MYSTRING_H

class MyString 
{
private:
    char* str; 
    int length; 
    static int objectCount; 

public:
    MyString();
    MyString(int size);
    MyString(const char* inputStr);
    ~MyString();

    void input();
    void output() const;
    void MyStrcpy(MyString& obj);
    bool MyStrStr(const char* substr);
    int MyChr(char c);
    int MyStrLen() const;
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);

    MyString operator+(const MyString& b);
    MyString& operator++();
    MyString& operator--();

    static int getObjectCount();
};

#endif
