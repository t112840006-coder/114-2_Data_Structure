void copyArray(const vector<int>& source, vector<int>& dest) { 
    // 迴圈初始化：1 step (i = 0)
    for (int i = 0; i < source.size(); i++) { 
        // 每次迴圈的判斷：1 step (i < n)
        // 迴圈遞增：1 step (i++)

        dest[i] = source[i]; 
        // 複製操作：
        // 1)讀取source[i] 2)存入dest[i] (2 step)
    }
    // 1 step (程式結束)
}
