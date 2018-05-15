
#include "AVLTree.h"

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>

#include "MyType.h"
#include "MyComarableType.h"

int main(void)
{

	int i = 0;


	AVLTree<int> avlTree;

	cout << "start = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree.insert( rand()%1000000 );

	cout << "mid = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree.erase( rand()%1000000 );

	cout << "end = " << clock() << endl;


	AVLTree<MyType> avlTree2;

	cout << "start = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree2.insert( MyType(rand()%1000000) );

	cout << "mid = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree2.erase( MyType(rand()%1000000) );

	cout << "end = " << clock() << endl;


	AVLTree<MyComparableType> avlTree3;

	cout << "start = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree3.insert( MyComparableType(rand()%1000000) );

	cout << "mid = " << clock() << endl;

	srand(17);
	for ( i = 0; i < 10000000; i++ )
		avlTree3.erase( MyComparableType(rand()%1000000) );

	cout << "end = " << clock() << endl;


	return 0;
}
