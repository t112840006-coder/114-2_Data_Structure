int findMax(const vector<int>& arr) { 
    int max = arr[0]; // 1 step (變數初始化)

    // 迴圈初始化：1 step (i = 1)
    for (int i = 1; i < arr.size(); i++) { 
        // 每次迴圈的判斷：1 step (i < n)
        // 迴圈遞增：1 step (i++)

        if (arr[i] > max) { 
            // 1) 讀取arr[i] 2) 做比較 (2 step)

            max = arr[i]; 
            // 1) 讀取arr[i] 2) 存入max (2 step)
        }
    }

    return max; // 1 step (回傳結果)
}
