#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printInvertedCenteredStarTriangle(int n) {
        // Write your code here...
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
    s.printInvertedCenteredStarTriangle(5);
    return 0;
}