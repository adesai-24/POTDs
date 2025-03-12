#include "MinHeap.h"
#include <vector>
#include <cmath>

vector<int> lastLevel(MinHeap & heap)
{
    int m = heap.elements.size() - 1;
    if (m <= 0)
        return vector<int>(); 

    int height = static_cast<int>(std::log2(m));
    
    int startIndex = 1 << height;
    
    vector<int> result;
    for (int i = startIndex; i <= m; i++)
    {
        result.push_back(heap.elements[i]);
    }
    
    return result;
}

