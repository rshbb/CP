/*
    Author: Rishabh Saxena
    All the best!!
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define XLL __int128
#define pii pair<int,int>
#define pll pair<LL,LL>
#define vi vector<int>
#define vll vector<LL>
#define MATRIX vector<vector<int>>
#define MATRIXB vector<vector<bool>>
#define MATRIXC vector<vector<char>>
#define MATRIXLL vector<vector<LL>>
#define MATRIX3D vector<vector<vector<int>>>
#define MAX(A,B,C) max(A,max(B,C))
#define MIN(A,B,C) min(A,min(B,C))
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int main(){
    FASTIO;
    int N;
    cin >> N;
    vi ARR(N);
    for(int &i : ARR)
        cin >> i;
    int MaxLen = 0,len = 0;
    for(int i=0;i<N;i++){
        if(ARR[i] != 0){
            len++;
        }
        else{
            MaxLen = max(MaxLen,len);
            len = 0;
        }
    }
    MaxLen = max(MaxLen,len);
    cout<<MaxLen<<'\n';
}
