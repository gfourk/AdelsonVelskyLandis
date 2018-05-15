#ifndef MYCOMARABLETYPE_H_
#define MYCOMARABLETYPE_H_

#include "Comparable.h"

class MyComparableType : public Comparable<MyComparableType>
{
public:

	MyComparableType(int);

	bool operator>(const MyComparableType& mt) const
	{
		return this->x > mt.x;
	}

	bool operator<(const MyComparableType& mt) const
	{
		return this->x < mt.x;
	}

private:

	int x;
};

MyComparableType::MyComparableType(int _x) : x(_x)
{
	//ctor
}

#endif // MYCOMARABLETYPE_H_
