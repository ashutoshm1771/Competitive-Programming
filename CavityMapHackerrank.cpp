// Author : Ashutosh Mishra

#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    //vector<string> res;
    for(int i=1;i<grid.size()-1;i++)
    {
        for(int j=1;j<grid.size()-1;j++)
        {
            if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i][j-1] && 
            grid[i][j]>grid[i+1][j] && grid[i][j]>grid[i][j+1])
            grid[i].replace(j,1,"X");
        }
    }
    return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

