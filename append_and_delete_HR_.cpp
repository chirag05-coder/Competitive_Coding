Link for QUes:
https://www.hackerrank.com/challenges/append-and-delete/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    
    while(s.back()==' ')
       s.pop_back();
      while(t.back()==' ')
       t.pop_back();
    while(k)
    { // cout<<k<<" ";
        if(s==t)
         return "Yes";
        
        if(s.empty() and k>=t.length())
           return "Yes";
          if (s.empty())
              {   if(k<t.length())
                  return "No";
              
              }
              //cout<<k<<" ";
        if(t.find(s)!=string::npos)
          {   // cout<<t.length()<<" "<<s.length();
              int x=(t.length()-s.length());
              //cout<<"x"<<x<<" "<<k;
              if(k==x  and (s.at(0)==t.at(0)))
                return "Yes";
          }
          
          s.pop_back();
          k--;
        
    }
    return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
