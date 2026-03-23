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

#include<bits/stdc++.h>
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
}
