#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n],s=0,j=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++)cin>>a[i];int i=0;
        for(int i=0;i<n;i++){
            
            s+=a[i];
            if(s==k)
            {
                int v=i-j+1;if(v>max)max=v;
                
            }
            else if(k<s)
            {
                while (s>k) {
				s-= a[j];
                j++;
                if(s==k)if(max<(i-j+1))max=i-j+1;
                           }
            }
        }
            
         
        cout<<max<<endl;
        
            
    }
}
