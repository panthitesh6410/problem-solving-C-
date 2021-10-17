// Infosys Question -

#include<iostream>
using namespace std;
int find_kill(int exp[], int bonus[], int visited[], int n, int power){
    int index = -1;
    int max_bonus = 0;
    for(int i=0;i<n;i++){
        if(visited[i] == 0){
            if(exp[i] <= power and bonus[i] >= max_bonus){
                index = i;
                max_bonus = bonus[i];
            }
        }
    }
    return index;
}
int main(int argc, const char** argv) {
    int n, power;
    cin>>n>>power;
    int exp[n], bonus[n], visited[n]={0};
    for(int i=0;i<n;i++)
        cin>>exp[i];
    for(int i=0;i<n;i++)
        cin>>bonus[i];
    int count = 0, c = n;
    while(c--){
        int index_of_kill = find_kill(exp, bonus, visited, n, power);
        // cout<<"index = "<<index_of_kill<<"\n";
        if (index_of_kill != -1){
            visited[index_of_kill] = 1;
            power += bonus[index_of_kill];
            count++;
        }
        // cout<<"-----------------------------"<<"\n";
    }
    cout<<count;
    return 0;
}