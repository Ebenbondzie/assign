#include <iostream>
#include <fstream>
#include <string>
    using namespace std;

     struct Studentdetail  //DECLEAR STRUCT TO CONTAIN DETAIL FOR EACH STUDENT
    {
                int IdNumber;
        string Name;
        int Age;
        string Gender;
        float Score;
        char Grade;

    };


int main()
{
    int i,j,a=1, Totalscore ,Totalage , Malecount = 0, Femalecount = 0;
    double avgage, avgscore;
    Studentdetail student[5];


for (i = 0 ; i < 5; i++)   // TO COLLECT STUDENT DETAILS
    {   cout << " STUDENT: "  <<a<<endl<<endl;
           a++;
        cout << " Id Number: ";  cin>>student[i].IdNumber;
        cout << " NAME: ";  cin>>student[i].Name;
        cout << " AGE: ";  cin>>student[i].Age;
        cout << " GENDER: ";  cin>>student[i].Gender;
        if(student[i].Gender == " MALE ")// TO COUNT THE NUMBER OF MALES AND FEMALES
        {
            Malecount++;
        }
            else
                Femalecount++;


        cout<<" SCORE: ";cin>>student[i].Score;
        if (student[i].Score>=80)//FOR GRADING EACH STUDENT
            student[i].Grade='A';
        else if (student[i].Score>=70)
           student[i].Grade='B';
        else if (student[i].Score>=60)
            student[i].Grade='C';
            else if (student[i].Score>=50)
            student[i].Grade='D';
            else if (student[i].Score>=40)
            student[i].Grade='E';
            else if (student[i].Score<40)
            student[i].Grade='F';
        cout<< " GRADE: "<<student[i].Grade;
        cout<<endl<<endl<<endl;
    }


        Totalage = student[0].Age + student[1].Age + student[2].Age + student[3].Age + student[4].Age; // SUM OF AGES OF STUDENTS
        Totalscore = student[0].Score + student[1].Score + student[2].Score + student[3].Score + student[4].Score; // SUM OF SCORE OF EACH STUDENT
avgage=Totalage/5.0; // AVERAGE AGE
avgscore=Totalscore/5.0; //AVERAGE SCORE



   ofstream outf(" student.txt "); //CREATE A .TXT FILE CALLED STUDENT


// WRITE TO THE STUDENT FILE
outf<< "   Id Number    "   <<   "   Name   "   <<  "   Age   "   <<  "   Gender    "   <<   "   Score    "   <<    "   Grade    "<<endl;
outf<< "   **********************************************************************************************************************"<<endl;
     for (j = 0; j < 5; j++)
    outf << j << " .  " << "   " << "   " << student[j].IdNumber << "     " << student[j].Name << "     " << "   " <<student[j].Age << "    " << "   " << student[j].Gender <<"    "<<"   "<<student[j].Score <<"       "<<"   "<<student[j].Grade<< "     "<<endl<<endl<<endl;
outf<< "       **************************************************************************"<<endl;
outf<< " Number of Males: " << Malecount << endl;
outf<< " Number of Females: " << Femalecount <<endl;
outf<< " Average Age: " << avgage << endl;
outf<< " Average Score: " << avgscore << endl;
return 0;
}






