#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
long long a[10000],i,j,f,g,h,l,x;
while(cin>>x)
    {
    if(x==0) return 0;
    f=1;
    while(1)
        {
        memset(a,0,sizeof(a));
        f++;
        g=f;
        h=g;
        l=x;
        while(1)
            {
            for(j=1;j<=x;j++)
                {
                if(h==g && a[j]==0){
                        a[j]=1;
                        h=1;
                        l--;
                        }
                else if(a[j]==0)h++;
                if(l==1 || a[2]==1) break;
                }
            if(l==1 || a[2]==1) break;
            }
        if(a[2]==1) continue;
        else break;
        }
    cout<<f<<endl;
    }
return 0;
}
