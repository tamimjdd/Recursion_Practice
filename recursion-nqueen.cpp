#include <bits/stdc++.h>
using namespace std;
#define N 4
static int arr[N];
///the check function can be reduced

int check(int board[N][N],int i,int j){
    ///right diagonal
    int x=i+1,y=j+1;
    while(x<N && y<N){
        if(board[x][y]==1) return false;
        x++;
        y++;
    }
    x=i-1;
    y=j-1;
    while(x>=0 && y>=0){
        if(board[x][y]==1) return false;
        x--;
        y--;
    }
    ///left diagonal

    x=i+1;
    y=j-1;
    while(x<N && y>=0){
        if(board[x][y]==1) return false;
        x++;
        y--;
    }
    x=i-1;
    y=j+1;
    while(x>=0 && y<N){
        if(board[x][y]==1) return false;
        x--;
        y++;
    }

    ///vertical
    x=i;
        for(int y=j;y<N;y++){
            if(board[x][y]==1 && y!=j){

                return false;
            }
        }
    x=i;
        for(int y=j;y>=0;y--){
            if(board[x][y]==1 && y!=j){
                return false;
            }
    }
        ///horizental
     y=j;
        for(x=i;x<N;x++){
            if(board[x][y]==1 && x!=i){

                return false;
            }
        }
    y=j;
        for(x=i;x>=0;x--){
            if(board[x][y]==1 && x!=i){
                return false;
            }
    }
    return true;
}

bool rec(int board[N][N],int col){
    if(col>=N) return true;

    for(int i=0;i<N;i++){
        if(check(board,i,col)){
            board[i][col]=1;

            if(rec(board,col+1)){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;
}


// Driver Code
int main()
{
    for(int i=0;i<N;i++){
        arr[i]=0;
    }
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    rec(board,0);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}






