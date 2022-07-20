#include <bits/stdc++.h>
class Solution {
public:
    int countPairs(vector<int>& d) {
        
        unordered_map<int,int>map;
        
        int count=0;
        
        for(int i=0; i<d.size(); i++){
            int p=1;
            
            for(int j=0; j<=21; j++){

                if(map.find(p-d[i])!=map.end()){
                    
                    count = count + map[p-d[i]];
                    count = count % 1000000007;
                    
                }
                p=p*2;
            }
            
            map[d[i]]++;
            
        }
        
        return count;
        
    }
};
