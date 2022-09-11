void merge(vector<int>& arr, int l, int m, int r ){
    vector<int> b;
	int i=l, j=m+1;
	while (i <= m && j <= r) {
		if (arr[i] <= arr[j]) {
			b.push_back(arr[i]);
			i++;
		}
		else {
			b.push_back(arr[j]);
			j++;
		}
	}
	while (i <= m) {
		b.push_back(arr[i]);
		i++;
	}
	while (j <= r) {
		b.push_back(arr[j]);
		j++;
	}
	for (int i = l; i <= r; ++i)
		arr[i] = b[i - l];
}

void MergeSort(vector<int>& arr, int l, int r) {
	if (l < r) {
		int mid = (l + r) / 2;
		MergeSort(arr, l, mid);
		MergeSort(arr, mid + 1, l);
        merge(arr,l,mid,r);
	}
}
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      
        MergeSort(nums,0,nums.size()-1);
        return nums;
        
    }
};
