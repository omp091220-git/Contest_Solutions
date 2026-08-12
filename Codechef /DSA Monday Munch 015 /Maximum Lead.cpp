#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    int player=0,lead=0;
    long long int c1=0, c2=0;
    while(t){
        int temp1, temp2;
        cin>>temp1>>temp2;
        c1=c1+temp1;
        c2=c2+temp2;
        if(c1>c2) {
            int temp=c1-c2;
            if (temp>lead) {
                lead=temp;
                player=1;
            }
        }
        else {
            int temp=c2-c1;
            if (temp>lead) {
                lead=temp;
                player=2;
            }
        }
        t--;
    }
    cout<<player<<" "<<lead;
}
