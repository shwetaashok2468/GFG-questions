using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_map<char,int>hash;
        
        
           hash['I']=1;
           hash['V']=5;
           hash['X']=10;
           hash['L']=50;
           hash['C']=100;
           hash['D']=500;
           hash['M']=1000;
        //V
        //III 
        //CMXIV =  -100+1000+10-1+5 = 914
        int num = 0;
        int i=0;
        while(i<s.length())
        {
          if(hash[s[i]] < hash[s[i+1]])
          {
              num = num - hash[s[i]];
          }else
          {
              num = num + hash[s[i]];
          }
          
          i++;
        }
        cout<<num<<endl;
    }

}
