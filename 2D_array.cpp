#include <iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;
int main (){    

int i,k,j,n;
cin>>n;
int x[n][n];
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>x[i][j];

cout<<endl;

for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
        for(k=j+1;k<n;k++)
            if(x[i][j]>x[i][k])
            {
              swap(a[i][j],a[i][k]);
            }           

for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        cout<<x[i][j]<<"\t";
        cout<<endl;      
    }


cout<<endl;
return 0;
}
