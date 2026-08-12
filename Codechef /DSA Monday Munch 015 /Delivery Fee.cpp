#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int A,B,K;
    cin>>A>>B>>K;
    long long int sum=0;
    if(A>=K){
        sum=A;
    }else{
        sum=A+B;
    }
    cout<<sum;
}
