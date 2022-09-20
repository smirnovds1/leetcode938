#include <chrono>
#include <random>

int main()
{
    std::srand(std::time(nullptr));
    FILE* fp = std::fopen("data.bin", "w+");
    for (auto i = 0; i < 1'000'000; ++i) {
        int data = std::rand() % 10'000'000;
        std::fwrite(&data, sizeof(data), 1, fp);
    }
    std::fclose(fp);
    return 0;
}
