#include<iostream>
#include"BinarySearchTree.h"

using namespace std;

int main()
{
	BST<int, string> bst;

	bst.Insert(5, "D");

	bst.Insert(3, "B");
	bst.Insert(7, "F");

	bst.Insert(2, "A");
	bst.Insert(4, "C");

	bst.Insert(6, "E");
	bst.Insert(8, "G");

	BST<int, string> bst1 = bst;

	bst1.Remove(5);

	BST<int, string>::InorderIterator it;
	for (it = bst1.begin(); !it.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
}