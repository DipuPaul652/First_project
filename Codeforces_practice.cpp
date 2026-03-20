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

#include<bits/stdc++.h>
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
        else if(((a+c)/2)%2==0 && ((a+c)/2)%b==0){
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
}
