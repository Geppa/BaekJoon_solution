#include <iostream>
using namespace std;
 
int main() {
    int numLoof;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    cin>>numLoof;
    for(int i=0;i<numLoof;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<a+b<<'\n';
    }
 
    return 0;
}
