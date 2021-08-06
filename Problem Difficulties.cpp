Link for Ques:
https://www.codechef.com/AUG21B/problems/PROBDIFF




int main()
{    fastio;
    
     int t;
     cin>>t;
     while(t--)
     {
         int x;
         set<int>st;
         unordered_map<int,int>umap;
         int flag=0;
         int c=4;
         while(c--)
         {
              cin>>x;
              st.insert(x);
              umap[x]++;
         }
         if(st.size()==4 or st.size()==3)
         {
             cout<<"2"<<endl;
         }
         else if(st.size()==2)
          {
               for(auto it:umap)
               {
                    if(it.second==3)
                     {
                         cout<<"1"<<endl;
                         flag++;
                     }
               }
               if(flag==0)
               cout<<"2"<<endl;
          }
          else
          cout<<"0"<<endl;
         
         
     }

      
}
