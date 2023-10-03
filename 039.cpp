// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
// TLE
int median(vector<vector<int>> &matrix, int R, int C){
    vector<int> temp(R*C);
    
    for (int i=0; i<R; i++)
        for (int j=0; j<C; j++)
            temp[i*C+j] = matrix[i][j];
            
    sort(temp.begin(), temp.end());

    return temp[R*C/2];
}

int median(vector<vector<int>> &matrix, int R, int C){
    int mini=INT_MAX, maxi=INT_MIN, desire=(R*C+1)/2;

    for(int i=0; i<R; i++){
        mini = min(mini, matrix[i][0]);
        maxi = max(maxi, matrix[i][C-1]);
    }

    while(mini<maxi){
        int count=0, mid=mini+(maxi-mini)/2;
        for(int i=0; i<R; i++)
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        if (count<desire)
            mini = mid+1;
        else
            maxi = mid;
    }
    
    return mini;
}