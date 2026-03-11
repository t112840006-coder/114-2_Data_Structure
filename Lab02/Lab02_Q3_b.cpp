int countElement(const vector<int>& arr, int target) { 
    int count = 0; // 1 step (變數初始化)

    // 迴圈初始化：1 step (i = 0)
    for (int i = 0; i < arr.size(); i++) { 
        // 每次迴圈的判斷：1 step (i < n)
        // 迴圈遞增：1 step (i++)

        if (arr[i] == target) { 
            // 比較操作：
            // 1)讀取arr[i] 2)做比較 (2 step)

            count++; 
            // 遞增操作：
            // 1)讀取count 2)做加法 3)存回count (3 step)
        }
    }

    return count; // 1 step (回傳結果)
