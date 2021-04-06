Link FOr Ques:

https://www.hackerrank.com/challenges/bigger-is-greater/problem



#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {

 string temp=w;
      int cnt=0;
      for(int i=1;i<temp.size();i++)
      {
          if(temp.at(i-1)>=temp.at(i))
            cnt++;
      }
      next_permutation(w.begin(),w.end());
      
      if(cnt+1==temp.size())
      {
          return "no answer";
      }
      return w;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
