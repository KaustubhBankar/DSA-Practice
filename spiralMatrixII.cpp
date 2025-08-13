#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> spiralMatrix( int n)
{

    vector<vector<int>> ans(n, vector<int>(n, 0));
    int num = 1;

    int srow = 0, scol = 0, erow = n - 1, ecol = n - 1;

    while (srow <= erow && scol <= ecol)
    {

        for (int j = scol; j <= ecol; j++)
        {
            ans[srow][j] = num++;
        }
        for (int i = srow + 1; i <= erow; i++)
        {
            ans[i][ecol] = num++;
        }
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow <= erow)
            {
                ans[erow][j] = num++;
            }
        }
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol <= ecol)
            {
                ans[i][scol] = num++;
            }
        }
        srow++, scol++, erow--, ecol--;
    }
    return ans;
}

int main()
{
    int n = 3;
    vector<vector<int>> result = spiralMatrix(n);

    // Print the 2D matrix
    for (auto row : result)
    {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}