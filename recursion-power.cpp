#include <bits/stdc++.h>
using namespace std;
#define MAX 10

void rec(int a,int n){
    static int res=1;

    if(n==0){
        cout<<res<<endl;
        return;
    }
    else{
        if(n%2){
            res*=a;
            n--;
        }
        else{
            a=a*a;
            n/=2;
        }
        rec(a,n);
    }
}


// Driver Code
int main()
{
    int base=2,power=6;
    rec(base,power);
}

// This is code is contributed by rathbhupendra

