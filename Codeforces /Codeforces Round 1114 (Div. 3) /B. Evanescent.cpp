#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<char> temp;
        vector<int> temp1;
        for(int i=0; i<n;){
            int j=i;
            while(j<n&&str[j]==str[i]){j++;}
            temp.push_back(str[i]);
            temp1.push_back(j-i);
            i=j;
        }
        int temp2=temp.size();
        int count=temp2;
        for(int i=1;i<=temp2-2;i++){
            if(temp1[i]==1){
                if(temp[i-1]==temp[i+1]){count=min(count,temp2-2);}
                else {count=min(count,temp2-1);}
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}
