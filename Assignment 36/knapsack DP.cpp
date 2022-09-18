#include <bits/stdc++.h>
 using namespace std;

map<string, int> dp;

int solution(int k, vector<int> arr, int curr){
    
    if(k == 0)
        return 0;
    
    string key = to_string(k) + '-' + to_string(arr[curr]);
    
    if(dp.find(key) != dp.end())
        return dp[key];

    int mx = INT_MIN;
    int len = arr.size();
    for(int i=curr; i<len; i++){
        if(k - arr[i] >= 0){
            int knap = solution(k-arr[i], arr, i) + arr[i];
            mx = knap > mx ? knap : mx;
        }else{
            mx = 0 > mx ? 0 : mx;
        }
    }

  
    dp[key] = mx;
    return mx;
}


int unboundedKnapsack(int k, vector<int> arr) {
    return solution(k, arr, 0);
}


int main() 
{ 
ofstream fout(getenv("OUTPUT_PATH"));

int t;
cin >> t;
 while(t--) {
int n, k;
cin>>n>>k;
vector<int> arr(n);

for (int i = 0; i < n; i++) {
cin>>arr[i];
}

int result = unboundedKnapsack(k, arr);
fout << result << "\n"; }
fout.close();

return 0;}
