Link for Ques:

https://www.hackerrank.com/challenges/richie-rich/problem


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string str, int n, int k) {
    string palin = str;
 
   
    int l = 0;
    int r = str.length() - 1;
    while (l < r) {
        if (str[l] != str[r]) 
        {
            palin[l] = palin[r] = max(str[l], str[r]);
            k--;
        }
        l++;
        r--;
    }
 
    if (k < 0)
        return "-1";
 
    l = 0;
    r = str.length() - 1;
 
    while (l <= r)
     {
       
        if (l == r)
         {
            if (k > 0)
                palin[l] = '9';
        }
        if (palin[l] < '9')
         {
           
            if (k >= 2 and palin[l] == str[l] and palin[r] == str[r]) 
            {
                k -= 2;
                palin[l] = palin[r] = '9';
            }
 

            else if (k >= 1 and (palin[l] != str[l] or palin[r] != str[r]))
             {
                k--;
                palin[l] = palin[r] = '9';
            }
        }
        l++;
        r--;
    }
 
    return palin;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string s;
    getline(cin, s);

    string result = highestValuePalindrome(s, n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
