#pragma once

template <typename Type1, typename Type2>

class Box
{
public:
	Type1 n1;
	Type2 n2;

	Box(Type1 n1, Type2 n2) :n1(n1), n2(n2) {};

	Type1 Min() {
		if (n1 < n2) {
			return static_cast<Type1>(n1);
		}

		if (n1 > n2) {
			return static_cast<Type2>(n2);
		}
	}
};