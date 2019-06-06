// node.cpp: implementation of the node class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "node.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

node*h[29];

void node::insert()
{
	char buf[50];
	fstream file("company.txt",ios::app|ios::out);
	//cout<<"enter company and product";
	//cin>>company>>product;
	strcpy(buf,gst);
	strcat(buf,"|");
	strcat(buf,company);
	strcat(buf,"|");
	strcat(buf,id);
	strcat(buf,"|");
	strcat(buf,product);
	strcat(buf,"\n");
	file<<buf;
	file.close();
}
void node::hash_ins(char gst[],char company[],char id[],char product[], int hash_key)
{
	node*p,*prev,*cur;
	p=new node;
	strcpy(p->gst,gst);
	strcpy(p->company,company);
	strcpy(p->id,id);
	strcpy(p->product,product);
	p->next=NULL;
	prev=NULL;
	cur=h[hash_key];
	if(cur==NULL)
	{
		h[hash_key]=p;
		return;
	}
	while(cur!=NULL)
	{
		prev=cur;
		cur=cur->next;
	}
	prev->next=p;
}




int node::retrieve(View view)
{
	fstream file("company.txt",ios::in);
	file.seekg(0,ios::beg);
	//char name[15],usn[15];

	int j,count;
	node* cur;
	for(int i=0;i<29;i++)
	{
		h[i]=NULL;
	}
	while(!file.eof())
	{
		file.getline(gst,15,'|');
		file.getline(company,15,'|');
		file.getline(id,15,'|');
		file.getline(product,15,'\n');
		count=0;
		for(j=0;j<strlen(id);j++)
			count+=id[j];
		count=count%29;
		hash_ins(gst,company,id,product,count);
	}
	//cout<<"enter usn\n";
	//cin>>usn;
	count=0;
	for(j=0;j<strlen(view.id);j++)
		count+=view.id[j];

	count=count%29;
	cur=h[count];
	if(cur==NULL)
	{
		//cout<<"record not found\n";
		return 0;
	}
	do
	{
		if(strcmp(cur->id,view.id)==0)
		{
			strcpy(v.id,cur->id);
			strcpy(v.gst,cur->gst);
			strcpy(v.company,cur->company);
			strcpy(v.product,cur->product);
			//cout<<"record found\nname:"<<cur->name<<"\nUSN:"<<cur->usn<<endl;
			return 1;	
		}
		else
			cur=cur->next;
	}while(cur!=NULL);
	file.close();
	return 0;
}

int node::retrieveC(View view)
{
	fstream file("company.txt",ios::in);
	file.seekg(0,ios::beg);
	//char name[15],usn[15];

	int j,count;
	node* cur;
	for(int i=0;i<29;i++)
	{
		h[i]=NULL;
	}
	while(!file.eof())
	{
		file.getline(gst,15,'|');
		file.getline(company,15,'|');
		file.getline(id,15,'|');
		file.getline(product,15,'\n');
		count=0;
		for(j=0;j<strlen(id);j++)
			count+=gst[j];
		count=count%29;
		hash_ins(gst,company,id,product,count);
	}
	//cout<<"enter usn\n";
	//cin>>usn;
	count=0;
	for(j=0;j<strlen(view.gst);j++)
		count+=view.gst[j];

	count=count%29;
	cur=h[count];
	if(cur==NULL)
	{
		//cout<<"record not found\n";
		return 0;
	}
	do
	{
		if(strcmp(cur->gst,view.gst)==0)
		{
			strcpy(v.id,cur->id);
			strcpy(v.gst,cur->gst);
			strcpy(v.company,cur->company);
			strcpy(v.product,cur->product);
			//cout<<"record found\nname:"<<cur->name<<"\nUSN:"<<cur->usn<<endl;
			return 1;	
		}
		else
			cur=cur->next;
	}while(cur!=NULL);
	file.close();
	return 0;
}

int node::del(View view) 
{
	int flag=0;
	char fname[]="company.txt";   
	char tname[]="temp.txt";
	char buf[50];
	fstream file("person.txt",ios::in);  
	fstream file2("temp.txt",ios::out|ios::app); 
	//char keyname[15];  
	//cout<<"enter the name of record to deleted";  
	//cin>>keyname;
	
	while(!file.eof())
	{
		file.getline(gst,15,'|');    
		file.getline(company,15,'|');   
		file.getline(id,15,'|');   
		file.getline(product,15,'|');    
		if(strcmp(view.id,id)!=0)   
		{   
			strcpy(buf,gst);   
			strcat(buf,"|");   
			strcat(buf,company);   
			strcat(buf,"|");  
			strcat(buf,id);  
			strcat(buf,"|");  
			strcat(buf,product);  
			strcat(buf,"\n");        
			file2<<buf;  
		} 
		if(strcmp(id,view.id)==0) 
			flag=1;
			continue;
//		else 
//			return 0;
	}
	//if(flag==1) 
		//cout<<"record found and  is deleted"<<endl;
	//	return 1;

	//else 
	//	return 0;
	//	cout<<"record not found"<<endl;
	return flag;
	file.close();  
	file2.close();  
	remove(fname);  
	rename(tname,fname); 
}

/*void main()
{
	int ch;
	do
	{
		//cout<<"1:insert 2:retrieve 3:display the table 4:exit\n";
		//cout<<"enter your choice";
		//cin>>ch;
		switch(ch)
		{
			case 1:insert();break;
			case 2:retrieve();break;
			case 3:display();break;
			case 4:break;
		}
	}	while(ch!=4);
}*/

