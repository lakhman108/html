#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int n;
	 cin>>n;
	 map<char,int> m1,m2;
     vector<pair<char,int> > p1,p2;
     for (int i = 0; i < n; i++)
     {
        char x;cin>>x;
        m1[x]++;
     }
     for (int i = 0; i < n; i++)
     {
        char x;cin>>x;
        m2[x]++;
     }
      for(auto &value:m1)
      {
       p1.push_back(make_pair(value.first,value.second));
      } 
      for(auto &value:m2)
      {
       p2.push_back(make_pair(value.first,value.second));
      } 
	 if (p2[0].second>=1&&p2[1].second>=1)
     {
        if (p1[0].second>1&&p1[1].second>1)
     {
       cout<<"YES"<<endl;
       continue;
     }
     else
     {
        cout<<"NO"<<endl;
     }
     
     }
    
     if (m2.size()==1)
     {
      
       if (p1[0].first==p2[0].first&&p1[0].second>1||(p1[1].first==p2[0].first&&p1[1].second>1))
       {
        cout<<"YES"<<endl;
        continue;
       }
       else
       {
        cout<<"NO"<<endl;
        continue;
       }
     }

     
     
     
	}
	return 0;
}
