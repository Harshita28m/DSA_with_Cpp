int main()
// {
//     vector<vector<int>> v;
//     vector<int> price;
//     price = {100, 250, 500};
//     v = {{6, 8, 2}, {5, 7, 8}, {14, 10, 11}, {11, 13, 5}};
//     int row = v.size();
//     int col = v[0].size();
//     int maxi = INT_MIN;
//     int cal = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cal += (price[j] * v[i][j]);
//         }
//         maxi = max(cal, maxi);
//         cal = 0;
//     }
//     cout << maxi;
//     return 0;
// }