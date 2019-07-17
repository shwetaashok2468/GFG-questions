
#include <iostream>
using namespace std;
void reverse(int start,int length,char array[])
{
             for (int k = start,  j = length - 1; k < j; k++, j--)
            {
                int c;
                c = array[k];
                array[k] = array[j];
                array[j] = c;
            }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char array[2001];
        cin>>array;
        
       // char array[] = "Welcome to GeeksforGeeks";
        int start = 0; 
        
        int length;
        for( length=0; array[length]!='\0'; length++);
        
        for(int i=0; array[i]!='\0'; i++)
        {
            if(array[i]=='.')//i=7,10
            {
                reverse(start,i,array);//(8,3)
                
               start = i+1; //8
            }
        }
    
    reverse(start,length,array);
    reverse(0,length,array);
    cout<<array<<endl;
        
    }
    
    
}
