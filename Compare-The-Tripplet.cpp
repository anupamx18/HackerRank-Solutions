#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int Alice_Score=0;
 long long int  Bob_Score=0;
 long long int n=3;
 int i;
 int a[3],b[3];

for(int  i=0;  i<3; i++)
{
    cin>>a[i];
}
for(i=0;i<3;i++)
{
    cin>>b[i];
}


for(i=0;i<3;i++)
{
    if( a[i]> b[i])
    {
         Alice_Score=Alice_Score+1;
    }


    if( a[ i]< b[ i])
    {
         Bob_Score = Bob_Score+1;    
    }  
    if(a[i]==b[i])
    {
      
    } 
   
}
    cout<<Alice_Score<<" " <<Bob_Score;
    return 0;
    
}

