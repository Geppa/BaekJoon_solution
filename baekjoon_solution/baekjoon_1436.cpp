#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N;
    int a=0;
    int counter=0;
    
    cin>>N;
    while(1)
    {
        a++;
        string str_a=to_string(a);
    
        if(str_a.find("666")!=string::npos)
            {
                counter++;
                if(counter==N)
                {
                    cout<<a;
                    return 0;
                }
        
            }
    
        
    }
    return 0;
}
