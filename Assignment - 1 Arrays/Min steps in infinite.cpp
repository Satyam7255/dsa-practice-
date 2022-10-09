int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size()==0) return 0;
    int x=A[0],y=B[0];
    int ans=0;
    for(int i=1;i<A.size();i++) {

        ans+= max(abs(A[i]-x), abs(B[i]-y));
        x=A[i]; y=B[i];
    }
    return ans;
}
