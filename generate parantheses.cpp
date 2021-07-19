Link for Ques:
https://leetcode.com/problems/generate-parentheses/



class Solution {
public:
    void generate_brackets(string out,int n,int idx,int open,int close,vector<string>&v)
{         if(idx==2*n)
      {     v.push_back(out);
              return;
	  }
	  if(open<n)
	  {   out[idx]='(';
	      generate_brackets(out,n,idx+1,open+1,close,v);
	  }
	  if(close<open)
	  {   out[idx]=')';
	    generate_brackets(out,n,idx+1,open,close+1,v);
	  }
}
    vector<string> generateParenthesis(int n) {
        string out(2*n,' ');
        vector<string>v;
        
        generate_brackets(out,n,0,0,0,v);
        return v;
        
        
    }
};
