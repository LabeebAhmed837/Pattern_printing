#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printRightAngledNumberTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
        
        
    }
};

int main() {
    solution s;
    s.printRightAngledNumberTriangle(5);
    return 0;
}