// LeetCode - Text Justification : 
// (Asked In ByteDance)

# include<iostream>
#include<vector>
using namespace std;

vector<int> find_gap_index(string s){
    vector<int> indices; 
    for(int i=0;i<s.length();i++){
        if(isspace(s[i]))
            indices.push_back(i);
    }
    return indices;
}

int count_gaps(string s){
    int count = 0; 
    for(int i=0;i<s.length();i++){
        if(isspace(s[i]))
            count++;
    }
    return count;
}

int main() {
    string arr[] = {"This", "is", "an", "example", "of", "text", "justification"};
    int max_width = 16, ori;
    ori = max_width;
    vector<string> v;
    string temp;
    temp.erase();
    
    // dividing str array into different lines of less than max_len
    for(int i=0;i<7;i++){
        if(arr[i].length() < max_width){
            temp += arr[i];
            temp += " ";
            max_width -= arr[i].length()+1;
        }
        else{
            temp.erase(temp.begin()+temp.size()-1);
            v.push_back(temp);
            temp.erase();
            temp += arr[i];
            temp += " ";
            max_width = ori;
            max_width -= arr[i].length()+1;
        }
        if(i == 7-1){
            temp.erase(temp.begin()+temp.size()-1);
            v.push_back(temp);
        }
    }

    // dealing with remaining space in al line less than max_len 
    for(int i=0;i<v.size();i++){
        if(i == v.size()-1){
            int rem_size = ori - v[i].size();
            for(int j=1;j<=rem_size;j++)
                v[i].insert(v[i].size(), " ");
        }
        else{
            int rem_size = ori - v[i].size();
            int gaps = count_gaps(v[i]);
            cout<<rem_size<<"---"<<gaps<<endl;
            int remaider = rem_size % gaps;
            int quotient = rem_size / gaps;
            vector<int> gaps_indices = find_gap_index(v[i]);
            for(int j=0;j<gaps_indices.size();j++)
                cout<<gaps_indices[j]<<" ";   
            cout<<"\n";
            for(int j=0;j<gaps_indices.size();j++){
                if(j != 0)
                    gaps_indices[j]--;
                for(int k=1;k<=remaider;k++)
                    v[i].insert(gaps_indices[j], " ");
            }  
            if(quotient > 0){
                for(int j=0;j<gaps_indices.size();j++){
                    if(j != 0)
                        gaps_indices[j]--;
                    for(int k=1;k<=quotient;k++)
                        v[i].insert(gaps_indices[j], " "); 
                }
            }
        }
    }    
    cout<<"\nhere\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\n";
    return 0;
}