/*
Given an array of 0's and 1's your task is to complete the function maxLen which returns size of the largest sub array with equal number of 0's and 1's. 
*/




int maxLen(int arr[], int n)
{
    
    unordered_map<int,int>hash;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
    }
    
    int sum =0;
    
    int curr_sum =0;
    
    int ans = 0;
    
    
    for(int i=0; i<n; i++)
    {
        curr_sum = curr_sum + arr[i];
        
        if(curr_sum == 0)
        {
          ans = max(ans,i+1);
        }
        
        if(hash.find(curr_sum)!=hash.end())
        {
            ans = max(ans,i-hash[curr_sum]);
        }else
        {
            hash[curr_sum]=i;
        }
        
    }
    
    
    return ans;
    
    
//Your code here
}
