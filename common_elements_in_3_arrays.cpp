unordered_map<int,int>uA;
unordered_map<int,int>uB;
unordered_map<int,int>uC;
vector<int>v;
for(int i=0;i<n1;i++)
{ uA[A[i]]++;

}
for(int i=0;i<n2;i++)
{ uB[B[i]]++;

}
for(int i=0;i<n3;i++)
{
uC[C[i]]++;
}
for(int i=0;i<n1;i++)
{
if(uA[A[i]]==1)
{
if(binary_search(B,B+n2,A[i]) and binary_search(C,C+n3,A[i]))
v.push_back(A[i]);
uA.erase(A[i]);
}
else if(uA[A[i]]>1)
{
if(binary_search(B,B+n2,A[i]) and binary_search(C,C+n3,A[i]))
{
 int temp=min(uA[A[i]],uB[A[i]]);
    temp=min(temp,uC[A[i]]);
    while(temp--)
    v.push_back(A[i]);
    uA.erase(A[i]);

}

}

}
return v;
