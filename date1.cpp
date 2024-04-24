#include<iostream>
#include<iomanip>
using namespace std;
class date
{
	private:int day,month,year;
	        char ch;

	public: int d, m, y;
	date()
	{
	cout<<"ENTER DATE"<<endl;
	cin>>day;
	cout<<"ENTER MONTH"<<endl;
	cin>>month;
	cout<<"ENTER YEAR"<<endl;
	cin>>year;
	
	cout<<"dd-mm-yyyy format"<<endl<<day<<"-"<<month<<"-"<<year<<endl;
	cout<<"dd/mm/yyyy format"<<endl<<day<<"/"<<month<<"/"<<year<<endl;
	}

	            void display()
	{
            if(month==1)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"JAN"<<year<<endl;
            }
             else if(month==2)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"FEB"<<year<<endl;
            }
            else if(month==3)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"MAR"<<year<<endl;
            }
            else if(month==4)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"APR"<<year<<endl;
            }
            else if(month==5)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"MAY"<<year<<endl;
            }        
            else if(month==6)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"JUN"<<year<<endl;
            }
            else if(month==7)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"JUL"<<year<<endl;
            }
            else if(month==8)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"AUG"<<year<<endl;
            }
            else if(month==9)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"SEP"<<year<<endl;
            }
            else if(month==10)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"OCT"<<year<<endl;
            }
            else if(month==11)
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"NOV"<<year<<endl;
            }
            else
            {
                  cout<<"dd mmm yyyy format"<<endl<<day<<"DEC"<<year<<endl;
            }
    	}


	date(int d,int m,int y)
	{
	        cout<<"ENTER DATE"<<endl;
	        cin>>d;
	        cout<<"ENTER MONTH"<<endl;
	        cin>>m;
	        cout<<"ENTER YEAR"<<endl;
	        cin>>y;
	cout<<"dd-mm-yyyy format"<<endl<<d<<"-"<<m<<"-"<<y<<endl;
	cout<<"dd/mm/yyyy format"<<endl<<d<<"/"<<m<<"/"<<y<<endl;
	}
     void diff()
	{ 
		int days;
		int i=1;
		int a[12]={31,59,90,120,151,181,212,243,273,304,334,365};
		if (m==1)
		{
			days=d;
		}
		else if (m==2)
		{
			{
				days=d+a[m-1];
			}
		}
		else if (m==3)
		{
			{
				days=a[m-1]+d;
			}
		}
		else if (m==4)
		{
			{
				days=a[m-1]+d;
			}
		}
		else if (m==5)
		{
			{
				days=a[m-1]+d;
			}
		}
		else if (m==6)
		{
			{
				days=a[m-1]+d;
			}
		}
		else if (m==7)
		{
			
			{
				days=a[m-1]+d;
			}
		}
		else if (m==8)
		{
			
			{
				days=a[m-1]+d;
			}
		}
		else if (m==9)
		{
			{
				days=a[m-1]+d;
			}
		}
		else if (m==10)
		{
			{
				days=d+a[m-1];
			}
		}
		else if (m==11)
		{
			{
				days=a[m-1]+d;
			}
		}
		else  
		{
			{
				days=a[m-1]+d;
			}
		}
		cout<<days<<endl;
	}
};

int main()
{
	date a;
	a.display();
	int d,m,y;
	date b(d,m,y);
	a.diff();
}
