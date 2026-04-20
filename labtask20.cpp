#include<iostream>
using namespace std;

int main()
{
cout<<"---University Management System Login---"<<endl;
string username[3];
int password[3];

int choice;

string student_name[3];
int age[3];
string course_name[3];
string course_list[3];

for (int n=0;n<3;n++){
    cout<<"Enter username : ";
    cin>>username[n];

    cout<<"Enter password : ";
    cin>>password[n];

   if(username[n]=="admin" && password[n]==1234){
    cout<<"Login successfully"<<endl;
    break;
   }

     else if((username[n]!="admin"||password[n]!=1234)&&(n!=2)){
    cout<<"Try again"<<endl;
   }

   else{
       cout<<"Login Failed ";
       return 0;
    }
   }

while(0==0){
    cout<<endl<<"---University Management System---"<<endl<<
          "1 Add student "<<endl<<
          "2 View students record"<<endl<<
          "3 Add courses"<<endl<<
          "4 View Courses"<<endl<<
          "5 Exit"<<endl;


    cout<<"Enter your choice : ";
    cin>>choice;
    
    if((choice>=1&&choice<=6)){

    if(choice==1){
        for(int i=0;i<3;i++){
            cout<<"Enter student name : ";
            cin>>student_name[i];
            cout<<"Enter student age : ";
            cin>>age[i];
        }
    }

     else if(choice==2){
        cout<<"Student record :"<<endl;
        for(int i=0;i<3;i++){
            cout<<student_name[i]<<"\t"<<age[i]<<endl;
        }

    }

    else if(choice==3){
        for(int i=0;i<3;i++){
            cout<<"Enter "<<i+1<<" course name :";
            cin>>course_name[i];
        }
    }

     else if(choice==4){
        for(int i=0;i<3;i++){
            cout<<"Course list :";
        }
    }

    else{
         if(choice==5){
        cout<<"Thanks for using the Library Management System ";
        return 0;
         }
    
        }

    }
    else{
        cout<<"You entered invalid choice";
    }

}
    
}

    // int choice = 0;
    // string name[3] , course[3];
    // int age[3];
    // int i1=0,i2=0;
    // string username[3];
    // int password[3];
    // for(int i = 0; i < 3; i++)
    // {
    //     cout<<"Enter username: ";cin>>username[i];

    //     cout<<"Enter password: ";cin>>password[i];

    //     if(username[i] == "admin" && password[i] == 1234)
    //     {
    //         cout<<"Login Successful\n";

    //         while(choice != 5)
    //         {
    //             cout<<"--------University Menu---------\n";
    //             cout<<"1--> Add Student\n";
    //             cout<<"2--> View Student\n";
    //             cout<<"3--> Add Course\n";
    //             cout<<"4--> View Course\n";
    //             cout<<"5--> Exit\n";
    //             cout<<"Your Choice: ";
    //             cin>>choice;

    //             if(choice == 1)
    //             {
    //                 if(i1 < 3)
    //                 {
    //                     cout<<"Enter name: ";
    //                     cin>>name[i1];

    //                     cout<<"Enter age: ";
    //                     cin>>age[i1];

    //                     i1++;
    //                     cout<<"Student added successfully\n";
    //                 }
    //                 else
    //                 {
    //                     cout<<"Student limit reached\n";
    //                 }
    //             }
    //             else if(choice == 2)
    //             {
    //                 for (int c=0;c<i1;c++)
    //                 {
    //                     cout<<"Student "<<c+1<<": "<<name[c]<<" Age: "<<age[c]<<endl;
    //                 }
                    
    //             }
    //             else if(choice == 3)
    //             {
    //                 if(i2 < 3)
    //                 {
    //                     cout<<"Enter course name: ";
    //                     cin>>course[i2];

    //                     i2++;
    //                     cout<<"Course added successfully\n";
    //                 }
    //                 else
    //                 {
    //                     cout<<"Course limit reached\n";
    //                 }
    //             }
    //             else if (choice == 4)
    //             {
    //                 for (int d=0;d<i2;d++)
    //                 {
    //                     cout<<"Course "<<d+1<<": "<<course[d]<<endl;
    //                 }
    //             }
                
    //             else if(choice == 5)
    //             {
    //                 cout<<"Exiting program.\n";
    //             }
    //             else
    //             {
    //                 cout<<"Enter correct choice.\n";
    //             }
    //         }

    //         break; 
    //     }
    //     else
    //     {
    //         cout<<"Wrong username or password\n";
    //     }
    // }
    // return 0;
