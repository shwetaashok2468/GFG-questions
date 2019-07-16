int max(int x,int y)
{
    return (x>y) ? x:y;
}


int max_path_sum(int ar1[], int ar2[], int m, int n)
{
 
  
    int  result = 0, sum1 = 0, sum2 = 0; 
    int i = 0, j = 0; 
        //2 3 7 10 12
        //1 5 7 8
  
    while (i < m && j < n) 
    { 
        if (ar1[i] < ar2[j])
        {
            sum1 = sum1 + ar1[i];//2 3//5//22
            i++;//2
        }
    
        else if (ar1[i] > ar2[j]) 
        {
            sum2 = sum2 + ar2[j];//1 5 //6 + common(7)==13//8
            j++;//2
        }
           
        else  // intersection
        { 
            
            result = result + max(sum1, sum2); 
  
            sum1 = 0;
            sum2 = 0; 
  
            //more common elements
            while (i < m &&  j < n && ar1[i] == ar2[j]) 
            { 
                result = result + ar1[i]; 
                i++;
                j++; 
            } 
        } 
    } 
  
    // Add remaining elements of ar1[] 
    while (i < m) 
    {
        sum1 = sum1 + ar1[i];
        i++;
    }
    while (j < n)
    {
        sum2 = sum2 + ar2[j];
        j++;
    }
    result = result + max(sum1, sum2); 
  
    return result; 
	
}
