

#include <iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<=n;i++){
        for(char c='A';c<='A'+i;c++){
             cout<<c<<" ";   
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern1(n);
    }

    return 0;
}

