#include <bits/stdc++.h>
using namespace std;
#define MAX 10

void rec(int n){
    if(n==1) { return;}
    else{
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else{
            n=n*3+1;
            cout<<n<<" ";
        }
        rec(n);
    }
}


// Driver Code
int main()
{
    cout<<13<<" ";
    rec(13);
}

// This is code is contributed by rathbhupendra

