#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string S;
    cin >> n;
    cin >> S;
    int mx = 0;
    int cnt;
    bool left, right;
    for (int i=1; i<n;i++){
        cnt = 0;
        for (char c='a';c<='z';c++){
            left = false;
            right = false;
			for(int j=0;j<n;j++)
				if(S[j]==c){
                    if (j<i){
					    left=true;
                    }else{
                        right=true;
                    }
                }
           if (left&&right){
                cnt++;
            }
        }

        mx = max(mx,cnt);
    }
    cout << mx << endl;
}
