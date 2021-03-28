// Harold is a kidnapper who wrote a ransom note, but now he is worried it will be traced back to him through his handwriting. He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica of his ransom note. The words in his note are case-sensitive and he must use only whole words available in the magazine. He cannot use substrings or concatenation to create the words he needs.

// Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly using whole words from the magazine; otherwise, print No.

// Example
//  = "attack at dawn"  = "Attack at dawn"

// The magazine has all the right words, but there is a case mismatch. The answer is .

// Function Description

// Complete the checkMagazine function in the editor below. It must print  if the note can be formed using the magazine, or .

// checkMagazine has the following parameters:

// string magazine[m]: the words in the magazine
// string note[n]: the words in the ransom note
// Prints

// string: either  or , no return value is expected
// Input Format

// The first line contains two space-separated integers,  and , the numbers of words in the  and the , respectively.
// The second line contains  space-separated strings, each .
// The third line contains  space-separated strings, each .

// Constraints

// .
// Each word consists of English alphabetic letters (i.e.,  to  and  to ).
// Sample Input 0

// 6 4
// give me one grand today night
// give one grand today
// Sample Output 0

// Yes
// Sample Input 1

// 6 5
// two times three is not four
// two times two is four
// Sample Output 1

// No
// Explanation 1

// 'two' only occurs once in the magazine.

// Sample Input 2

// 7 4
// ive got a lovely bunch of coconuts
// ive got some coconuts
// Sample Output 2

// No


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {
       unordered_map<string,int>umap;
       for(int i=0;i<magazine.size();i++)
       {
             umap[magazine[i]]++;
       }
       int flag=0;
       for(int i=0;i<note.size();i++)
       {
               if(umap.find(note[i])!=umap.end())
                  {       if(umap[note[i]]==0)
                             {    flag++;
                                 cout<<"No"<<endl;
                                 break;
                             }
                             else {
                             
                             
                         umap[note[i]]--;
                             }
                  }
                  else {
                      flag++;
                   cout<<"No"<<endl;
                   break;
                  }
       }
       if(flag==0)
       cout<<"Yes"<<endl;


}

int main()
{
    string mn_temp;
    getline(cin, mn_temp);

    vector<string> mn = split_string(mn_temp);

    int m = stoi(mn[0]);

    int n = stoi(mn[1]);

    string magazine_temp_temp;
    getline(cin, magazine_temp_temp);

    vector<string> magazine_temp = split_string(magazine_temp_temp);

    vector<string> magazine(m);

    for (int i = 0; i < m; i++) {
        string magazine_item = magazine_temp[i];

        magazine[i] = magazine_item;
    }

    string note_temp_temp;
    getline(cin, note_temp_temp);

    vector<string> note_temp = split_string(note_temp_temp);

    vector<string> note(n);

    for (int i = 0; i < n; i++) {
        string note_item = note_temp[i];

        note[i] = note_item;
    }

    checkMagazine(magazine, note);

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

