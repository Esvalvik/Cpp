// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class Node
{
public:
	string name;
	string strValue;
	unsigned long uLongVal;
	Node* pNodes[10];
public:
	Node::Node(string, string, unsigned long);
	void Node::setName(string name);
	void Node::setStrValue(string newStrValue);

};


int main()
{
	Node node("strings", NULL, 23);
	//node.setName("Karl");
	cout << node.name;
	cout << node.uLongVal;
	getchar();
	return 0;

}

Node::Node(string name, string strValue, unsigned long uLongVal)
{
	setName(name);
}


void Node::setName(string replacementName)
{
	name = replacementName;
}

void Node::setStrValue(string newStrValue)
{
	strValue = newStrValue;
}






