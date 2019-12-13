#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int checkRow(vector<vector<int> > &grid, int i,int m)
{
    int mr=0,c=0,x;
    for(int k=0;k<m;k++)
    {
        if(grid[i][k]==2){
            for(int y=k;y<m;y++)
                if(grid[i][y]==1)mr++;
            break;
        }
        if(grid[i][k]==1 && c==0){c++; x=k;}
        else if(grid[i][k]==1 && c==1){
            c++;
            mr+=2;
            grid[i][x]=2;
            grid[i][k]=2;
        }
        else if(grid[i][k]==1 && c>1){ mr++; grid[i][k]=2; }
    }
    return mr;
}
int checkCol(vector<vector<int> > &grid, int j,int m)
{
    int mr=0,d=0,c=0,x;
    for(int k=0;k<m;k++)
    {
        if(grid[k][j]==2){
            for(int y=k;y<m;y++)
                if(grid[y][j]==1)mr++;
            break;
        }
        if(grid[k][j]==1 && c==0){c++; x=k; }
        else if(grid[k][j]==1 && c==1){
            c++;
            mr+=2;
            grid[x][j]=2;
            grid[k][j]=2;
        }
        else if(grid[k][j]==1 && c>1){ mr++; grid[k][j]=2;}
    }
    return mr;
}
int main()
{
    int m,n,c,total=0,i,j;
    cin >> m >> n;
    
    vector<vector<int> > grid(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    for(i=0,j=0;i<n,j<m;i++,j++)
    {
        int r=checkRow(grid,i,m);
        int c=checkCol(grid,j,n);
        if(r!=0 && c!=0)
        {
            total+=(r+c)-1; 
            continue; 
        }
        total=total+(r+c);
    }
    cout<<total;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
