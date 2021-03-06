#include "leetcode/Lee.h"
#include "common/data_type.h"

#include <tree/BStree.h>
#include <io/IOtest.h>
#include <sort/SortAlgorithms.h>

#include <leetcode/PostExpressionEval.h>
#include <leetcode/List.h>
#include <leetcode/ArrayAlgos.h>
#include "leetcode/Zui.h"

#include <iostream>
#include <string.h>
using namespace std;

union data{
	int a;
	long b;
	char c[4];
};

#include <string.h>

int io_main();
int leet_main();

int main(){
//	io_main();
	leet_main();
	return 0;
}

int io_main(){
	IOtest *io=new IOtest();
	io->init();

	io->nonblocking();

	union data test_union;
	test_union.a=19;
	cout<<test_union.a<<endl;
	test_union.b=12;
	cout<<test_union.a<<endl;
	const char *str="abc";
	memcpy(test_union.c,str,4);
	cout<<test_union.a<<endl;

	return 0;
}

int leet_main(){
	cout<<"LEETCODE学习！"<<endl;

	Zui *z=new Zui();
	z->test();

//	Lee *lee=new Lee();
//	lee->start();
//
//	cout<<endl<<"数据类型练习！"<<endl;
//	data_type *dt=new data_type();
//	dt->test();
//
////************bstree test************
//	cout<<endl<<"*****bstree test*****"<<endl<<endl;
//	BStree<int> * bst=new BStree<int>();
//	bst->Insert(bst->getRoot(),2);
//	bst->Insert(bst->getRoot(),4);
////	bst->Insert(bst->getRoot(),5);
//	bst->Insert(bst->getRoot(),5);
//	bst->Insert(bst->getRoot(),1);
//	bst->Insert(bst->getRoot(),3);
////	bst->Display(bst->getRoot());
//	cout<<"specific deep 2: "<<bst->find(bst->getRoot(),2)<<endl;
//	cout<<"specific deep 4: "<<bst->find(bst->getRoot(),4)<<endl;
//	cout<<"specific deep 5: "<<bst->find(bst->getRoot(),5)<<endl;
//	cout<<"specific deep 1: "<<bst->find(bst->getRoot(),1)<<endl;
//	cout<<"specific deep 3: "<<bst->find(bst->getRoot(),3)<<endl;

//
//	BStree<int>::node<int> *n=bst->getRoot();
//	bst->Delete(n,2);
//	bst->Delete(n,4);
//	bst->Display(bst->getRoot());
//
////*************sort test*************
//	cout<<endl<<"*****sort test*****"<<endl<<endl;
//	SortAlgorithms *sort=new SortAlgorithms();
//	int *tempArray=(int *)malloc(sizeof(int)*20);
////	sort->mergeSort(waitingforSort,tempArray,0,19);
////	sort->bubleSort(waitingforSort,20);
////	sort->selectSort(waitingforSort,20);
////	sort->insertSort(waitingforSort,20);
//	sort->heapSort(waitingforSort,20);
//
//
//
//	sort->prt(waitingforSort);
//
//
//
//
//
//
////*************post expression test*************
//	cout<<endl<<"*****post expression test*****"<<endl<<endl;
//	PostExpressionEval *postExpression=new PostExpressionEval();
//	vector<string> expression;
//	expression.push_back("4");
//	expression.push_back("-2");
//	expression.push_back("/");
//	expression.push_back("2");
//	expression.push_back("-3");
//	expression.push_back("-");
//	expression.push_back("-");
//	cout<<"the result is: "<<postExpression->evalRPN(expression)<<endl;
//
////*************in expression test*************
//	cout<<endl<<"*****in expression test*****"<<endl<<endl;
//	InExpressionEval *inExpression=new InExpressionEval();
//	vector<string> expression1;
//	expression1.push_back("6");
//	expression1.push_back("*");
//	expression1.push_back("(");
//	expression1.push_back("5");
//	expression1.push_back("-");
//	expression1.push_back("(");
//	expression1.push_back("3");
//	expression1.push_back("+");
//	expression1.push_back("2");
//	expression1.push_back(")");
//	expression1.push_back("/");
//	expression1.push_back("4");
//	expression1.push_back(")");
//
////	expression1.push_back("6");
////	expression1.push_back("*");
////	expression1.push_back("2");
////	expression1.push_back("+");
////	expression1.push_back("3");
////	expression1.push_back("+");
////	expression1.push_back("5");
////	expression1.push_back("/");
////	expression1.push_back("2");
////	expression1.push_back("*");
////	expression1.push_back("2");
//
//
////	cout<<"the result is: "<<inExpression->evalRPN(expression1)<<endl;
//
////*************list test*************
//	cout<<endl<<"*****list test*****"<<endl<<endl;
//	List *l=new List();
//	l->init();
//	ListNode *ll=l->getRoot();
//	l->print(l->sortList(ll));
//
//	cout<<"find the middle node: "<<l->findMiddle(ll)->val<<endl;
//	l->print(l->mergeTwoList(l->l1,l->l2));
//
//	l->reset();
//	l->init();
//
//	vector<ListNode *> heads;
//	heads.push_back(l->l1);
//	heads.push_back(l->l2);
//	heads.push_back(l->l3);
//	l->print(l->mergeLists(heads));
//
////*************************************
//	ArrayAlgos *ag=new ArrayAlgos();
//	int A[2]={1};
//	int B[1]={2};
//	int m=1;
//	int n1=1;
//	ag->merge(A,m,B,n1);

//*************************************
//	char *s1="string";
//	char *s2="s1";
//	if(lee->stringMatch(s1,s2))
//		cout<<"matching!"<<endl;
//	else
//		cout<<"no matching!"<<endl;

//	lee->fork_test();
//	lee->fork_test2();
//	lee->fork_test3();
//	lee->pipe_test();

//***********************************
	return 0;
}
