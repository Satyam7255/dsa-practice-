int Solution::solve(vector<int> &A, int B) {
    int rightSum=0;
    int leftSum=0;
    int n=A.size();
    for(int i=n-B;i<A.size();i++){
        rightSum+=A[i];
    }
    int ans=rightSum;
    for(int i=0;i<B;i++){
        leftSum+=A[i];
        rightSum-=A[n-B+i];
        ans=max(ans,leftSum+rightSum);
    }
    return ans;
}
