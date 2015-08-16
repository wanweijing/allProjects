

template<int N>
struct Fa
{
	enum { value = N * Fa<N - 1>::value };
};

template<>
struct Fa<1>
{
	enum {value = 1};
};

int main()
{
	static const int value = 3;
	int i = Fa<value>::value;

	return 0;
}
