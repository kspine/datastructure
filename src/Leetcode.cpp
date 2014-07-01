#include "leetcode/Lee.h"
#include "common/data_type.h"

#include <tree/BStree.h>

#include <iostream>
using namespace std;

int main(){
	cout<<"LEETCODE学习！"<<endl;
	Lee *lee=new Lee();
	lee->start();

	cout<<endl<<"数据类型练习！"<<endl;
	data_type *dt=new data_type();
	dt->test();

//************bstree test************
	cout<<endl<<"*****bstree test*****"<<endl<<endl;
	BStree<int> * bst=new BStree<int>();
	bst->Insert(1);
	bst->Display(bst->getRoot());



//***********************************
	return 0;
}
