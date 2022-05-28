// BY MERGE SORT
void MergeSorted(vector<int>& v, int s, int m, int e) {

	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

void MergeSort(vector<int>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSorted(v, s, m, e);
	}
}

class Solution {
public:
    int findKthLargest(vector<int>& B, int k) {
        MergeSort(B,0,B.size()-1);
        return(B[B.size()-k]);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//BY COUNTING SORT
vector<int>Array_sort(vector<int>&A)
{
    int max = *max_element(A.begin(), A.end());
        int min = *min_element(A.begin(), A.end());
        int range = max - min + 1;
        int n = A.size();
    vector<int>B(range),c(n);
    for(int i=0;i<n;i++)
    {
        B[A[i]-min]++;
    }
    for(int i=1;i<range;i++)
    {
        B[i] +=B[i-1];
    }
    for(int i=0;i<n;i++)
    {
        c[B[A[i]-min]-1]=A[i];
        B[A[i]-min]--;
    }
    return c;
    
}
class Solution {
public:
    int findKthLargest(vector<int>& B, int k) {
        B=Array_sort(B);
        return(B[B.size()-k]);
    }
};

