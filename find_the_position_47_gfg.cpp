Link for QUes:
https://practice.geeksforgeeks.org/problems/find-the-position4424/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage2sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#

unsigned long long int findpos(string n);
int main()
{  
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        cin>>a;
        cout << findpos(a)<<endl;
    }
    return 0;
}// } Driver Code Ends


unsigned long long int findpos(string s)
{
   
    unsigned long long pos=0;
   int i=0;
   while(i<s.length())
   {
       switch(s.at(i))
       {
           case '4': pos=(2*pos)+1;
               break;
           case '7': pos=(2*pos)+2;
               break;
       }
       i++;
   }
   return pos;
}
