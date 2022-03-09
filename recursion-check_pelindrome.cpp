#include <bits/stdc++.h>
using namespace std;
#define MAX 10

void rec(string s){
    static int i=0,j=s.size()-1;
    if(i>j){
        cout<<"its a palindrome!";
        return;
    }
    else{
        if(s[i]!=s[j]) {cout<<"its not a palindrome!"; return;}
        i++;
        j--;
        rec(s);
    }
}


// Driver Code
int main()
{
    rec("mmmmammmm");
}

// This is code is contributed by rathbhupendra

