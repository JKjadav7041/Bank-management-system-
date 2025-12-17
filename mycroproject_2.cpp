#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class jivraj{
	public :
		int a=20;
		jivraj()
		{
			a=20000000;
		}
};
class jadav :public jivraj{
	public:
		void putdata()
		{
			system("cls");
			cout<<"\n\n\n\n\n\t\t\t\t\tOne Day In Only "  <<a  <<"\n\t\t\t\t\tCase Withdrow In This Bank...";
		}
};
class bank
{
	private:
			float balance;
			string id,pass,name,fname,address,phone,pin;  
    public:
	      void menu();
		  void bank_management();
		  void atm_management(); 
		  void new_user();	
		  void already_user();
		  void deposit();
		  void withdraw();
		  void transfar();
		  void payment();
		  void search();
		  void edit();
		  void del();
		  void show_records();
		  void show_payment();
		  void user_blalnce();
		  void withdrow_atm();
		  void check_detail();
		  
};
	void introduction()
	{
		int i;
		cout<<"\n\n\n\n\n\t\t";
		for(i=1;i<=60;i++)
		cout<<"*";
		cout<<"\n\t\t ";
		for(i=1;i<=58;i++)
		cout<<"*";
		cout<<"\n\t\t ";
		for(i=1;i<=56;i++)
		cout<<"*";
		cout<<" \n\n\t\t\t\t\t   HELLO \n\t\t\t\t\t WELLCOM TO \n\t\t\t\t CASE & ATM MANAGEMENT SYSTEM\n\t\t\t\t\t PROJECT IN c++\n\n\t\t  ";
		for(i=1;i<=56;i++)
		cout<<"*";
		cout<<"\n\t\t ";
		for(i=1;i<=58;i++)
		cout<<"*";
		cout<<"\n\t\t";
		for(i=1;i<=60;i++)
		cout<<"*";
		getch();
		system("cls");
		
		
		
	}
	void bank::menu()	
    	{
  	 		p:
  	 		system("cls");
  	 		int choice;
  	 		char ch;
  	 		string  pin,pass,email;
  	 		cout<<"\n\n\n\t\t\t\t\t\t        control panel ";
  	 		cout<<"\n\t\t\t\t\t      --------------------------------";
  	 		cout<<"\n\n\n\n\t\t\t\t\t *****************************************";
  	 		cout<<"\n\n\n\n\t\t\t\t\t\t  || 1. CASE MANAGEMENT.   ||";
  	 		cout<<"\n\t\t\t\t\t\t  || 2. ATM MANAGEMENT.    ||";
  	 		cout<<"\n\t\t\t\t\t\t  || 3. EXIT.              ||"<<endl;
  	 		cout<<"\t\t\t\t\t\t  || Enter your choice :- ";
  	 		cin>>choice;
  	 		switch (choice)
  	 	{
  	 		case 1:
  	 			cout<<"\n\n\t\t\t\t\t\t      Login account .";
  	 			cout<<"\n\n\n\n\t\t\t\t\t\tE-Mail :  ";
  	 			cin>>email;
  	 			cout<<"\n\n\t\t\t\t\t\tPincord:- ";
  	 			for(int i=1;i<=6;i++)
  	 			{
				 ch=getch();
				 pin+=ch;
				 cout<<"*";
				}
				cout<<"\n\n\t\t\t\t\t\tPassword:-  ";
				for(int i=1;i<=7;i++)
  	 			{
				 ch=getch();
				 pass+=ch;
				 cout<<"*";
				}
				if(email=="jadavjivraj2008@gmail.com"&& pin =="361007"&& pass =="2442008")
				{
				    bank_management();	
				}
				else
				{
					cout<<"\n\n\t\t\t\t\tYour E-mail ,pin & password is wrong...";
				}
				
  	 			break;
  	 		case 2:
  	 			atm_management();
  	 			break;
  	 		case 3:
  	 			exit(1);
  	 		default:
  	 			
  	 	    cout<<"\n\n\t\t\t\t\t\tInvelid value ... please try  Again";
	 	}
	 		getch();
	 		goto p;
		}
	void bank::bank_management()
		{  
			p:
			int choice;	
	     system("cls");
	     cout<<"\n\n\n\t\t\t                           CASE MANAGEMENT SYSTEM ";
	     cout<<"\n\t\t\t\t<--------------------------------------------------------->";
	     cout<<"\n\n\n\n \t\t\t\t*******************************************************";
	     cout<<"\n\n\t\t\t\t              ||   1. New Account          ||";
	     cout<<"\n\t\t\t\t\t      ||   2. Already user         || ";
	     cout<<"\n\t\t\t\t\t      ||   3. Diposit option       ||";
	     cout<<"\n\t\t\t\t\t      ||   4. withdraw option      ||";
	     cout<<"\n\t\t\t\t\t      ||   5. Transfar option      ||";
	     cout<<"\n\t\t\t\t\t      ||   6. payment option       ||";
	     cout<<"\n\t\t\t\t\t      ||   7. search user record   ||";
	     cout<<"\n\t\t\t\t\t      ||   8. Edit user record     ||";
	     cout<<"\n\t\t\t\t\t      ||   9. delete user record   ||";
	     cout<<"\n\t\t\t\t\t      ||   10. show  all records   ||";
	     cout<<"\n\t\t\t\t\t      ||   11. payment all records ||";
	     cout<<"\n\t\t\t\t\t      ||   12. Go back             ||";
	     cout<<"\n\n \t\t\t\t*********************************************************";
	     cout<<"\n\n\t\t\t\t\t       Enter your choice :";
	     cin>>choice;
	     switch(choice)
	     {
	     	case 1:
	     		new_user();
	     		break;
	     	case 2:
	     		already_user();
	     		break;
	     	case 3:
	     		deposit();
	     		break;
	     	case 4:
	     		withdraw();
	     		break;
	     	case 5:
	     		transfar();
	     		break;
	     	case 6:
	     		payment();
	     		break;
	     	case 7:
	     		search();
	     		break;
	     	case 8:
	     		edit();
	     		break;
	     	case 9:
	     		del();
	     		break;
	     	case 10:
	     		show_records();
	     		break;
	     	case 11:
	     		show_payment();
	     		break;
	     	case 12:
	     		menu();
	     	default :
	     		 cout<<"\n\n Invelid value ... please try  Again";
		 	}
	     getch();
	     goto p;
	     
	    	
		}
	void bank::atm_management()
		{
			p:
			int choice;	
	     system("cls");
	     cout<<"\n\n\n\t\t\t Atm management system ";
	     cout<<"\n\n 1. user login &chack Balance";
	     cout<<"\n\n 2. withdraw amount ";
	     cout<<"\n\n 3. Account detailes";
	     cout<<"\n\n 4. Go back ";
	     cout<<"\n\n enter your choice :-";
	     cin>>choice;
	     switch(choice)
	     {
	     	case 1:
	     		user_blalnce();
	     		break;
	     	case 2:
	     		withdrow_atm();
	     		break;
	     	case 3:
	     		check_detail();
	     		break;
	     	case 4:
	     		menu();
	     	default :
	     		 cout<<"\n\n Invelid value ... please try  Again";
		 }
	     getch();
	     goto p;
	     
	     
		}
	void bank::new_user()
		{
			p:
			system("cls");
			fstream file;
			int p;
			float b;
			string n,f,pa,a,ph,i;
			cout<<"\n\n\n\t\t\t  Add New User";
			cout<<"\n\n\t\t\t User ID          :- ";
			cin>>id;
			cout<<"\n\t\t\t Name             :- ";
			cin>>name;
			cout<<"\n\t\t\t Father name      :- ";
			cin>>fname;
			cout<<"\n\t\t\t Address          :- ";
			cin>>address;
			cout<<"\n\t\t\t pincode          :- ";
			cin>>pin;
			cout<<"\n\t\t\t password         :- ";
			cin>>pass;
			cout<<"\n\t\t\t phone No         :- ";
			cin>>phone;
			cout<<"\n\t\t\t Current Balance  :- ";
			cin>>balance;
			file.open("chase.txt",ios::in);
			if(!file)
			{
				file.open("chase.txt",ios::app|ios::out);
				file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
				file.close();
			}
			else
			{
				file>>i>>n>>f>>a>>p>>pa>>ph>>b;
				while(!file.eof())
				{
					if(i == id)
					{
					
					cout<<"\n\n user id allrady exist....";
					getch();
					goto p;
				    }
				    file>>i>>n>>f>>a>>p>>pa>>ph>>b;
				}
				file.close();
			    file.open("chase.txt",ios::app|ios::out);
			    file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
			    file.close();
			}
				cout<<"\n\n\n\t\t\t     New User Account Created Successfully...";

		}
	void bank::already_user()
	{
		system("cls");
		fstream file;
		string t_id;
		int found=0;
		cout<<"\n\n\t\t\t already user account";
		file.open("chase.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n file oening error...";
		}
		else
		{
			cout<<"\n\n USER ID :- ";
			cin>>t_id;
			    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			    while(!file.eof())
			    {
			    	if( t_id == id )
			    	{
			    		system("cls");
			    		cout<<"\n\n\t\t\t Already User Account";
			    		cout<<"\n\n  ||user ID   :- "<<id <<"  ||";
			    		cout<<"\n  ||Pincode   :- "<<pin  <<"||";
			    		cout<<"\n  ||password  :- "<<pass <<"||";
			    		found++;
					}
			    	file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
				file.close();
				if( found == 0 )
				{
				
				cout<<"\n\n  User ID Can`t Found...";
			}
		}
	}
	void bank::deposit()
		{
			system("cls");
			fstream file,file1;
			string t_id;
			float dep;
			int found=0;
			cout<<"\n\n\t\t\t    ||  Diposit Amount option || ";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n file oening error...";
			}
			else
			{
			   cout<<"\n\n  || USER ID :- ";
			   cin>>t_id;
			   file1.open("chase1.txt",ios::app|ios::out);
			   file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			    while(!file.eof())
			    {
			    	if( t_id ==id )
			    	{
			    		cout<<"\n\n\n ||  Amount For Dposit : ";
			    		cin>>dep;
			    		balance += dep;
			    		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
			    		found++;
			    		cout<<"\n\n\n\t\t Your Amount  "  <<dep   <<"   Sucessfully Deposit...";
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
					}
			    	file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
				file.close();
				file1.close();
				remove("chase.txt");
				rename("chase1.txt","chase.txt");				
				if( found==0 )
				{
					cout<<"\n\n  User ID Can`t Found...";
				}	
			}
		}
		void bank::withdraw()
		    {
				system("cls");
				fstream file,file1;
				string t_id;
				float with;
				int found=0;
				cout<<"\n\n\t\t\t || withdraw Amount option  ||";
				file.open("chase.txt",ios::in);
				if(!file)
		           {
						cout<<"\n\n file oening error...";
				   }
				else
				   {
			  		 cout<<"\n\n || USER ID :- ";
			  		 cin>>t_id;
			  		 file1.open("chase1.txt",ios::app|ios::out);
			   		 file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			  		 while(!file.eof())
					{
			    		if( t_id ==id )
			    		{
			    	 		cout<<"\n\n\n || Amount For withdraw : ";
			    	 		cin>>with;
			    			if(with<= balance)
			        		{
			    	 			balance -= with;
			    	 			file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
			    	 			found++;
			    	 			cout<<"\n\n\n\t\t Your Amount  "<<with   <<"  Sucessfully withdraw...";
			    	 			break;
			        		}
			    			else
			        		{
			    	 			cout<<"\n\n\n\t your current balance"<<balance<<"is less";
				    		}
				     		found++;
				    	}
			    		else
				    	{
				     		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
				    	}
			         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				    }
					 file.close();
					 file1.close();
					 remove("chase.txt");
				     rename("chase1.txt","chase.txt");
				if( found == 0)
				    {
					 cout<<"\n\n  User ID Can`t Found...";
				    }
			}	
        }
        void bank::transfar()
        {
        	system("cls");
        	fstream file,file1;
        	string s_id,r_id;
        	int found=0;
        	float amount;
        	cout<<"\n\n\n\t\t\t\t\t\t || payment transfar option:-  ||";
        	file.open("chase.txt",ios::in);
        	if(!file)
        	{
        		cout<<"\n\n file opening Error...";
			}
			else
			{
				cout<<"\n\n || Snder USER ID  for transction :- ";
				cin>>s_id;
				cout<<"\n\n || Reciver USER ID for tarnsction :- ";
				cin>>r_id;
				cout<<"\n\n\n ||  Enter tarnsfar Amount :- ";
				cin>>amount;
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(s_id == id && amount <= balance )
					found++;
					else if(r_id ==id)
					found++;
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
				file.close();
				if( found == 2)
				{
					file.open("chase.txt",ios::in);
					file1.open("chase1.txt",ios::app|ios::out);
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
					while(!file.eof())
					{
						if(s_id == id)
						{
							balance -= amount;
							file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
							
						}
						else if(r_id == id)
						{
							balance += amount;
							file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
						}
						else
						{
							file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";	
						}
						file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
					}
					file.close();
					file1.close();
					remove("chase.txt");
					rename("chase1.txt","chase.txt");
					cout<<"\n\n\n\t\t\t       Transction sucssfully....";
				}
				else
				{
					cout<<"\n\n\n\t\t\t Both Transction User ID & balance  invalid...";
				}
				
			}
		}
		void bank::payment()
		{
			system("cls");
			fstream file,file1;
			int found=0;
			float amount;
			string t_id,b_name;
			SYSTEMTIME h;
			cout<<"\n\n\n\n\n\t\t\t\t Bills payment option ";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n File OPening Error...";
			}
			else
			{
				cout<<"\n\n\n User ID :";
				cin>>t_id;
				cout<<"\n\n\n Bill Name :";
				cin>>b_name;
				cout<<"\n\n\n Bill amount :";
				cin>>amount;
				file1.open("chase1.txt",ios::app|ios::out);
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(t_id == id && amount<= balance)
					{
						balance -= amount;
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";	
						found++;
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";		
					}
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
				file.close();
				file1.close();
				remove("chase.txt");
				rename("chase1.txt","chase.txt");
				
				if(found == 1)
				{
					GetSystemTime(&h);
				    file.open("bill.txt",ios::app|ios::out);
				    file<<t_id<<" "<<b_name<<" "<<amount<<" "<<h.wDay<<"/"<<h.wMonth<<"/"<<h.wYear<<"\n";
				    file.close();
				    cout<<"\n\n\n\t\t\t "<<b_name<<" Bill pay Sucssfully...";
				}
				else
				{
					cout<<"\n\n\n User ID OR amount Invalide";
				}
			}
		}
		void bank::search()
		{
			system("cls");
			fstream file;
			string t_id;
			int found;
			cout<<"\n\n\n\n\t\t\t ||  Search User Rcord  ||";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<" \n\n file opening errer...";
			}
			else
			{
				cout<<"\n\n user ID :- ";
				cin>>t_id;
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(t_id == id)
					{
						system("cls");
						cout<<" \n\n\n\n\t\t\t || SEARCH USER RCORD || :";
						cout<<" \n ||  USER ID         :- "<<id;       		
						cout<<" \n ||  Name            :- "<<name;      		 
						cout<<" \n ||  Father Name     :- "<<fname;     		
						cout<<" \n ||  Address         :- "<<address;   		
						cout<<" \n ||  pin             :- "<<pin;       		
						cout<<" \n ||  password        :- "<<pass;      		
						cout<<" \n ||  phone no.       :- "<<phone;     		
						cout<<" \n ||  Current Balance :- "<<balance;   		
						found++;
					}
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;	
				}
				file.close();
				if(found == 0)
				cout<<"\n\n User ID can`t found...";	
			}
		}
		void bank::edit()
		{
			system("cls");
			fstream file,file1;
			string t_id,n,f,a,ph,p;
			int found=0,pi;
			cout<<"\n\n\n\t\t Edit User Record.";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n file opening Error...";
			}
			else
			{
				cout<<"\n\n\n User ID :-";
				cin>>t_id;
				file1.open("chase1.txt",ios::app|ios::out);
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(t_id == id)
					{
						cout<<"\n Name:-";
						cin>>n;
						cout<<"\n Father name :-";
						cin>>f;
						cout<<"\n Address :-";
						cin>>a;
						cout<<"\n pincode(6 digits) :-";
						cin>>pi;
						cout<<"\n password  :-";
						cin>>p;
						cout<<"\n phone No:-";
						cin>>ph;
						file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<"\n\n";	
						cout<<"\n\n\n\t\t\t Record Edit Sucessfully....";
						found++;
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";	
					}
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
					file.close();
					file1.close();
					remove("chase.txt");
					rename("chase1.txt","chase.txt");
					if(found == 0)
					{
						cout<<"\n\n User ID can`t found....";
					}
			}
		}
		void bank::del()
			{
			system("cls");
			fstream file,file1;
			string t_id;
			int found=0;
			cout<<"\n\n\n\t\t Edit User Record.";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n file opening Error...";
			}
			else
			{
				cout<<"\n\n\n User ID :-";
				cin>>t_id;
				file1.open("chase1.txt",ios::app|ios::out);
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(t_id == id)
					{
						cout<<"\n\n\n\t\t\t Record  Deleted  Sucessfully....";
						found++;
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";	
					}
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
					file.close();
					file1.close();
					remove("chase.txt");
					rename("chase1.txt","chase.txt");
					if(found == 0)
					{
						cout<<"\n\n User ID can`t found....";
					}
			}
		}
		void bank::show_records()
		{
			system("cls");
			fstream file;
			int found=0;
			cout<<"\n\n\n\t\t SHOW  ALL USER`S RECORDS :";
			file.open("chase.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n\n file opning error....";
			}
			else
			{
				
				
				cout<<" ";
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					cout<<"\n user id :- "<<id;
					cout<<"\n name :- "<<name;
					cout<<"\n father name :-"<<fname;
					cout<<"\n address :-"<<address;
					cout<<"\n pin :-"<<pin;
					cout<<"\n password :-"<<pass;
					cout<<"\n phone no. :-"<<phone;
					cout<<"\n balance :-"<<balance;
					cout<<"\n\n=======================================";
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
					found++;
				}
					file.close();
					if( found == 0)
					cout<<"\n\n\n\t\t data base is Empty....";
			}
			
		}
	
	    void bank::show_payment()
	    {
			system("cls");
	    	fstream file;
			int found=0;
			float amount;
			string c_date;
			cout<<"\n\n\n\t\t SHOW  ALL BILL`S RECORDS :";
			file.open("bill.txt",ios::in);
			if(!file)
			{
				cout<<"\n\n\n file opning error....";
			}
			else
			{
				file>>id>>name>>amount>>c_date;
				while(!file.eof())
				{
					cout<<"\n user id :- "<<id;
					cout<<"\n Bill name :- "<<name;
					cout<<"\n Bill amount :-"<<amount;
					cout<<"\n Date :-"<<c_date;
					cout<<"\n\n=========================================";
					file>>id>>name>>amount>>c_date;
					found++;
				}
					file.close();
					if( found == 0)
					cout<<"\n\n\n\t\t data base is Empty....";
			}
			
		}
		void bank::user_blalnce()
		{
		system("cls");
		fstream file;
		string t_id,t_pin,t_pass;
		char ch;
		int i,found=0;
		cout<<"\n\n\n\t\t\t Login & check Blalance";
		file.open("chase.txt",ios::in);
		if(!file)
		    {
		    	cout<<"\n\n\n File Opening Error....";
			}
		else
			{
			 	cout<<"\n\n\n User ID :-";
			 	cin>>t_id;
			 	cout<<"\n\n Pin cord :-";
			 	for(i=1;i<7;i++)
			 	{
			 	ch = getch();
				t_pin += ch;
				cout<<"*";
				}
			 	cout<<"\n\n Password :-";
				for(i=1;i<7;i++)
			 	{
			 	ch = getch();
				t_pass += ch;
				cout<<"*";	
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
				if(t_id == id && t_pin == pin && t_pass == pass)
				{
					cout<<"\n\n\n\t\t Your currnt balance is "<<balance;
					found++;
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;	
				}
				file.close();
				if(found == 0)
				{
					cout<<"\n\n\n\n\t\t\t user ID ,Pin & password Invelid.....  ";
				}
			}		
		}
		void bank::withdrow_atm()
		{
			    system("cls");
				fstream file,file1;
				string t_id,t_pass,t_pin;
				float with;
				char ch;
				int found=0,i;
				cout<<"\n\n\t\t\t withdraw Amount option";
				file.open("chase.txt",ios::in);
				if(!file)
		           {
						cout<<"\n\n file oening error...";
				   }
				else
				   {
			  		 cout<<"\n\n USER ID :- ";
			  		 cin>>t_id;
			  		 cout<<"\n\n Pin cord :-";
				 	for(i=1;i<7;i++)
				 	{
				 	ch = getch();
					t_pin += ch;
					cout<<"*";
					}
				 	cout<<"\n\n Password :-";
					for(i=1;i<7;i++)
				 	{
				 	ch = getch();
					t_pass += ch;
					cout<<"*";	
					}
				  	 file1.open("chase1.txt",ios::app|ios::out);
			   		 file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			  		 while(!file.eof())
					{
			    		if( t_id ==id && t_pin == pin && t_pass == pass)
			    		{
			    	 		cout<<"\n\n\n Amount For withdraw : ";
			    	 		cin>>with;
			    			if(with<= balance)
			        		{
			    	 			balance -= with;
			    	 			file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
			    	 			found++;
			    	 			cout<<"\n\n\n\t\t Your Amount  "<<with   <<"  Sucessfully withdraw...";
			    	 			cout<<"\n\n\n\t\t    your current balance"    <<balance;
			    	 			break;
			        		}
			    			else
			        		{
			    	 			cout<<"\n\n\n\t your current balance"  <<balance   <<"is less";
				    		}
				     		found++;
				    	}
			    		else
				    	{
				     		file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n\n";
				    	}
			         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				    }
					 file.close();
					 file1.close();
					 remove("chase.txt");
				     rename("chase1.txt","chase.txt");
				if( found == 0)
				    {
					 cout<<"\n\n  User ID Can`t Found...";
				    }
			}	
        
		}
		void bank::check_detail()
		{
		 system("cls");
				fstream file;
				string t_id,t_pass,t_pin;
				float with;
				char ch;
				int found=0,i;
				cout<<"\n\n\t\t\t withdraw Amount option";
				file.open("chase.txt",ios::in);
				if(!file)
		           {
						cout<<"\n\n file oening error...";
				   }
				else
				   {
			  		 cout<<"\n\n USER ID :- ";
			  		 cin>>t_id;
			  		 cout<<"\n\n Pin cord :-";
				 	for(i=1;i<7;i++)
				 	{
				 	ch = getch();
					t_pin += ch;
					cout<<"*";
					}
				 	cout<<"\n\n Password :-";
					for(i=1;i<7;i++)
				 	{
				 	ch = getch();
					t_pass += ch;
					cout<<"*";	
					}
			   		 file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			  		 while(!file.eof())
					{
					cout<<"\n\n\n user id :- "<<id;
					cout<<"\n name :- "<<name;
					cout<<"\n father name :-"<<fname;
					cout<<"\n address :-"<<address;
					cout<<"\n pin :-"<<pin;
					cout<<"\n password :-"<<pass;
					cout<<"\n phone no. :-"<<phone;
					cout<<"\n balance :-"<<balance;
					break;
					found++;
			    	}
			         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				    }
					 file.close();
					if( found == 0)
				    {
					 cout<<"\n\n  User ID Can`t Found...";
				    }
			}	
		
  main()
{
	jadav k;
	k.putdata();
	bank obj;
	introduction();
	obj. menu();
	
}		
