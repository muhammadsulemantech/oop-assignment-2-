#include<iostream>
using namespace std;

class publication
{
	public:
	string title;
    float price;
};
class book : public publication{
	public:
		int pagecount;
		
		
		void getdata()
		{
			cout<<"Enter book title "<<endl;
			cin>>title;
			cout<<"Enter price "<<endl;
			cin>>price;
			cout<<"Enter your page count "<<endl;
			cin>>pagecount;
			
		}
		void putdata()
		{
			cout<<"Book title "<<title<<endl;
			cout<<"Book price "<<price<<endl;
			cout<<"Page count "<<pagecount<<endl;
		}
		
	};
	
class tape : public publication{
	public:
		float playingtime;
		
		void getdata()
		{
			cout<<"Enter tape title "<<endl;
			cin>>title;
			cout<<"Enter price "<<endl;
			cin>>price;
			cout<<"Enter miunte "<<endl;
			cin>>playingtime;
		}
		void putdata()
		{
			cout<<" tape title "<<title<<endl;
			cout<<"Tape price "<<price<<endl;
			cout<<"Tape playingTime "<<playingtime<<endl;
		}
		
	
	};
	
	
int main()
{
	
	publication a1;
	book b;
	tape t;
	
	b.getdata();
	t.getdata();
	
	b.putdata();
	t.putdata();
}







