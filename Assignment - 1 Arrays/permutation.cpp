vector<int> Solution::findPerm(const string s, int n) {

    
    vector<int>A={1};
    int Max=1, Min=1;  
    for(int i=0;i<n-1;i++){
        if(s[i]=='I'){
            Max++;
            A.push_back(Max);
        }
        else{
            Min--;
            A.push_back(Min);
        }
    }
    int x = 1-Min; //what needs to be added in Min to make it 1
    
    for(int i=0;i<n;i++){
        A[i]+=x;
    }
    return A;
}
