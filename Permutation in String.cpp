Link for Ques:
https://leetcode.com/problems/permutation-in-string/


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> arr(26,0),v(26,0);
            
        
          for(int i=0;i<s1.length();i++)
          {
              arr[s1.at(i)-'a']++;
               v[s1.at(i)-'a']++;
          }
        
        int i=0,j=0;
        int n=s2.length();
          int cnt=0; 
          while(j<n)
           {
              char ch=s2.at(j);
               
               if(arr[ch-'a']>0)
               {   cnt++;
                   arr[ch-'a']--;
                   if(cnt==1)
                       i=j;
               }
              else if(cnt)
              {    
                  bool flag=true;
                   for(auto it:arr)
                   {
                        if(it>0)
                        {
                            flag=false;
                            arr=v;
                            break;
                        }
                   }
               if(flag)
                   return true;
                  else
                      j=i;
               cnt=0;
                  
              }
              j++;
               
           }
        if(cnt==s1.length())
            return true;
        return false;
       
         
        
        
        
    }
};
