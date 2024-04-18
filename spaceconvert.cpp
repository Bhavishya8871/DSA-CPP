#include<iostream>
#include<string.h>
using namespace std;

void convertspace(char ch[],int n){
    int index=0;
    while(ch[index] != '\0'){
        char currchar = ch[index];
        if(currchar=='@'){
            ch[index]=' ';
        }
        index++;
    }
}

 int main()
    {
        char ch[100];

        cin.getline(ch, 100);
        cout << "before" << ch << endl;
        convertspace(ch, 100);
        cout << endl
             << "after" << ch << endl;
    }
