//
// Created by ᕕ(◠ڼ◠)ᕗ on 24-7-20.
//


#include<bits/stdc++.h>

#define ll long long
using namespace std;
const double eps = 1e-5;

void sol() {
    int n,m;cin>>n>>m;
    m += 1;
    vector<double> v(n);
    double l=0,r=1e5;
    for(double& i:v){
        cin>>i;
        i = i*i*M_PI;
        r = min(r,i);
    }

    auto check = [&](double mid){
        int t=0;
        for(double i:v){
            t += (int)(i/mid);
        }
        return t>=m;
    };

    while(r-l>eps){
        double mid = l + (r-l)/2;
        if(check(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout<<fixed<<setprecision(4)<<l<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        sol();
    }
}