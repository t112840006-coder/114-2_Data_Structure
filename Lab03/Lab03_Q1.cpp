
#include <algorithm>


class Solution {
public:
    int findLucky(std::vector<int>& arr) {
       
        int count[501] = {0};
        //建立1到500的數列      
        for (int num : arr) {
            count[num]++;
        }
       //開始把個別出現的次數計算
        int max_lucky = -1;
       //沒有幸運數就回傳-1
       
        for (int i = 1; i <= 500; ++i) {
            if (count[i] == i) {
                max_lucky = std::max(max_lucky, i);
            }
        }
       //判斷是否有幸運數字，如果有更大的max_luck會更新
        return max_lucky;
    }
};
