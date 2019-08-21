#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string S;
    char old_tail;
    set<string> st;
    for (int i=0;i<n;i++){
        cin >> S;

        auto it = st.find(S);
        if (it!=st.end()){
            cout << "No" << endl;
            return 0;
        }
        st.insert(S);

        if (i>0){
            if (S.front()!=old_tail){
                cout << "No" << endl;
                return 0;
            }
        }
        old_tail = S.back();
        
    }
    cout << "Yes" << endl;
}