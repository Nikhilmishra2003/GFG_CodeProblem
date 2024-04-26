//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
         vector <int> result(2,0);
        int i=0,j=0,di=0,dj=1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==1){
                matrix[i][j]=0;
                int temp=di;
                di=dj;
                dj=-temp;
            }
            result[0]=i;
            result[1]=j;
            i+=di;
            j+=dj;
        }
        return result;

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends