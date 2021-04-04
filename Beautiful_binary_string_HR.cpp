Link for Ques:

https://www.hackerrank.com/challenges/beautiful-binary-string/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string str) {
    size_t found=str.find("010");
    if(found==string::npos)
      return 0;
      int cnt=0;
      while(found!=string::npos)
      {
          str.at(found+2)='1';
          cnt++;
          found=str.find("010",found+1);
          
          
      }
      return cnt;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
