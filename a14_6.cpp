// 14.6

// brute-force time: O(n^3), space: O(1)

#include <fmt/core.h>
#include <fmt/format.h>
#include <array>
#include <algorithm>

#include <climits>

void find_the_closest_entries_in_three_sorted_arrays(
    int a1[], int a1_size,
    int a2[], int a2_size,
    int a3[], int a3_size)
{
    int cur_min = INT_MAX;
    int a1_min_pos = 0;
    int a2_min_pos = 0;
    int a3_min_pos = 0;

    for (int i = 0; i < a1_size; ++i)
    {
        for (int j = 0; j < a2_size; ++j)
        {
            for (int k = 0; k < a3_size; ++k)
            {
                int tmp_arr[] {0, 0, 0};
                tmp_arr[0] = a1[i];
                tmp_arr[1] = a2[j];
                tmp_arr[2] = a3[k];
                std::sort(tmp_arr, tmp_arr + 3);

                int min_candidate = tmp_arr[2] - tmp_arr[0];
                if (min_candidate < cur_min)
                {
                    cur_min = min_candidate;
                    a1_min_pos = i;
                    a2_min_pos = j;
                    a3_min_pos = k;
                }
            }
        }

    }
    a1[0] = a1[a1_min_pos];
    a2[0] = a2[a2_min_pos];
    a3[0] = a3[a3_min_pos];
}

int main()
{
    int a1[] {5, 10, 15};
    int a2[] {3, 6, 9, 12, 15};
    int a3[] {8, 16, 24};

    int a1_size = sizeof(a1) / sizeof(a1[0]);
    int a2_size = sizeof(a2) / sizeof(a2[0]);
    int a3_size = sizeof(a3) / sizeof(a3[0]);

    fmt::print("a1: {}\n", fmt::join(a1, ", "));
    fmt::print("a2: {}\n", fmt::join(a2, ", "));
    fmt::print("a3: {}\n", fmt::join(a3, ", "));

    find_the_closest_entries_in_three_sorted_arrays(a1, a1_size, a2, a2_size, a3, a3_size);
    fmt::print("closest_entries: {}, {}, {}\n\n", a1[0], a2[0], a3[0]);
}
