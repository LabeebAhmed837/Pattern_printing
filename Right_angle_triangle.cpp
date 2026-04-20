#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printRightAngledTrianglePattern(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++) cout<<"* ";
            cout<<endl;
        }
        
    }
};

int main() {
    solution s;
    s.printRightAngledTrianglePattern(5);
    return 0;
}