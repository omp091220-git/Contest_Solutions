#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int N;
        cin>>N;
        int sum=0, codd=0;
        for(int i=0;i<N;i++){
            int temp;
            cin>>temp;
            sum=sum+temp;
            if(temp%2!=0){
                codd++;
            }
        }
        if(sum%2==0){
            cout<<sum-codd/2<<endl;
        }else{
            cout<<codd/2<<endl;
        }
        t--;
    }
}
