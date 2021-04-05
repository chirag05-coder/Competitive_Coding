Link For Ques:
https://www.hackerrank.com/challenges/recursive-digit-sum/problem




#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int sum=0;
int calc(long long int x,int num)
{
    
        if(x==0)
        {
            if(sum>9)
            {
                num=sum;
                sum=0;
                return calc(num,sum);
            } 
            else
                return sum;
        }
        else {
             sum+=x%10;
            return calc(x/10,0);
        }
       
    
      
}

// Complete the superDigit function below.
int superDigit(string n, int k) {
    long long int sum=0;
    long long int m;
   for(int i=0; i<n.size(); i++){
        sum += n[i] - '0';
    }

    return calc(sum*k,0);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);

    int result = superDigit(n, k);

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
