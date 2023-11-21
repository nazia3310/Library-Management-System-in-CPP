#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library{
    int id;
    char name[50];
    char author[50];
    char sts[50];
    int price;
    int pages;
    
};

int main(){
    Library lib[];
    int input=0;
    int count=0;
    
    while(input!=5){
        cout<<"Enter 1 to input details like id, name, author, sts, price, sts, price,pages"<<endl;
        cout<<"Enter 2 to display details"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;
        
        switch(input){
            case 1:
                start:
                cout<<"Enter Book Id"<<endl;
                cin>>lib[count].id;
                cout<<"Enter Book Name"<<endl;
                cin>>lib[count].name;
                cout<<"Enter Book Author"<<endl;
                cin>>lib[count].author;
                 cout<<"Enter Student Name"<<endl;
                cin>>lib[count].sts;
                 cout<<"Enter Book Price"<<endl;
                cin>>lib[count].price;
                 cout<<"Enter Book Pages"<<endl;
                cin>>lib[count].pages;
                count++;
                break;
            case 2:
                 for(int i=0; i<count; i++){
                    cout<<"Book Id: "<<lib[i].id<<endl;
                    cout<<"Book Name: "<<lib[i].name<<endl;
                    cout<<"Book Author: "<<lib[i].author<<endl;
                    cout<<"Book Student: "<<lib[i].sts<<endl;
                    cout<<"Book Price: "<<lib[i].price<<endl;
                    cout<<"Book Pages: "<<lib[i].pages<<endl;
                 }
                break;
                
            case 3:
               exit(0);
               break;
            default:
                 cout<<"You have entered wrong value, please type again"<<endl;
                 goto start;
        }
    }
    
}
