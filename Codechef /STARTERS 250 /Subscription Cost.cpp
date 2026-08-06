#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T){
	    int N,X,Y;
	    long long int sum=0;
	    cin>>N>>X>>Y;
	    if(N<=3){
	        sum=N*X;
	    }else{
	        sum=X*3+(N-3)*Y;
	    }
	    cout<<sum<<endl;
	    T--;
	}
}
