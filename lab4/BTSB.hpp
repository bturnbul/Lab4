/*
 * BTSB.hpp
 *
 *  Created on: Oct 26, 2016
 *      Author: Brian
 */

class BSTB {
	NodeTB *root;
	int count; // the count of the number of words in the AVL tree
public:
	BSTB(); // constructor � sets root to NULL
	~BSTB(); // destructor � deletes tree
	bool insert(string x);
	/* recursively inserts x into the tree with the current root (possibly of a
	 subtree) being n */
	bool insert(string x, NodeTB *n);
	/* Note the overloading of methods � this is nice if you choose to write this
	 method recursively. If a string is already in the tree, you may want to print
	 out a warning, but otherwise it can just be ignored. */
	/* Note: you can choose to not write this recursively, but it�s just so nice
	 recursively */
	void printTreeio();
	/* prints out the data in the tree in order (this should print out the
	 dictionary alphabetically ) */
	void printTreeio(NodeTB *n); /* again, nice if you choose recursion
	 void printTreePre(); /* for testing purposes, prints out tree in preorder
	 void printTreePre(NodeTB *n); /* for printing recursively
	 void printTreePost(); /* for testing purposes, prints out tree in postorder
	 void printTreePost(NodeTB *n); /* for printing recursively
	 bool search(string x);
	 /* searches tree for x � returns true if found, false otherwise */
	bool search(NodeTB *n, string x); /*if recursive */
	void adjustBalances(NodeTB *n); /* adjusts heights of trees */
	NodeTB *rotateRight(NodeTB *n); /* for right rotation*/
	NodeTB * rotateLeft(NodeTB *n); /* for left rotation */
	int getScore(NodeTB *n, BSTB *dict); /* counts words in dict and returns that
	 /*number */
};
