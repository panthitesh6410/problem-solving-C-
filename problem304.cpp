#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		int guess, l=0, r=0;
		for(int i=0;i<m;i++){
			string s;
			getline(cin, s);
			if(s[0] == 'L')
			{
                string temp;
                for(int j=2;j<s.length();j++)
                    temp = temp + s[j];
				r = stoi(temp);
			}
			else{
                string temp;
                for(int j=2;j<s.length();j++)
                    temp = temp + s[j];
				l = stoi(temp);
			}
			guess = r-l+1 - 2;
		}
		if(guess > 0)
			cout<<-1<<endl;
		else
			cout<<guess<<endl;
	}
	return 0;
}