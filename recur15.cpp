#include<iostream>
#include<vector>
using namespace std;

void findSub(string str,string output,int index,vector<string>& ans){
    //base case
    if(index>=str.length()){
        //iska mtlb hai ans already store hai output string mein
        // cout<<"->"<<output<<endl;
        ans.push_back(output);
        return;
    }
    char ch=str[index];

    // exclude
    // findSub(str,output,index+1,ans);

    // include
    // output.push_back(ch);
    // findSub(str,output,index+1,ans);
    

    //include
    output.push_back(ch);
    findSub(str,output,index+1,ans);
    //exclude
    output.pop_back();
    findSub(str,output,index+1,ans);
}

int main(){
    string str="abc";
    string output="";
    int index=0;
    vector<string>ans;
    findSub(str,output,index,ans);

    for(string s: ans){
        cout<<"->"<<s<<endl;
    }
}