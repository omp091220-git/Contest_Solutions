#include <bits/stdc++.h>
using namespace std;

int main() {
	int L,R;
	cin>>L>>R;
	int n=0;
	for(int i=L; i<=R; i++){
	    if(i%2==0){
	        n=1;
	        cout<<"Yes";
	        break;
	    }
	}
	if(n!=1){
	    cout<<"No";
	}
}
