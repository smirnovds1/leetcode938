#include <chrono>
#include <cstdio>

#include "solution.h"
#include "treenode.h"

int main()
{
    TreeNode* root = new TreeNode(5'000'000);

    FILE* fp = std::fopen("data.bin", "r");
    while (!std::feof(fp)) {
        int data;
        if (std::fread(&data, sizeof(data), 1, fp)) {
            insertTreeNode(root, data);
        }
    }
    std::fclose(fp);

    Solution solution;
    auto t1 = std::chrono::high_resolution_clock::now();
    int result = solution.rangeSumBST(root, 3'000'000, 7'000'000);
    auto t2 = std::chrono::high_resolution_clock::now();

    printf("rangeSumBST time = %f\n", std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1).count());
    printf("result = %i\n", result);
    return 0;
}