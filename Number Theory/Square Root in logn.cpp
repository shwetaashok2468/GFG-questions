/*This is a function problem.You only need to complete the function given below*/

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    // Your code goes here 
    
    if(x==0 || x == 1)
    return x;
    
    long long int ans;
    long long int low = 0;
    long long int high = x;
    
    while(low<=high)
    {
        int mid = (low+high)/2;
        
        if(mid == x/mid)
        return mid;
        
        else if(mid < x/mid)
        {
            low = mid+1;
            ans = mid; //for floor value
        }
        else
        {
            
           high = mid-1;
        }
        
    }
    return ans;
}
