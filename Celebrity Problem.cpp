// The task is to complete this function
// M[][]: input matrix
// n: size of matrix (n*n)
//0 1 0 
//0 0 0
//0 1 0
//n=3

int knows(int A,int B ,int M[MAX][MAX] )
{
    return M[A][B];
}


int getId(int M[MAX][MAX], int n)
{
    int a = 0; 
    int b = n - 1; 
	 
    while (a < b) 
    { 
        if (knows(a, b, M)) 
            a++; 
        else
            b--; 
    } 
  
    // Check if a is actually 
    // a celebrity or not 
    for (int i = 0; i < n; i++) 
    { 
        // If any person doesn't  
        // know 'a' or 'a' doesn't 
        // know any person, return -1 
        if ( (i != a) && (knows(a, i,M) || !knows(i, a,M)) ) 
            return -1; 
    } 
  
    return a;
    
}

 

