int Solution::solve(int n, vector<int> &A) {
    long long sum=0;
    for(int a:A) sum+=1ll*a;
    if(sum%3!=0) return 0;
    int y=0; 
    long long x=0;
    int ans=0;
    for(int i=0;i<A.size()-1;i++){
        x+=1ll*A[i];
        if(x==2ll*sum/3){
            ans+=y;
        }
        if(x==sum/3){
            y++;
        }
    }
    return ans;
}
