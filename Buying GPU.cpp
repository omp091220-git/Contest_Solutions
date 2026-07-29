#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int res=0,income=0;
	    if(Y==Z || Z<Y){cout<<-1<<endl;}
	    else{
	        while(X>income){
	            X=X+Y;
	            income=income+Z;
	            res++;
	        }
	    cout<<res<<endl;
	    }
	    T--;
	}
}
