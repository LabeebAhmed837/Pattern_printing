#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDoubleCenteredStarTriangle(int n) {
      
        for (int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }    
            cout<<endl;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-1-2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
        
    }
};

int main() {
    solution s;
    s.printDoubleCenteredStarTriangle(5);
    return 0;
}