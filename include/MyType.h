#ifndef MYTYPE_H_
#define MYTYPE_H_

class MyType
{
public:

	MyType(int);

	bool operator>(const MyType& mt) const
	{
		return this->x > mt.x;
	}

	bool operator<(const MyType& mt) const
	{
		return this->x < mt.x;
	}

private:

	int x;
};

MyType::MyType(int _x) : x(_x)
{
	//ctor
}

#endif // MYTYPE_H_
