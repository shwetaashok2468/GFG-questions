/*This is a function problem.You only need to complete the function given below*/
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
    int count[26] = {0};
    
    for(int i=0; arr[i]!='\0'; i++)
    {
        count[arr[i]-'a']++;
    }
    
    int k=0;
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            arr[k]=(char)('a'+i);
            k++;
        }
    }
}
