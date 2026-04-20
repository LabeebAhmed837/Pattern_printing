#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printSquarePattern(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        
        
    }
};

int main() {
    solution s;
    s.printSquarePattern(5);
    return 0;
}