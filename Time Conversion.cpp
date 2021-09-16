Link for Ques:
https://www.hackerrank.com/contests/hackerrank-internship-challenges/challenges/time-conversion/problem



#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string str) {
    
    
    char ch=str.at(str.size()-2);
    if(ch=='P')
    {
        int num=(str.at(0)-'0')*(10)+(str.at(1)-'0');
        if(num!=12)
        {    num+=12;
        str.at(1)=(char)((num%10) +'0');
        num/=10;
        str.at(0)=(char)((num%10) +'0');
         str.erase(str.size()-2);
         return str;
        }

    }
    else
    {
        int num=(str.at(0)-'0')*(10)+(str.at(1)-'0');
        if(num==12)
        {   
        str.at(1)='0';
        str.at(0)='0';
        str.erase(str.size()-2);
            return str;
        }
    }
    str.erase(str.size()-2);
    return str;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
