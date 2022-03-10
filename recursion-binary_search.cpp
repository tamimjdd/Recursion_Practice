#include <bits/stdc++.h>
using namespace std;

void rec(char s[],int sizes){
    static int i=0;
    if(i==sizes) {return;}
    else{
        if(int(s[i])>=65 && int(s[i])<=90){
            cout<<s[i];
            return;
        }
        i++;
        rec(s,sizes);
    }
}


// Driver Code
int main()
{


    char s[]="tamimwasifTamimwasif";
    int sizes=sizeof(s);
    rec(s,sizes);
}
