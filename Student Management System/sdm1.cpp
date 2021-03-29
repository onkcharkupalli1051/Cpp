#include<iostream>
#include<fstream>
#include<iomanip>

class student
{
    int idnum;
    char name[30];
    int sub1, sub2, sub3;
    double per;
    char grade[2];

    public:
        void calculate();
        void getdata();
        void showdata() const;
        void show_tabular() const;
        int getIDNUm() const;
};

void student::calculate()
{
    per = 100*((sub1+sub2+sub3)/30.0);
    if(per >= 90){grade = "A+";}
    if(per >= 80 && per<90){grade = "A";}
    if(per >= 70 && per<80){grade = "B+";}
    if(per >= 60 && per<70){grade = "B";}
    if(per >= 50 && per<60){grade = "C+";}
    if(per < 50){grade = "C";}
}

void student::getdata()
{
    cout<<"\nStudent Data : ";
    cout<<"\nEnter Student id : ";
    cin>>idnum;
    cout<<"\nEnter Student Name : ";
    cin.ignore();
    cin.getLine(name,30);
    cout<<"\nEnter Sub1 marks : ";
    cin>>sub1;
    cout<<"\nEnter Sub2 marks : ";
    cin>>sub2;
    cout<<"\nEnter Sub3 id : ";
    cin>>sub3;
    calculate();
}

void student::showdata() const
{
    cout<<"\nStudent Data : ";
    cout<<"\nStudent ID"<<idnum;
    cout<<"\nStudent Nane : "<<name;
    cout<<"\nSub1 Marks : "<sub1;
    cout<<"\nSub2 Marks : "<sub2;
    cout<<"\nSub3 Marks : "<sub3;
    cout<<"\nPercentage : "<<per;
    cout<<"\nGrade : "<<grade;
}

void student::show_tabular() const
{
    cout<<endl<<"Student Data : \n"<<idnum<<setw(6)<<" "<<name<<setw(15)<<sub1<<setw(3)
        <<sub2<<setw(3)<<sub3<<setw(3)<<per<<setw(5)<<grade<<setw(3)<<endl;
}

void SaveStudent();
void DisplayAll();
void SearchDisplay(int);
void modifyStudent(int);
void deleteStudent(int);
void DisplayClassResult();
void DisplayResult();

void write_student()
{
    student st;
    ofstream outfile;
    outfile.open("student.dat",ios::binary|ios::app);
    st.getdata();
    outfile.write(reinterpret_cast<char *>(&st), sizeof(student));
    outfile.close();
    cin.ignore();
    cin.get();
}

void DisplayAll()
{
    student st;
    ifstream infile;
    infile.open("student.dat",ios::binary);
    if(!infile)
    {
        cout<<"\nFile couldn't be open";
        cin.ignore();
        cin.get();
        return;
    }
    cout<<"\n\n\n\tDisplay All Record\n\n";
    while(infile.read(reinterpret_cast<char *>(&st), sizeof(student)))
    {
        st.showdata();
        cout<<"\n\n___________________________________________________";
    }
    infile.close();
    cin.ignore();
    cin.get();
}

void display_sp(int n)
{
    student st;
    ifstream infile;
    infile.open("student.dat",ios::binary);
    if(!infile)
    {
        cout<<"\nFile couldn't be open";
        cin.ignore();
        cin.get();
        return;
    }
    bool flag = false;
    while(infile.read(reinterpret_cast<char *>(&st),sizeof(student)))
    {
        if(st.getIDNUm() == n)
        {
            st.showdata();
            flag = true;
        }
    }
    infile.close();
    if(flag == false)
        cout<<"\nRecord Not Found!";
    cin.ignore();
}

void modifyStudent(int n)
{
    bool found = false;
    student st;
    fstream file;
    file.open("student.dat",ios::binary||ios::in||ios:out);
    if(!file)
    {
        cout<<"\nFile couldn't be open";
        cin.ignore();
        cin.get();
        return;
    }
    
    while(!file.eof() && found==false)
    {
        file.read(reinterpret_cast<char *>(&st), sizeof(student));
        if(st.getIDNUm() == n)
        {
            st.showdata();
            cout<<"\nEnter new details : "<<endl;
            st.getdata();
            int pos = (-1)*static_cast<int>(sizeof(st));
            file.seekp(pos,ios::cur);
            file.write(reinterpret_cast<char *>(&st), sizeof(student));
            cout<<"\n\n\t Record Updated");
            found = true;
        }
    }
    file.close();
    if(found == false)
    {
        cout<<"Record not found!";
    }
    cin.ignore();
    cin.get();
}

void deleteStudent(int n)
{
    student st;
    ifstream infile;
    infile.open("student.dat",ios::binary);
    if(!infile)
    {
        
    }
}

int student::getIDNUm() const
{return idnum;}
int main()
{
    int choice,count=1;
    cout<<"                 Student Management System                          "<<endl;
    while(1)
    {
        cout<<"**************************************************"<<endl;
        cout<<"Operations"<<endl<<"1. Create Student Record"
            <<endl<<"2. Display Complete Record"
            <<endl<<"3. Search Student Record"
            <<endl<<"4. Modify Student Record"
            <<endl<<"5. Delete Student Record"
            <<endl<<"6. Exit"<<endl;
         cout<<"_________________________________________________"<<endl;
        cout<<"Enter your choice : ";
        
        cin>>choice;
        switch(choice)
        {
            case 1:
                Student a[count];
                a[count].add_student();
                count++;
                break;
            case 2:
                cout<<endl<<"Enter student Roll no. : ";
                int temp_id;
                if(temp_id > count)
                {
                    printf("Roll doesn't exist.");
                    break;
                }
                else
                {
                    a[count].edit_student(temp_id);
                }
                break;
            case 3:
                cout<<endl<<"Enter student Roll no. : ";
                temp_id;
                if(temp_id > count)
                {
                    printf("Roll doesn't exist.");
                    break;
                }
                else
                {
                    a[count].search_student(temp_id);
                }
                break;
            case 4:
                exit(0);
        }
    }
}