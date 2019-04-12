#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = string("string1");
    string s2 = string("string2");
    const char* p1 = &s1[1];
    const char* p2 = &s2[1];
    cout << p1 << p2 <<endl;
    system("pause");
    return 0;
}