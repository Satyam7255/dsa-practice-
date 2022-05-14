vector<int> countingSort(vector<int> arr)
 {

  int l=arr.size();
  vector<int> A(l);
  for (int i=0;i<l;i++)
  {
      A[arr[i]]++;
  }
  return A;
  }
