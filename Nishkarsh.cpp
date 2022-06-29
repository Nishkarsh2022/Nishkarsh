#include <iostream>
using namespace std;

string name[20],roll_no[20],course[20],class1[20],contact[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>name[i];

				cout<<"Enter Roll no ";

				cin>>roll_no[i];

				cout<<"Enter course ";

				cin>>course[i];

				cout<<"Enter class ";

				cin>>class1[i];

				cout<<"Enter contact ";

				cin>>contact[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>name[i];

				cout<<"Enter Roll no ";

				cin>>roll_no[i];

				cout<<"Enter course ";

				cin>>course[i];

				cout<<"Enter class ";

				cin>>class1[i];

				cout<<"Enter contact ";

				cin>>contact[i];

			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name "<<name[i]<<endl;

	    		cout<<"Roll no "<<roll_no[i]<<endl;

	    		cout<<"Course "<<course[i]<<endl;

	    		cout<<"Class "<<class1[i]<<endl;

	    		cout<<"Contact "<<contact[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the roll no of student"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						cout<<"Name "<<name[i]<<endl;

	    	        	cout<<"Roll no "<<roll_no[i]<<endl;

	    		        cout<<"Course "<<course[i]<<endl;

	    		        cout<<"Class "<<class1[i]<<endl;

	    	        	cout<<"Contact "<<contact[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the roll no of student which you want to update"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<name[i]<<endl;

	    	        	cout<<"Roll no "<<roll_no[i]<<endl;

	    		        cout<<"Course "<<course[i]<<endl;

	    		        cout<<"Class "<<class1[i]<<endl;

	    	        	cout<<"Contact "<<contact[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>name[i];

				            cout<<"Enter Roll no ";

				            cin>>roll_no[i];

			             	cout<<"Enter course ";

				            cin>>course[i];

				            cout<<"Enter class ";

				            cin>>class1[i];

				            cout<<"Enter contact ";

				            cin>>contact[i];

					}

				}

			}

		}



void deletev()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						for(int j=i;j<total;j++)

						{

						name[j]=name[j+1];

						roll_no[j]=roll_no[j+1];

					    course[j]=course[j+1];

						class1[j]=class1[j+1];

						contact[j]=contact[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

}

}
int main()
{
	cout<<"*************************************"<<endl;
	cout<<"******STUDENT MANAGEMENT SYSTEM******"<<endl;
	cout<<"*************************************"<<endl;
	int value;
	while(true)
	{
		cout<<"Press 1 to Enter data "<<endl;
		cout<<"Press 2 to Show data "<<endl;
		cout<<"Press 3 to Search data "<<endl;
		cout<<"Press 4 to Update data "<<endl;
		cout<<"Press 5 to Delete data "<<endl;
		cout<<"Press 6 to Exit "<<endl;
		cin>>value;
		switch(value)
		{
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				update();
				break;
			case 5:
				deletev();
				break;
			case 6:
				exit(0);

			break;

			default:

			cout<<"Invalid input"<<endl;

			break;
		}
	}
	return 0;
}
