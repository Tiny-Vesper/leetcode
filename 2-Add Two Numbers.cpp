#include "iostream"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { //定义一个返回值为指向ListNode的指针类型的方法
        ListNode dummy(0); //定义一个节点val=0
        ListNode* p = &dummy; //定义一个指向dummy的指针p
        int cn = 0; //cn = 0
        while (l1 || l2) { //当指针l1或指针l2指向不为NUll时
        	int val = cn + (l1 ? l1->val : 0) + (l2 ? l2->val : 0); //val的值= cn + l1的值 + l2的值
        	cn = val / 10; // cn为val（和）的十位数
        	val = val % 10; // val为val（和）的个位数
        	p->next = new ListNode(val); // p指向的节点的next指向值为val（个位数）的节点
        	p = p->next; //p指向p的next节点
        	if (l1) { //如果l1不为NULL
        		l1 = l1->next; //l1指向l1的next节点
        	}
        	if (l2) {
        		l2 = l2->next;
        	}
        }
        if (cn != 0) { //如果十位数不是0
            p->next	= new ListNode(cn); //p指向的节点的next指向值为cn（十位数）的节点
        	p = p->next; 
        }
        return dummy.next; //返回dummy的next指针节点的val为个位数
    }
};

int main(){
	Solution s1;
	cout<<s1.addTwoNumbers()
}