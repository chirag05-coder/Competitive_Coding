Link For Ques:

https://www.hackerrank.com/challenges/funny-string/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    string temp(s);
    reverse(temp.begin(),temp.end());
    vector<int>a,b;
     for(int i=0;i<s.length()-1;i++)
     {
         a.push_back(abs(s.at(i+1)-s.at(i)));
     }
     for(int i=0;i<temp.length()-1;i++)
     {
           b.push_back(abs(temp.at(i+1)-temp.at(i)));
     }
     if(a==b)
     return  "Funny";
     else {
     return "Not Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
