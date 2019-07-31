using namespace std;

int compare(string x,string y)
{
    string xy = x+y;
    string yx = y+x;
    if(xy.compare(yx)>0)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<string>v;
        
        for(int i=0; i<n; i++)
        {
            string x;
          cin>>x;
            v.push_back(x);
        }
        
        sort(v.begin(),v.end(), compare);
        
        
        for(int i=0; i<n; i++)
        {
            cout<<v[i];
        }
        
        cout<<endl;
    }

}
