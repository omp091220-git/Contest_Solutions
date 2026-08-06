#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int a,b,c;
        cin>>a>>b>>c;
        long long int count=0; 
        while((a!=b)&&(b!=c)&&(a!=c)){
            if((a>b)&&(a>c)){
                if(b>c){a--;c++;count++;}
                else{a--;b++;count++;}
            }
            if((b>c)&&(b>a)){
                if(a>c){b--;c++;count++;}
                else{b--;a++;count++;}
            }
            if((c>a)&&(c>b)){
                if(a>b){c--;b++;count++;}
                else{c--;a++; count++;}
            }
        }
        cout<<count<<endl;
        t--;
    }
}
