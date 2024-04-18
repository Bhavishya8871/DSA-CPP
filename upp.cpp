#include <iostream>
#include <string.h>
using namespace std;

void convertUpper(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currchar = ch[index];
        if (currchar >= 'a' && currchar <= 'z')
        {
            ch[index] = currchar - 'a' + 'A';
        }
        index++;
    }
}

    int main()
    {
        char ch[100];

        cin.getline(ch, 100);
        cout << "before" << ch << endl;
        convertUpper(ch, 100);
        cout << endl
             << "after" << ch << endl;
    }