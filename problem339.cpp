// find occurance of each word in a sentance -

#include<vector>
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector<string> words;
    int i = 0;
    string tmp;
    // convert sentance into vector of words -
    while (i<=s.length()){
        if(s[i] == 32 || i>= s.length()){
            words.push_back(tmp);    
            i++;
            tmp.erase();
        }
        tmp += s[i];
        i++;
    }
    // find frequency of each word and store in count vetor - 
    vector<int> count(words.size());
    for(int i=0;i<words.size();i++)
        count[i] = 0; 
    for(int i=0;i<words.size();i++){
        for(int j=0;j<words.size();j++){
            if(words[i] == words[j])
                count[i]++;
        }
    }
    // removing duplicates from vector of words -
    for(int i=0;i<words.size();i++){
        for(int j=0;j<words.size();j++){
            if(i != j && words[i] == words[j])
                words.erase(words.begin()+j);
        }
    }
    
    for(int i=0;i<words.size();i++)
        cout<<words[i]<<" : "<<count[i]<<endl;
    
    return 0;
}