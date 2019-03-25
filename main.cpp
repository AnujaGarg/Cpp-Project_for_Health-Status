#include<iostream>
#include<string>
#include"Auths.h"
#include"HealthStatus.h"
#include"Encrypt.h"
using namespace std;

int auths(){
    int ch;
    Auths enter;
    while(1){
    cout<<"1.Log In\n2.Register\n3.Logout\n4.Exit\n";
    cin>>ch;
    switch(ch){
        case 1:
            if(enter.LogIn()){
            cout<<"You are logged in successfully\n"; 
              
            }else cout<<"somthing went wrong!\n";
            break;
        case 2:
            if(enter.Register()){
             cout<<"registered successfully\n";
             system("cls");
            enter.LogIn();
            }else  cout<<"can't register\n";

            break;
        case 3:
            enter.Logout();
            break; 
        case 4:
            return 1;
    }
}
}

int healthstatus(){
    int check;
    ifstream fin;
    fin.open("stuff/valide.txt");
    fin>>check;
    if(check != 1){
        cout<<"\nplease login!\n";
        return 1;
    }

    Health health;        // creating Object of class Health 
	float weight,dummy2;
	float feet,inches;
	int age,exercise,gender;
	
	cout<<"\t\t\t\t\t   -WELCOME-";
	cout<<"\n\t\t******************MIND YOUR HEALTH BUSINESS******************\n";
	 choose:
	cout<<"\nPlease choose an option\n";
    cout<<"GENDER: 1.Male 2.Female\nPress key -> ";
    cin>>gender;
    if(gender!=1&&gender!=2)
    {
    	cout<<"Please specify your gender correctly.";
    	goto choose;
	}
	cout<<"Enter your weight <Kilogram>:= ";
	cin>>weight;
	cout<<"\nEnter your Height (Feet and Inches) \n1.Feet:= ";
	cin>>feet;
	cout<<"2.Inches:= ";
	cin>>inches;
	float dummy=feet+(inches/12);
	float height=dummy/3.28;
	feet=feet*12;
	dummy2=feet+inches;
    dummy2=dummy2*2.54;
    
	cout<<"\nEnter your age <years>:= ";
	cin>>age;
	
	//int gender=health.Gender();
	
	double bmi=health.BMI(weight,height);
    
    cout<<"\n\n---------------------------------------------------\n";
	cout<<"Your Body Mass Index (BMI):= "<<bmi<<endl;
    
	double meta=health.metabolism(gender,age,dummy2,weight);
	
	cout<<"\n\n---------------------------------------------------\nYour Basal Metabolic Rate is : "<<meta<<" Kcal/day\n---------------------------------------------------";
	
	exer:
	cout<<"\n\nSpecify your exercise routine to know about your recommended daily Kilocalorie intake to maintain current weight.\n";
    cout<<"1.Little to no exercise\n2.Light exercise (1�3 days per week)\n3.Moderate exercise (3�5 days per week)\n4.Heavy exercise (6�7 days per week)\n5.Very heavy exercise (twice per day, extra heavy workouts)\n\nPlease choose an option -> ";
    cin>>exercise;
	if(exercise!=1&&exercise!=2&&exercise!=3&&exercise!=4&&exercise!=5)
    {
    	cout<<"Please specify your exercise routine correctly.";
    	goto exer;
	}
	double kcal=health.exercalorie(meta,exercise);
	cout<<"\n---------------------------------------------------\nDaily kilocalories needed = "<<kcal<<" kilocalories\n---------------------------------------------------";
    health.dietPlan(kcal);
   
    code ob;
    ob.encrypt(bmi);
    return 0;
}

int main(){
    auths();
    healthstatus();
    // --- encryption methods
    ofstream fout;
    fout.open("stuff/valide.txt");
    fout<<2;
}