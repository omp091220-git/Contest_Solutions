#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n,k;
    cin >>n>>k;
    cin >> str;
    int count=0;       
    int tempcount=k;   
    for(int i=0;i<k;i++){
        if(str[i]=='W'){
            count++;
        }
    }
    tempcount = count;
    for(int i=k; i<n; i++){
        if(str[i]=='W'){
            count++;
        }
        if(str[i-k]=='W'){
            count--;
        }
        tempcount=min(tempcount,count);
    }
    cout<<tempcount;
    return 0;
}
