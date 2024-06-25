//
// Created by 27188 on 24-6-13.
//
#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n=0;cin>>n;
    string s;cin>>s;
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    int x=0,y=0;
    for(auto i:s){
        if(i=='E'){
            x++;
        }
        else if(i=='W'){
            x--;
        }
        else if(i=='N'){
            y++;
        }
        else if(i=='S'){
            y--;
        }
    }

    if(x%2!=0||y%2!=0){
        cout<<"NO"<<"\n";
        return;
    }

    string ans;
    for(int i=0;i<n;i++){
        ans += 'R';
    }

    if(x==0&&y==0){
        if(n==2){
            cout<<"NO"<<"\n";
            return;
        }
        else{
            if(s[0]=='W'){
                ans[0]='H';
                ans[s.find('E')] = 'H';
            }
            else if(s[0]=='E'){
                ans[0]='H';
                ans[s.find('W')] = 'H';
            }
            else if(s[0]=='N'){
                ans[0]='H';
                ans[s.find('S')] = 'H';
            }
            else if(s[0]=='S'){
                ans[0]='H';
                ans[s.find('N')] = 'H';
            }
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]=='E'&&x>0){
            ans[i] = 'H';
            x-=2;
        }
        else if(s[i]=='W'&&x<0){
            ans[i] = 'H';
            x+=2;
        }
        else if(s[i]=='N'&&y>0){
            ans[i] = 'H';
            y-=2;
        }
        else if(s[i]=='S'&&y<0){
            ans[i] = 'H';
            y+=2;
        }

    }
    cout<<ans<<"\n";
}

int main() {
    int t = 0; cin >> t;
    while (t--) {
        sol();
    }
}
