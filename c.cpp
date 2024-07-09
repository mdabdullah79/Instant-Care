
/*                              >>>>>>>>>>>>>>>>>>>>>>>>>𝕭𝖎𝖘𝖒𝖎𝖑𝖑𝖆𝖍𝖎𝖗 𝕽𝖆𝖍𝖒𝖆𝖓𝖎𝖗 𝕽𝖆𝖍𝖊𝖊𝖒<<<<<<<<<<<<<<<<<<<
                                                        𝐌𝐎𝐇𝐀𝐌𝐌𝐀𝐃 𝐀𝐁𝐃𝐔𝐋𝐋𝐀𝐇      
                                                ────▄██████████▀▀▀▀▀▀▀▀▀▀██████▀████▄────
                                                ──▄██▀████████▄─────────────▀▀████─▀██▄──
                                                ─▀██▄▄██████████████████▄▄▄─────────▄██▀─
                                                ───▀█████████████████████████▄────▄██▀───
                                                ─────▀████▀▀▀▀▀▀▀▀▀▀▀▀█████████▄▄██▀─────
                                                ───────▀███▄──────────────▀██████▀───────
                                                ─────────▀██████▄─────────▄████▀─────────
                                                ────────────▀█████▄▄▄▄▄▄▄███▀────────────
                                                ──────────────▀████▀▀▀████▀──────────────
                                                ────────────────▀███▄███▀────────────────
                                                                   ▀█▀                                                                           
*/ 

#include<bits/stdc++.h>
using namespace std;

typedef  vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vip;
typedef long long ll;
#define pi 2*acos(0)
#define sz(x) (int)(x).size()
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define alllower(x) transform((x).begin(),(x).end(),(x).begin(),::tolower);
#define allupper(x) transform((x).begin(),(x).end(),(x).begin(),::toupper);

void printvecint(vi arr){
    for(int i=0;i<sz(arr);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void scanvecint(vi &arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void scanarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int cheque[3000];
void seive(int n){
    cheque[0] = 1;
    cheque[1] = 1;
    for(int i=2;i<n;i++){
        if(cheque[i] != 1){
            for(int j=i+i;j<=n;j+=i){
                cheque[j] = 1;
            }
        }
    }
}
int prime[3000];
int main()
{
   
    string s1;
    map<char,int> m;
    cin>>s1;
    for(auto ch:s1){
       m[ch]++;
    }
    map<char,int>::iterator it = m.begin();
    it++;
    it++;

    cout<<m[97];


    return 0;
}