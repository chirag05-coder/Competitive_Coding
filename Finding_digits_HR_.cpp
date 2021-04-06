Link For Ques:
https://www.hackerrank.com/challenges/find-digits/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int temp=n,cnt=0;
    while(n>0)
    {
        int rem=n%10;
        if(rem!=0)
        {
            if(temp%rem==0)
            cnt++;
        }
        n=n/10;
    }
    return cnt;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


