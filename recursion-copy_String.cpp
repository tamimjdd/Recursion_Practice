#include <bits/stdc++.h>
using namespace std;
#define MAX 10
char s1[20],s2[20];
void rec(string s1){
    static int i=0;
    if(s1[i]=='\0') {s2[i]=s1[i];return;}
    else{
        s2[i]=s1[i];
        i++;
        rec(s1);
    }
}


// Driver Code
int main()
{

    cin>>s1;

    rec(s1);
    cout<<s2<<endl;
}


