void printPairs(const vector<int>& arr) { 
    // 外層迴圈初始化：1 step (i = 0)
    for (int i = 0; i < arr.size(); i++) { 
        // 每次外層判斷：1 step (i < n)
        // 每次外層遞增：1 step (i++)

        // 內層迴圈初始化：1 step (j = i + 1)
        for (int j = i + 1; j < arr.size(); j++) { 
            // 每次內層判斷：1 step (j < n)
            // 每次內層遞增：1 step (j++)

            cout << arr[i] << "," << arr[j] << endl; 
            // 輸出操作：
            // 1)讀取arr[i] 2)讀取arr[j] 3)輸出 (3 step)
        }
    }
    // 1 step (程式結束)
}
