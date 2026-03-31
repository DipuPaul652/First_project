/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter your age: ";
    int x;
    cin>>x;

    if(x>=18){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You can not vote"<<endl;
    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int found=0;
        if((2*b-c)>0 && (2*b-c)%a==0){
            found=1;
        }
        else if((a+c)%2==0 && ((a+c)/2)%b==0){
            found=1;
        }
        else if((2*b-a)>0 && (2*b-a)%c==0){
            found=1;
        }

        if(found)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

//codeforces 1542A

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int oddc=0;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;

            if(x%2!=0)
            oddc++;
        }
        if(oddc==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n==0){
    cout<<1<<endl;
    return 0;
    }

    int r=n%4;
    if(r==1){
        cout<<8<<endl;
    }
    else if(r==2){
        cout<<4<<endl;
    }
    else if(r==3){
        cout<<2<<endl;
    }
    else {
        cout<<6<<endl;
    }
    
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
      int n;
      cin>>n;

      int count2=0;

      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==2)
        count2++;
      }
      
      if(count2%2!=0){
      cout<<-1<<endl;
      }
      else{
        if(count2>0)
        {
            int need=count2/2;
            int ans =0;

            for(int i=0;i<n;i++){
                if(v[i]==2)
                ans++;

                if(ans==need){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else{
            cout<<1<<endl;
        }
      }

    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

//codeforces 489C

int main()
{
    int m,s;
    cin>>m>>s;

    if(s==0){
        if(m==1){
        cout<<0<<" "<<0<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
        return 0;
    }

    if(s>9*m){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    int sum=s;
    string mx="";

    for(int i=0;i<m;i++){
        int dig=min(9,sum);
        mx+=(dig+'0');
        sum-=dig;
    }

    sum=s;
    string mn(m,0);
    
    for(int i=m-1;i>=0;i--){
        int dig=max(0,sum-9*i);

        if(i==m-1 && dig==0)
        dig=1;

        mn[m-i-1]=dig+'0';
        sum-=dig;
    }


    cout<<mn<<" "<<mx<<endl;

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

//1373B

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int cou1=0,cou0=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            cou0++;
            else
            cou1++;
        }

        int term= min(cou0,cou1);

        if(term%2==0)
        cout<<"NET"<<endl;
        else
        cout<<"DA"<<endl;
    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(n<m){
        cout<<-1<<endl;
        return 0;
    }

    int step=(n+1)/2;

    while(step%m!=0){
        step++;
    }

    if(step<=n){
        cout<<step<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        reverse(s.begin(),s.end());

        for(int i=0;i<s.size();i++){
            if(s[i]=='p')
            cout<<'q';
            else if(s[i]=='q')
            cout<<'p';
            else
            cout<<'w';
        }
        cout<<endl;

    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

//Binary Search

int BS(vector<int> &arr, int ter){
    int st=0,end=arr.size()-1;

    while(st<=end){
        long long mid=(st+end)/2;
        
        if(ter>arr[mid]){
            st=mid+1;
        }
        else if(ter<arr[mid]){
            end=mid-1;
        }
        else
        return mid;
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort(v.begin() , v.end());

    int q;
    cin>>q;
    
    while(q--){
        int x;
        cin>>x;

        int re=BS(v,x);
        if(re==-1)
        cout<<0<<endl;
        else
        cout<<re+1<<endl;
    }
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

//codeforces 706B

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;

        int ans=upper_bound(v.begin(),v.end(),x)- v.begin();

        cout<<ans<<endl;
    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

//codeforces 474B

int main()
{
    int n;
    cin>>n;

    vector<int>v(n),t(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    t[0]=v[0];
    for(int i=1;i<n;i++){
      t[i]=t[i-1]+v[i];
    }

    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;

        int ans=lower_bound(t.begin(),t.end(),x)-t.begin();
        cout<<ans+1<<endl;
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

//codeforces 1371A

int main()
{
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int ans=(x+1)/2;
        cout<<ans<<endl;
    }

    return 0;
}