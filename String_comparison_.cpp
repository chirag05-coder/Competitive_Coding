Link for Ques:
https://practice.geeksforgeeks.org/problems/string-comparison5858/1/?category[]=Strings&category[]=Strings&company[]=Microsoft&company[]=Microsoft&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=category[]Stringscompany[]MicrosoftproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Microsoftcategory[]Strings#



#include <bits/stdc++.h>
using namespace std;


int stringComparsion(string s1, string s2);


int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		
   		cout << stringComparsion(s1, s2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends




int stringComparsion(string s1,string s2)
{
    // Your code goes here
    
    if(s1.find("ng")==string::npos and s2.find("ng")==string::npos)
    {
          if(s1>s2)
          return 1;
          
          else if(s1<s2)
           return -1;
           else 
           return 0;
    }
    else
    {    int len=min(s1.length(),s2.length());
          string t1,t2;
          int c=0;
          for(int i=0;i<len-1;i++)
          {
                 if(s1.at(i)=='n')
                  {    t1.push_back('n');
                        c++;
                       if(i+1<len and s1.at(i+1)=='g')
                         {   
                              t1.push_back('g');
                         }
                  }
                  if(s2.at(i)=='n')
                  {    c++;
                      t2.push_back('n');
                      
                      if(i+1<len and s2.at(i+1)=='g')
                      {     
                            t2.push_back('g');
                      }
                  }
                  if(c>=2)
                  {   if(c==2)
                     {
                      if(t1>t2)
                        return 1;
                    else if(t2>t1)
                        return -1;
                        
                     }   
                     c=0;
                  }
                  
                  if(s1.at(i)>s2.at(i))
                      return 1;
                      
                 if(s2.at(i)>s1.at(i))
                    return -1;
                 
                 
          }
          if(s1.substr(len-1)>s2.substr(len-1))
          return 1;
           if(s1.substr(len-1)<s2.substr(len-1))
             return -1;
          
          return 0;
        
        
        
    }
    
     
    
     
}
