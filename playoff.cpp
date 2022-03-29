
// Educational Codeforces Round 124 (Rated for Div. 2)

// Problem - 1651A

#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int T;
    long long int n_case,answer;
    
    cin >> T ;
    
    for(int i=1;i<=T;i++)
    {
        cin >> n_case ;
        answer = pow(2,n_case) -1;
        cout << answer << endl;
        
    }
}