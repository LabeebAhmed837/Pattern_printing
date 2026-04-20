#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printInvertedRightAngledTrianglePattern(int n) {
        
        for(int i=n;i>=0;i--){
            for (int j=0;j<i;j++){
            cout<<"*"<<" ";
        } cout<<endl;
        }
        
    }
};

int main() {
    solution s;
    s.printInvertedRightAngledTrianglePattern(5);
    return 0;
}