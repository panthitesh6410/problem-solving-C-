// Leetcode - Length of Last Word

#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    if(s.empty())
        return 0;
    else if(s.size() == 1){
        if(s[0] == 32)
            return 0;
        else
            return 1;
    }
    else{
        // check if s has all spaces -
        int spaces = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 32)
                spaces++;
        }
        if(spaces == s.size())
            return 0;

        unsigned int count = 0;
        if(s[s.size()-1]!=32){
            for(int i=s.size()-1;i>=0;i--){
                if(s[i] == 32)
                    break;  
                count++; 
            }
        }
        else{
            int i=s.size()-1;
            while(s[i] == 32)
                i--;
            for(int j=i;j>=0;j--){
                if(s[j] == 32)
                    break;  
                count++; 
            }
        }
        return count;
    }
}

int main(){
    string s;
    getline(cin, s);
    cout<<lengthOfLastWord(s);
    return 0;
}

