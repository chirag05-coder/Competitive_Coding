Link For Ques:
https://practice.geeksforgeeks.org/problems/the-fibonacci-prime-number1150/1

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	
int fibonacciPrime(string n)
{
   if(n=="2" or n=="3" or n=="5" or n=="13" or n=="89" or n=="233" or n=="1597" or n=="28657" or n=="514229" or n=="433494437" or n=="2971215073" or n=="99194853094755497" or n=="1066340417491710595814572169" or n=="19134702400093278081449423917" or n=="475420437734698220747368027166749382927701417016557193662268716376935476241")
   {
        return 1;
   }
   else
   return 0;
}
};

// { Driver Code Starts.


int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string N;
   		cin >> N;

   		Solution ob;
    
   		cout << ob.fibonacciPrime(N) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
