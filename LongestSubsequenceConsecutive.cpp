/*
    Input:
2
7
2 6 1 9 4 5 3
7
1 9 3 10 4 20 2

Output:
6
4

Explanation:
Testcase 1:  The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

Testcase2: 1, 2, 3, 4 is the longest consecutive subsequence. */
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  //2 6 1 9 4 5 3
  unordered_map<int,int>map;
  
  for(int i=0; i<n; i++)
  {
      map[arr[i]]++;
  }
  
  int maxSum =0;
  int maxlen;
  
  for(int i=0; i<n; i++)
  {
      if(map.find(arr[i]-1)==map.end()) //arr[i] = 1
      {
          int temp = arr[i];//1
          
          while(map.find(temp)!=map.end())//1 2 3 4 5 6
          {
              temp++;
          }
          
          maxlen = abs(arr[i]-temp); //6-1=5
          
          maxSum = max(maxlen,maxSum);
      }
      
  }
  
  return maxSum;
}
