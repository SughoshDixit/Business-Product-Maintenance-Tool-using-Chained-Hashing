// node.h: interface for the node class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_NODE_H__13395141_6CA1_46FC_B752_8A1D85CEC934__INCLUDED_)
#define AFX_NODE_H__13395141_6CA1_46FC_B752_8A1D85CEC934__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
class View
{
public:
	char company[15],product[15],gst[15],id[15];
};
class node
{
	public:
	char company[15],product[15],gst[15],id[15],keyid[15];
	int recaddr;
	node* cur;
	node*next;
	void insert();
	void hash_ins(char[],char[],char[],char[],int);
	//void display();
	int retrieve(View view);
	int retrieveC(View view);
	int del(View view);
	View v;
};

#endif // !defined(AFX_NODE_H__13395141_6CA1_46FC_B752_8A1D85CEC934__INCLUDED_)
