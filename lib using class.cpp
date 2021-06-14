#include<iostream>
#include<string>

using namespace std;

class bookissu
{

	
	public : 
	int sub,sem;

	funbookissu(int sem ,int sub);

};
bookissu :: funbookissu(int sem,int sub)
{
	
	switch(sem)
	{
		case 1:
			if(sub==1)
			{
				cout<<"ds"<<endl;
			
			}
			else if(sub==2)
			{
				cout<<"dld"<<endl;
				
			}
			else
			{
				cout<<"error sem 1"<<endl;
			}
			
		case 2 :
			if(sub==1)
			{
				cout<<"dstl"<<endl;
			
			}
			else if(sub==2)
			{
				cout<<"dbms"<<endl;
				
			}
			else
			{
				cout<<"error"<<endl;
			}
			break;
		default :
				{
					cout<<"sorrrr"<<endl;
				}
	}
}


int main()
{

bookissu cse;

int sub,sem; 

cout<<"sem"<<endl;
cin>>sem;

cout<<"sub"<<endl;
cin>>sub;
cse.funbookissu(sub,sem);


return 0;
}
