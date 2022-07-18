int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    
    int t=0;
    int y1 = a.size();
    

for(int i =0; i<y1-1; i++){
    if(abs(a[i]-a[i+1])<abs(b[i]-b[i+1])){
        t=t+abs(b[i]-b[i+1]);
        
    }
    else{
        t=t+abs(a[i]-a[i+1]);
    }
}
return t;
}
