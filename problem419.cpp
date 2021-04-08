#include<iostream>
using namespace std;
void findFirstMatch(string text, string pattern){
    if(text.length() < pattern.length())
        cout<<"Invalid input";
    else if(text.find(pattern)>=0 && text.find(pattern)<text.length())
        cout<<text.find(pattern);
    else
        cout<<"No match found";
}
int main(){
    string text="three big apple trees", pattern="apple tree";
    findFirstMatch(text, pattern);
    return 0;
}