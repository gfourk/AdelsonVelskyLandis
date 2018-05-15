#ifndef COMPARABLE_H_
#define COMPARABLE_H_

template<class T>
class Comparable
{
public:
	Comparable();
	virtual ~Comparable();
	virtual bool operator>(const T& ct) const = 0;
	virtual bool operator<(const T& ct) const = 0;
};

template<class T>
Comparable<T>::Comparable()
{
	//ctor
}

template<class T>
Comparable<T>::~Comparable()
{
	//dtor
}

#endif // COMPARABLE_H_
