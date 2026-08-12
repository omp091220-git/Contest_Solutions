#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int N,M,X;
	    cin>>N>>M>>X;
	    int temp=(X+M-1)/M;
	    int res=min(temp,N-temp+1);
	    cout<<res<<endl;
	    t--;
	}
}
