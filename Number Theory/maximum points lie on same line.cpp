int gcd(int a,int b)
{
    if(b==0)
    return a;
    
    return gcd(b,a%b);
}


int maxPoints(int x[], int y[],int N) 
{
    if(N<=2)
    return N;
    
    map<pair<int,int>,int>slope;
    
    int overlap,vertical;
    int maxp = 0;
    int i=0;
    int j=0;
    int count = 0;
    vector<pair<int,int>>points;
    
    for(int i=0;  i<N; i++)
    {
      points.push_back(make_pair(x[i],y[i]));
      
    }
    
    for(int i=0; i<N; i++)
    {
       maxp = overlap=vertical=0;
       
       for(int j=i+1; j<N; j++)
       {
            if(points[i]==points[j])
            {
                 overlap++;
            }else
            if(points[i].first ==points[j].first )
            {
                vertical++;
            }
            else
            {
                int ys = points[j].second - points[i].second;
                int xs = points[j].first  - points[i].first;
                
                int g = gcd(xs,ys);
                
                ys = ys/g;
                xs = xs/g;
                
                slope[make_pair(ys,xs)]++;
                maxp = max(maxp,slope[make_pair(ys,xs)]);
            }
            
            maxp = max(maxp,vertical);
           
       }
       
       
       count = max(count,maxp+overlap+1);
       slope.clear();
    }
    
     return count;
     
}
