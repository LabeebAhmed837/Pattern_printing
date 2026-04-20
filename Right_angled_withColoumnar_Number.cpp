#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    solution s;
    s.printTriangle(5);
    return 0;
}
