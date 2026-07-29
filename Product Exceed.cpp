#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T){
	    int X,Y;
	    long long int P, moves=0;
	    cin>>X>>Y>>P;
	    while(X*Y<P){
            if(X>=Y){
	        int temp=Y+1;
	        if(temp*X>X*Y){
	            Y++;
	            moves++;
	        }
	        else{
	            X++;
	            moves++;
	        }
            }else{
            int temp=X+1;
	        if(temp*Y>X*Y){
	            X++;
	            moves++;
	        }
	        else{
	            Y++;
	            moves++;
	        }    
            }
	 }
	  cout<<moves<<endl;
	T--;
	}
}
