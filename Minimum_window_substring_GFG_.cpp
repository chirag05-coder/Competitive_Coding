Link for Ques:
https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1#





 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
       if(p.length()>s.length())
       {
             return "-1";
       }
        int FP[256]{0};
        int FS[256]{0};
        for(int i=0;i<p.length();i++)
        {
              FP[p[i]]++;
        }
        
        int cnt=0,start=0,mini=INT_MAX,start_window=-1;
        for(int i=0;i<s.length();i++)
        {     char ch=s.at(i);
               FS[ch]++;
               
              if(FP[ch]!=0 and FS[ch]<=FP[ch])
                 {
                      cnt++;
                 }
                if(cnt==p.length())
                {     char temp=s[start];
                    
                     while(FP[temp]==0 or FS[temp]>FP[temp])
                        {    FS[temp]--;
                             start++;
                             temp=s[start];
                             
                        }
                        int window=i-start+1;
                        if(window<mini)
                        {
                            mini=window;
                            start_window=start;
                        }
                       // cnt=0;
                      
                      
                }
             
              
        }
        if(start_window==-1)
           return "-1";
        string str;
         str=s.substr(start_window,mini);
        return str;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
