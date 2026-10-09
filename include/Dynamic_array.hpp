#include <iostream>

namespace Dynamic_array {
    class Dynamic_arr {
    public:
        int size = 0;
        int* ary = nullptr;

        void SortArry() {
            for (int j = 1; j < size; ++j) {
                int key = ary[j];
                int i = j - 1;
                while (i >= 0 && ary[i] > key) {
                    ary[i + 1] = ary[i];
                    --i;
                }
                ary[i + 1] = key;
            }
        }
    };
}