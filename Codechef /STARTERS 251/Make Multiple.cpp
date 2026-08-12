#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int count=0;
	    while(n%3!=0){
	        int temp1,temp2;
	        temp1=n+1;
	        temp2=((n/5)+1)*5;
	        if((temp1%3)<(temp2%3)){
	            n=temp1;
	            count++;
	        }else{
	            n=temp2;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    t--;
	}
}
