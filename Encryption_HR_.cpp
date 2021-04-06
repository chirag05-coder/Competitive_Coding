Link FOr Ques:
https://www.hackerrank.com/challenges/encryption/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

string res;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)==' ')
        {
            s.erase(i,1);
        }
    }
    int len=s.size();
    
    int row=floor(sqrt(len));
   
    int col=ceil(sqrt(len));
   
    while(row*col<len)
    {
        if(row<col)
        row++;
        else {
        col++;
        }
        
    }
    int k=0;
    int flag=0;
    char arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(k>=len)
            { flag++;
             break;
            }
            arr[i][j]=s.at(k++);
           
        }
        if(flag)
        break;
    }
   
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(arr[j][i]>='a' and arr[j][i]<='z')
            res.push_back(arr[j][i]);
        }
        res.push_back(' ');
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
