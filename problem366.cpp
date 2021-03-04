// Techgig - Stamina Game :

#include<vector>
#include<iostream>
using namespace std;

int main() {
    int n, k, flag = 0;
    cin>>n>>k;
    vector<int> q;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        q.push_back(num);
    }
    while(k--){
        if(q.empty()){
            flag++;
            break;
        }
        else{
            int size = q.size();
            while(q.size()<4){
                for(int i=0;i<size;i++)
                    q.push_back(q[i]);
            }
            int e1, e2, e3, e4;
            e1 = q[0]-1;
            e2 = q[1]-1;
            e3 = q[2]-1;
            e4 = q[3]-1;
            q.erase(q.begin(), q.begin()+4);
            if(e1 > 0)
                q.push_back(e1); 
            if(e2 > 0)
                q.push_back(e2);    
            if(e3 > 0)
                q.push_back(e3);
            if(e4 > 0)
                q.push_back(e4);
        }
    }
    if(flag == 1)
        cout<<-1;
    else
        cout<<q[0];

    return 0;
}