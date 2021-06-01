//  May Cook-Off 2021 Division 3  »  Marathon  

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int D, d, A, B, C;
        cin>>D>>d>>A>>B>>C;
        int total_dist_cover = d*D;
        if(total_dist_cover < 10)
            cout<<0<<"\n";
        else if(total_dist_cover >= 10 && total_dist_cover < 21)
            cout<<A<<"\n";
        else if(total_dist_cover >= 21 && total_dist_cover < 42)
            cout<<B<<"\n";
        else
            cout<<C<<"\n";
    }
	return 0;
}
