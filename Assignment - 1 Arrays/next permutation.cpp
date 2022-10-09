lass Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size();
        if(n==1) return;
        multiset<int>S;
        
        S.insert(A[n-1]);
        bool p=1;
        for(int i=n-2;i>=0;i--){
            S.insert(A[i]);
            auto it=S.upper_bound(A[i]); 
            
            if(it!=S.end()){
                A[i]=*it;
                S.erase(it);
                it=S.begin();
                for(int j=i+1;j<n;j++){
                    A[j]=*it;
                    it++;
                }
                p=0;
                break;
            }
        }
        if(p) reverse(A.begin(),A.end());
    }
};
