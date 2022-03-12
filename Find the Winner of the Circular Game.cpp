#include<bits/stdc++.h>
using namespace std;
int rec(int n,int k){
   if(n==1) return 0;
   else{
        int x=rec(n-1,k);
        int y=(x+k)%n;
        return y;
   }

}
int findTheWinner(int n, int k) {
    return rec(n,k)+1;
}

int findTheWinnerdp(int n, int k) {

    int offset = 0;

    for(int size=2; size<=n; size++) {
        int firstDeleteElement = (k%size == 0) ? size : k%size;
        int indexOfWinner = (firstDeleteElement + offset)%size;
        offset = indexOfWinner;
    }

    return 1 + offset;
}

int main(){

    cout<<findTheWinner(6,5)<<endl;
    cout<<findTheWinnerdp(6,5);
}

