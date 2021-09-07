Link for Ques:
https://codeforces.com/contest/1415/problem/A




int main()
{    fastio;

     lli t;
    cin>>t;
    while(t--)
    {
          int n,m,r,c;
          cin>>n>>m>>r>>c;
          priority_queue<int>pq;
          pq.push((abs(1-r)+abs(1-c)));
          pq.push((abs(1-r)+abs(m-c)));
          pq.push((abs(n-r)+abs(1-c)));
          pq.push((abs(n-r)+abs(m-c)));
          
          cout<<pq.top()<<endl;
          
          
    }
    
  

     
      
}
