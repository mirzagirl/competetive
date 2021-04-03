#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   string s;cin>>s;
        int n,k;cin>>k;n=s.size();
        int j=0;map<char,int> m;
        int max=INT_MIN;int i=0;
        for(int i=0;i<n;i++)
        {
            
            m[s[i]]++;
            if(m.size()==k)
            {
                int v=i-j+1;if(v>max)max=v;
            }
            
            else if(k<m.size())
            {
                while (m.size()>k) 
                {
			    	m[s[j]]--;
                    if(m[s[j]]==0)m.erase(s[j]);
                    if(m.size()==k)if(max<(i-j+1))max=i-j+1;
                    j++;
                 }
            }
        }if(max<0)cout<<"-1\n";else
        cout<<max<<endl;
    }
}
