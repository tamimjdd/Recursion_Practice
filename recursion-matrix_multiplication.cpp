#include <bits/stdc++.h>
using namespace std;
#define MAX 10

static int res[MAX][MAX],row1,row2,col1,col2;
int mat1[MAX][MAX] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };

    int mat2[MAX][MAX] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };

void multiplyMatrix(int arm[MAX][MAX],int brm[MAX][MAX])
{
    static int i=0,j=0,k=0,sum;
    if(i<row1){
        if(j<col2){
            if(k<col1){
                res[i][j]+=arm[i][k]*brm[k][j];
                k++;
                multiplyMatrix(arm,brm);
            }
            k=0;
            j++;
            multiplyMatrix(arm,brm);
        }
        j=0;
        i++;
        multiplyMatrix(arm,brm);
    }
}

// Driver Code
int main()
{
    row1=4;
    row2=4;
    col1=4;
    col2=4;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            res[i][j]=0;
        }
    }
    multiplyMatrix(mat1,mat2);

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

// This is code is contributed by Tamim Wasif
