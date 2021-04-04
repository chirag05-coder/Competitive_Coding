Link For Question:

https://www.hackerrank.com/challenges/making-anagrams/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
       return 0;
       int cnt=0;
       unordered_map<char,int>umap;
             for(int i=0;i<s1.length();i++)
                {umap[s1.at(i)]++;}
                   for(int i=0;i<s2.length();i++)
                   {
                        if(umap.find(s2[i])!=umap.end())
                          {
                                 umap[s2[i]]--;
                                 if(umap[s2[i]]==0)
                                      umap.erase(s2[i]);
                          }
                          else {
                          cnt++;
                          }
                   }
                   for(auto it:umap)
                   {
                       cnt+=it.second;
                   }
                   return cnt;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
