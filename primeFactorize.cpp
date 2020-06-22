vector<pair<int, int>> primeFactorize(int N)
{
    vector<pair<int, int>> res;
    for (int a = 2; a * a <= N; ++a)
    {
        if (N % a != 0)
            continue;
        int ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0)
        {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1)
        res.push_back({N, 1});
    return res;
}