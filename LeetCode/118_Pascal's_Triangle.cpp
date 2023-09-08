class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> v(numRows); // create a vector which can store triangle

        v[0] = {1}; // initialise the first row with a single element 

        // looping through each row from second row
        for(int i = 0; i < numRows; i++){
            v[i].resize(i + 1); // resize the current row to have 'i + 1' elements
            v[i][0] = 1; // the first element in each row is always 1

            // calculate the middle elements using the previous row
            for(int j = 1; j < i; j++){
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
            // the last element in each row is always 1
            v[i][i] = 1;
        }
        return v;
    }
};
