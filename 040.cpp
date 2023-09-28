// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    int row=0, col=m-1, ans=-1;

    while(row<n && col>=0){
        if (arr[row][col] == 1){
            col--;
            ans = row;
        }
        else
            row++;
    }

    return ans;
}