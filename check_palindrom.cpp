//check given string is palindrom or not
#include<iostream>
using namespace std;
bool F(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return F(i+1,s);
}

int main(){
    string s="MADAM";
    cout<<"give string "<<s<<" is palindrom:"<<F(0,s);

    return 0;
}