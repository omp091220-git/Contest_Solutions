#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T){
        int X1,Y1,X2,Y2;
        cin>>X1>>Y1>>X2>>Y2;
        if(((X1+Y1)%2)!=((X2+Y2)%2)){cout<<-1<<endl;}
        else if(((X1+Y1)==(X2+Y2)) || ((X1-Y1)==(X2-Y2))){cout<<1<<endl;}
        else{cout<<2<<endl;}
        T--;
    }
}
