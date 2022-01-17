#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    float A[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=A[i];
    }
    float mean=sum/n;
    sort(A,A+n);
    cout<<mean<<endl;
    float x=A[n/2],y=A[n/2-1];
    float median=(x+y)/2;
    cout<<median<<endl;
int number = A[0];
int mode = number;
int count = 1;
int countMode = 1;

for (int i=1; i<n; i++)
{
      if (A[i] == number) 
      { 
         ++count;
      }
      else
      { 
            if (count > countMode) 
            {
                  countMode = count; 
                  mode = number;
            }
           count = 1; 
           number = A[i];
  }
}

cout << mode << endl;
return 0;
}
