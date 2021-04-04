Link For Ques:
https://www.hackerrank.com/challenges/anagram/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    
    int len=s.size();
     string l(s,0,len/2);
             string r(s,len/2,len);
    if(s.length()&1)
        return -1;
      else {
        set<char>st;
        for(int i=0;i<s.length();i++)
          {
              st.insert(s.at(i));
          }
          if(st.size()==s.size())
             return s.size()/2;
           else if(l==r)
               return 0;
            else {
            
             //cout<<l<<" "<<r<<endl;
             unordered_map<char,int>umap;
             for(int i=0;i<l.length();i++)
                {umap[l.at(i)]++;}
                   for(int i=0;i<r.length();i++)
                   {
                        if(umap.find(r[i])!=umap.end())
                          {
                                 umap[r[i]]--;
                                 if(umap[r[i]]==0)
                                      umap.erase(r[i]);
                          }
                   }
                      int cnt=0;
             for(auto it:umap)
             {
                   cnt+=it.second;
             }
             return cnt;
            }     
      }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
