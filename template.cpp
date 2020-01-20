int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<double> d = {1, 2, 3, 4, 5};
    std::sort(v.begin(), d.end())  // 同じ型だったらエラーにならない

    // gccでは通らないが、clangでは通る
    // gccは明示的にエラーに出している
    std::vector<const int> vv = {1, 2, 3, 4, 5};
    auto i = vv.begin();

    for (auto i : ranges::views::iota(1, 10))
        std::cout << i;

    // C++20だと動かない, C++17だと動く
    for ( auto i : ranges::views::iota(1, 10) | filter( [](auto x){ return x % 2 == 0; } ) )
        std::cout << i;
}