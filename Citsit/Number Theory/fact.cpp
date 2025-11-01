struct Factor {
  int N;
  vector<int> mind;
  Factor(int n) : N(n) {
    mind.resize(N + 1, 1);
    for (inti = 2; i <= N; i++)
      if (mind[i] == 1)
        for (intj = i; j <= N;
             j += i)
          if (mind[j] == 1)
            mind[j] = i;
  }
  vector<pair<int, int>>
  operator[](intn) {
    vector<pair<int, int>> div;
    while (n > 1) {
      if (div.empty() ||
          div.back().fi != mind[n])
        div.pb(
          {mind[n],
           max_pow(n, mind[n])});
      n /= mind[n];
    }
    returndiv;
  }
  intmax_pow(intn, intp) {
    if (n % p)
      return0;
    return1 + max_pow(n / p, p);
  }
} factor(1e6);

struct Factorization {
  int N, M;
  vector<int> primes;
  Factorization(int n)
    : N(n), M(sqrt(N) + 1) {
    vector<bool> prime(M + 1, 1);
    for (inti = 2; i * i <= M; i++)
      if (prime[i])
        for (intj = i * i; j <= M;
             j += i)
          prime[j] = 0;
    for (inti = 2; i <= M; i++)
      if (prime[i])
        primes.pb(i);
  }
  vector<pair<int, int>>
  operator[](intn) {
    vector<pair<int, int>> div;
    for (int &p : primes) {
      if (n < p)
        break;
      if (n % p)
        continue;
      inta = 0;
      while (!(n % p))
        n /= p, a++;
      div.pb({p, a});
    }
    if (n > 1)
      div.pb({n, 1});
    returndiv;
  }
} factorize(1e9);