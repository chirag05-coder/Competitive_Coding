Link For Question:

https://practice.geeksforgeeks.org/problems/sort-the-string-in-descending-order3542/1


#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}
// } Driver Code Ends



string ReverseSort(string str){
    int arr[26]{0};
    for(int i=0;i<str.length();i++)
     {
            arr[str.at(i)-'a']++;
     }
     str.clear();
     for(int i=25;i>=0;i--)
     {
            while(arr[i]>0)
             {
                 str.push_back(i+'a');
                 arr[i]--;
             }
     }
     return str;
    //complete the function here
}
