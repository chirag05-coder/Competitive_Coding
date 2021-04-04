Link for Ques:

https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    string str="hackerrank";
    int j=0;
    for(int i=0;i<s.length();i++)
    {      if(str.at(j)==s.at(i))
                 {
                     j++;
                 }
            if(j==str.length()) 
                  break;    
        
    }
    if(j==str.length())
      return "YES";
      else {
      return "NO";
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

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
