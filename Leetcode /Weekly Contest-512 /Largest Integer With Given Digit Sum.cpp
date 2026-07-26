class Solution {
public:
    int largestInteger(int n, int s) {
        vector<int> res;
        int ans=0;
        if(s>9*n){return -1;}
        else{
            while(n!=0){
                if(9<=s){
                    res.push_back(9);
                    n--;
                    s=s-9;
                }
                else{
                    res.push_back(s);
                    n--;
                    s=0;
                }
            }
        }
        for(int i=0; i<res.size(); i++){
            ans=ans*10+res[i];
        }
        return ans;
    }
};
