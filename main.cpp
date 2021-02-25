#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    //867. 转置矩阵
    /* 示例 1：
        输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
        输出：[[1,4,7],[2,5,8],[3,6,9]]
    示例 2：
        输入：matrix = [[1,2,3],[4,5,6]]
        输出：[[1,4],[2,5],[3,6]] */
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ret;
        for (vector<vector<int>>::iterator it = matrix.begin(); it != matrix.end(); ++it)
        {
            vector<int> tmpIt = *it;
            for(vector<int>::iterator it1 = tmpIt.begin(); it1 != tmpIt.end(); ++it1)
            {

            }
        }
    }
};
int main()
{
    cout << "hello word!!!" << endl;
    return 0;
}