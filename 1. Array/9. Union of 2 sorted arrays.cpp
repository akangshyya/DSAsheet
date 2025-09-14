    vector<int> unionArr;
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();

    while (i < n && j < m) {
        // Skip duplicates in arr1
        while (i > 0 && i < n && arr1[i] == arr1[i - 1])
            i++;
        // Skip duplicates in arr2
        while (j > 0 && j < m && arr2[j] == arr2[j - 1])
            j++;

        if (i >= n || j >= m) break;

        if (arr1[i] < arr2[j]) {
            unionArr.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionArr.push_back(arr2[j]);
            j++;
        } else {
            // Both elements are same
            unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of arr1
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1])
            unionArr.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1])
            unionArr.push_back(arr2[j]);
        j++;
    }

    return unionArr;
