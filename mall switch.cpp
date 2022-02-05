#include<iostream>
using namespace std;
/* the mall, switch case, resturant, hairdresser, clothes, food court*/
int main(){
	int ID ,acc_no;
	string name, mask, mealtype, breakfast, lunch, dinner, hair, h_product;
	mealtype= breakfast, lunch, dinner;
	char choice;
	
	/*where r is resturant
	c is clothing store
	h is hairdresser
	m is market*/
	/*Making a branch */
	cout<<"do you have a face mask ?"<<endl;
	cin>>mask;
	
	cout<<"input your ID number no.\n"<<endl;
	cin>> ID;
	
	cout<<"what is your name ?\n"<<endl;
	cin>>name;
	
	cout<<"input your account number\n"<<endl;
	cin>>acc_no;
	
	if (mask =="yes"){
	
	cout<<"welcome to  BU mall\n Where would you like the elevator to take you ?"<<endl; 
	cout<<"r is resturant\n c is clothing store\n h is hairdresser\n f is foodcourt"<<endl;
	
	}else{
		cout<<"please come back with your face mask\nStay safe"<<endl;
	}


cin>>choice;
	switch(choice) {
		
		case 'r':
		    	cout<<"welcome to the resturant, what would you like to order"<<endl;
        	cout<<"on our menu today, options are\n Breakfast:poached egg, french toast with baked beans and spinach\nLunch: ramen, tteokbokki and milk drink\nDinner:kimchistew and sushi"<<endl;
	        
			
			//cout<<"input nil "endl;
			
			 cin>>mealtype;
	if (mealtype=="breakfast"){
		
	         cout<<"	Breakfast:poached egg, french toast with baked beans and spinach\n Thank you and come again. (*^-^*)"<<endl;
		
	} else if(mealtype=="lunch")
		
		{
			cout<<"Lunch: ramen, tteokbokki and milk drink\nyour food will be ready in 5 minutes. (*^-^*)"<<endl;
		}
		else if(mealtype=="dinner")
		{
			cout<<"Dinner:kimchistew and sushi\nyour food will be ready in 5 minutes.(*^-^*)"<<endl;
		}
		cout<<"woul you like to go to another floor ?\n"<<endl;
		//after order is recieved, customer goes back to elevator nd proceeds the following way
		
			break;
			
			case 'h':
			
			cout<<"welcome to the hair salon, how may we be of service to you ? ('u')"<<endl;
			cout<<"would you like to\n 1. Make your hair\n 2. Have your make up done\n 3. Buy a product\n (1 ,2 or 3)"<<endl;
			cin>>choice;
			if(choice== '1'){
				cout<<"proceed to the salon"<<endl;
			}
			else if (choice=='2'){
				cout<<"Make your way to a stand"<<endl;
			}else if (choice=='3'){
				cout<<"Go to shop"<<endl;
			}
			break;
			
			
			
			
			
			
			
			
			
			
			
		
}


}
