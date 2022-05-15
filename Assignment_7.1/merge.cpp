 merge(vector<int>& v, int s, int m, int e){
    vector<int> b;
	int i=s, j=m+1;
	while (i <= m && j <= e) {
		if (v[i] <= v[j]) {
			b.push_back(v[i]);
			i++;
		}
		else {
			b.push_back(v[j]);
			j++;
		}
	}
	while (i <= m) {
		b.push_back(v[i]);
		i++;
	}
	while (j <= e) {
		b.push_back(v[j]);
		j++;
	}
	for (int i = s; i <= e; ++i)
		v[i] = b[i - s];
}

void MergeSort(vector<int>& v, int s, int e) {
	if (s < e) {
		int mid = (s + e) / 2;
		MergeSort(v, s, mid);
		MergeSort(v, mid + 1, e);
        merge(v,s,mid,e);
	}
}
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      
        MergeSort(nums,0,nums.size()-1);
        return nums;
        
    }
};
