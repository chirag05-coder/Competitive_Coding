Link for ques:
https://www.hackerrank.com/challenges/two-strings/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_map<char,int>umap;
    for(int i=0;i<s1.length();i++)
        umap[s1.at(i)]++;
       
      for(int i=0;i<s2.length();i++)
      {
          if(umap.find(s2.at(i))!=umap.end())
                 return "YES";
      }  
       return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
