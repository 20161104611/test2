#include <iostream>
using namespace std;
struct Student 
{
	char name[50];
	char num[12];
	int age;
	struct Student *next;
};
int main()
{
	struct Student *p,*q,*head;
	int s=1;
	head = new Student;
	q = head;
	p = q;
	cin>>p->name;
	cin>>p->num;
	cin>>p->age;
	while(cout<<"1or2?",cin>>s,s==1)
	{
		p=new Student;
		q->next=p;
		q = p;
		cin>>p->name;
		cin>>p->num;
		cin>>p->age;
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<p->num<<" "<<p->name<<" "<<p->age<<endl;
		p=p->next;
	}
	p=head;
	while(p!=NULL)
	{
		q=p->next;
		delete p;
		p=q;
	}
	return 0;
}
