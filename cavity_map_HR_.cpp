Link for Ques:
https://www.hackerrank.com/challenges/cavity-map/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    vector<vector<char>>v;
    vector<string>res;
    for(int i=0;i<grid.size();i++)
    {
        std::vector<char> v1;
        for(int j=0;j<grid.size();j++)
        {
              v1.push_back(grid[i].at(j));
        }
        v.push_back(v1);
        v1.clear();
    }
    for(int i=1;i<grid.size()-1;i++)
    {
        for(int j=1;j<grid.size()-1;j++)
        {
            if(v[i-1][j]<v[i][j] and v[i][j+1]<v[i][j] and v[i+1][j]<v[i][j] and v[i][j-1]<v[i][j] )
            {
                  v[i][j]='X';
            }
        }
    }
     for(int i=0;i<grid.size();i++)
    {
        string temp="";
        for(int j=0;j<grid.size();j++)
        {
              temp.push_back(v[i][j]);
        }
        res.push_back(temp);
        temp.clear();
    }
    return res;
    
  


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
