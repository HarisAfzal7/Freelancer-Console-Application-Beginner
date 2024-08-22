#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <cstring>

char option;

char save[50];
char myfname[30];
char mylname[30];
char ffname[30];
char flname[30];
char phone_no[20];
char email[30];
int age;
int height;
float weight;
char degree[20];
char experiencef[7];

char skills1[17]="web-development.";
char skills2[22]="software-development.";
char skills3[15]="web-designing.";
char skills4[16]="resume-writing.";
char skills5[13]="Book-design.";
char skills6[20]="Album-cover design.";
char skills7[19]="Photoshop-editing.";
char skills8[5]="SEO.";
char skills9[26]="social-media-advertising.";
char skills10[18]="public-relations.";

char sskill1[17]="HTML/CSS-skills.";
char sskill2[19]="Analytical-skills.";
char sskill3[26]="Responsive-design skills.";
char sskill4[19]="JavaScript-skills.";
char sskill5[22]="Interpersonal-skills.";


char afzal[50];
char khan[5]=".txt";
int j,p,l,u;
char error[6];
char error2[6];
//int skilllimit[5];

using namespace std;

int Askoption();

    void GetCredential(char username[], char password[]){
        cout << "Enter username: ";
        cin >> username;
        p = 0;
        while (!(username[p]==0)){
            save[p]=username[p];
            p++;
        }
        l = 0;
        while (l<5){
            save[p]=khan[l];
            l++;
            p++;
            u = 0;
        }
        //cout<<"save : "<<save;
        if (option==1){
            int j = 0;
            if (j==1){
                START:
                cin.getline(username,49);
                //cout<<"Please write different username this type username are already exist: ";
                cin.getline(username,49);
            }
            int i,n;
            i = 0;
            n = 0;
            while (!(username[i]==0)){
                if(username[i]==32){
                    j = 1;
                    cout<<"\nPlease enter your username without spaces: ";
                    goto START;
                    break;
                }
                afzal[n]=username[i];
                n++;
                i++;
            }
            i = 0;
            while (i<5){
                afzal[n]=khan[i];
                n++;
                i++;
            }
            fstream pro;
            pro.open(afzal);
            if(true==pro.is_open()){
                cout<<"\nPlease write different username this type username are already exist: ";
                goto START;
            }
            //cout<<"afzal: "<<afzal<<endl;
            ofstream fs(afzal);
    }


        //START:
        //system("cls");
        cout << "Enter password: ";
        //cin >> password;
        int i = 0;
        char a;
        for (i = 0;;){
            a = _getch();
            if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')){
                password[i] = a;
                ++i;
                cout << "*";
            }
            if (a == '\b' && i >= 1){
                cout << "\b \b";
                --i;
            }
            if (a == '\r'){
                password[i] = '\0';
                break;
            }
        }

    if (option==1){
        fstream mycv;
        mycv.open(afzal,fstream::out|fstream::app);
        cin.getline(error,5);
        cout<<"\nEnter your First name: ";
        cin.getline(myfname,29);
        mycv<<myfname<<endl;
        cout<<"Enter your Last name: ";
        cin.getline(mylname,29);
        mycv<<mylname<<endl;
        cout<<"Enter your Father First name: ";
        cin.getline(ffname,29);
        mycv<<ffname<<endl;
        cout<<"Enter your Father Last name: ";
        cin.getline(flname,29);
        mycv<<flname<<endl;
        cout<<"Enter your phone number: ";
        cin.getline(phone_no,19);
        mycv<<phone_no<<endl;
        cout<<"Enter your email: ";
        cin.getline(email,29);
        mycv<<email<<endl;
        cout<<"Enter you age: ";
        cin>>age;
        mycv<<age<<endl;
        cout<<"Enter your height: ";
        cin>>height;
        mycv<<height<<endl;
        cout<<"Enter your weight: ";
        cin>>weight;
        mycv<<weight<<endl;
        cout<<"Enter your Degree: ";
        cin.getline(error2,5);
        cin.getline(degree,19);
        mycv<<degree<<endl;
        cout<<"\nDo you have any skills for yes 1 and for no 2: ";
        char n;
        n = getch();
        n = n-48;
        if (n==1){
            cout<<"\n\nthere are the following skills you can add up to 5 skill from it and sub tools: \n\n";
            cout<<"1.  web development."<<"             2.  software development.\n";
            cout<<"3.  web designing."<<"               4.  resume writing.\n";
            cout<<"5.  Book design."<<"                 6.  Album cover design\n";
            cout<<"7.  Photoshop editing."<<"           8.  SEO.\n";
            cout<<"9.  social media advertising.\n";
            /*cout<<"11. Display advertising."<<"         12. Email marketing.\n";
            cout<<"13. Survays."<<"                     14. word press.\n";
            cout<<"15. website builders."<<"            16. Game development.\n";
            cout<<"17. cybersecurity."<<"               18. Data base.\n";*/

            char num;
            char choose;
            SKILLS:
            cout<<"\n\nEnter your skill number: ";
            num = _getch();
            num = num - 48;
            int har=0;
            do{
                if (num==1){
                    cout<<"\n\nwhich sub skill you have press option and press 'N' for No: "<<endl<<endl;
                    cout<<"1. HTML/CSS skills."<<"            2.  Analytical skills.\n";
                    cout<<"3. Responsive design skills."<<"   4.  JavaScript skills.\n";
                    cout<<"5. Interpersonal skills.\n";
                    SUB:
                    cout<<"\n Enter your sub skills: ";
                    char chooice;
                    char choooice;
                    chooice = _getch();
                    cout<<"\n";
                    do {
                        if (chooice=='1'){
                            har++;
                            mycv<<sskill1<<endl;
                            cout<<"Do you have more skills in these sub skills for y/n: ";
                            choooice = _getch();
                            cout<<endl;
                            if (choooice=='y' || choooice=='Y'){
                                goto SUB;
                            }else if (choooice=='n' || choooice=='N'){
                                break;
                            }
                        }
                        if (chooice=='2'){
                            har++;
                            mycv<<sskill2<<endl;
                            cout<<"Do you have more skills in these sub skills for y/n: ";
                            choooice = _getch();
                            cout<<endl;
                            if (choooice=='y' || choooice=='Y'){
                                goto SUB;
                            }else if (choooice=='n' || choooice=='N'){
                                break;
                            }
                        }
                        if (chooice=='3'){
                            har++;
                            mycv<<sskill3<<endl;
                            cout<<"Do you have more skills in these sub skills for y/n: ";
                            choooice = _getch();
                            cout<<endl;
                            if (choooice=='y' || choooice=='Y'){
                                goto SUB;
                            }else if (choooice=='n' || choooice=='N'){
                                break;
                            }
                        }
                        if (chooice=='4'){
                            har++;
                            mycv<<sskill4<<endl;
                            cout<<"Do you have more skills in these sub skills for y/n: ";
                            choooice = _getch();
                            cout<<endl;
                            if (choooice=='y' || choooice=='Y'){
                                goto SUB;
                            }else if (choooice=='n' || choooice=='N'){
                                break;
                            }
                        }
                        if (chooice=='5'){
                            har++;
                            mycv<<sskill5<<endl;
                            cout<<"Do you have more skills in these sub skills for y/n: ";
                            choooice = _getch();
                            cout<<endl;
                            if (choooice=='y' || choooice=='Y'){
                                goto SUB;
                            }else if (choooice=='n' || choooice=='N'){
                                break;
                            }
                        }
                    }while (!(choooice=='n' || choooice=='N' || har<5));
                }
                if (num==2){
                    har++;
                    mycv<<skills2<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==3){
                    har++;
                    mycv<<skills3<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==4){
                    har++;
                    mycv<<skills4<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==5){
                    har++;
                    mycv<<skills5<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==6){
                    har++;
                    mycv<<skills6<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==7){
                    har++;
                    mycv<<skills7<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==8){
                    har++;
                    mycv<<skills8<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==9){
                    har++;
                    mycv<<skills9<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
                if (num==10){
                    har++;
                    mycv<<skills10<<endl;
                    cout<<"Do you have more skills for yes 1 for no 2: ";
                    choose = _getch();
                    choose = choose-48;
                    if(choose==1){
                        goto SKILLS;
                    }
                }
                if (choose==2){
                    break;
                }
            }while(!(num==2 || har<5));
        }
        mycv.close();
        cout<<"do you want to apply for job press y/n: ";
        char y;
        char jooob[50];
        y = _getch();
        if (y=='y' || y =='Y'){
            cout<<"\n\nenter you job title you want to apply for in the formate of 'software-engineer' : ";
            cin.getline(jooob,49);
        cout<<"Enter your experience in the formate '2years': ";
        cin.getline(experiencef,6);
        fstream expe;
        expe.open("Experience.txt", fstream::out| fstream::app);
        expe<<afzal<<endl<<jooob<<endl<<experiencef<<endl;
        expe.close();
        }
    }

    if (option==1){
            char jo;
            cout<<"\nwould you like to offer a job: "<<endl;
            cout<<"for yes enter 1 and 2 for no: ";
            jo = _getch();
            jo = jo-48;
            if (jo==1){
                char job[50];
                char x[3];
                cin.getline(x,2);
                cout<<"\nEnter the job name in the formate of "<<" <software-engineer> : "<<endl;
                cin.getline(job,49);
                cout<<"enter the experience eligibility in the formate of '2years' : ";
                cin.getline(experiencef,6);
                fstream offer;
                offer.open("JOBS.txt", fstream::out| fstream::app);
                offer<<afzal<<endl<<job<<endl<<experiencef<<endl;
                offer.close();
            }
        }
    }

int main()
{
    system("color 4e");
    char username[50];
	char password[50];
	char myname[50];

    option = Askoption();
	if (option == 1){
		GetCredential(username, password);
		fstream users;
		users.open("Freelancer.txt", fstream::out | fstream::app);
		users << username << endl << password << endl;
		cout << "\n**You have successfully created your ID**\n\n";
		users.close();
	}
	else if (option == 2){
		fstream users;
		char cur_user[50];
		char cur_pass[50];
		GetCredential(username, password);
		users.open("Freelancer.txt", fstream::in);
		int x = 1;
		while (!users.eof()){
			users >> cur_user;
			users >> cur_pass;
			if (0 == strcmp(cur_user, username)){
				if (0 == strcmp(cur_pass, password)){
                    x = 2;
					//cout << "Welcome " << username << endl;
				}
            }
		}
        if (x==2){
            cout <<"\nWelcome "<<username << endl;
            users.close();
        }
        else{
            cout<<"\n\nThere is no such user please sign in again:\n\n";
            return -1;
        }
	}
	if (option==2){
        char b;
        cout<<"\n\nDo you want see your CV then press    : 1: \n";
        cout<<"Do you want to search for Job press   : 2: \n";
        //cout<<"Or do you want to search for employee : 3: \n";
        b = _getch();
        b = b-48;
        if (b==1){
            /*
            char rough[5]=".txt";
            int k = 0;
            int o=0;
            while (u)*/
            char *token;
            char line[500];
            fstream CV;
            //cout<<"Opened file is: "<<save<<endl;
            CV.open(save,fstream::in);
            if (false==CV.is_open()){
                cout<<"there is no your CV file:";
                return -1;
            }
            while (!CV.eof()){
                //CV.getline(line,500);
                //if (strcmp(line,"")==0){
                 //   break;
                //}
                CV>>line;
                cout<<line<<endl;
            }/*
            token = strtok(line,",");
            cout<<"Your CV is: \n\n";
            while (token!=0){
                cout<<token<<endl;
                token = strtok (NULL, ",");
            }*/
            CV.close();

        }
        if (b==2){
            char *token2;
            char line2[2000];

            //string line2;
            fstream JOB;
            JOB.open("JOBS.txt",fstream::in);

            if (false==JOB.is_open()){
                cout<<"there is no JOBS file:\n";
                return -1;
            }/*
            if (true==JOB.is_open()){
                while (getline(JOB,line2)){
                    cout <<line2<<endl;
                }
                JOB.close();
            }*/
            char harisaa[50];
            int lm=0;
            cout<<"\nSearch for the job you want: "<<endl;
            cin.getline(harisaa,49);
            cin.getline(harisaa,49);
            while (!JOB.eof()){
                //CV.getline(line,500);
                //if (strcmp(line,"")==0){
                 //   break;
                //}
                JOB>>line2;
                if (harisaa[lm]==line2[lm] && harisaa[lm+1]==line2[lm+1] && harisaa[lm+2]==line2[lm+2]){
                    cout<<line2<<endl;
                }
                //cout<<line2;
            }
            /*token2 = strtok(line2,",");
            cout<<"There are the following jobs: \n\n";
            while (token2!=0){
                cout<<token2<<endl;
                token2 = strtok (NULL, ",");
            }*/
            JOB.close();
        }
        /*if (b==3){
            char joooob[50];
            char experienceff[7];
            char jooooob[50];
            char experiencefff[7];
            string cur_user1;
            cout<<"\n\nEnter the job title in the formate of ':software engineer:' \n";
            cin.getline(joooob,49);
            cin.getline(joooob,49);
            cout<<"Enter the experience eligibility in the formate of '2years' : \n";
            cin.getline(experienceff,6);
            //cin.getline(experienceff,6);
            ifstream expout;
            expout.open("Experience.txt");
            while (expout.eof()){
                expout>>cur_user1;
                expout>>jooooob;
                expout>>experiencefff;
                int ia =0;
                if (jooooob[ia]==joooob[ia] && jooooob[ia+1]==joooob[ia+1] && jooooob[ia+2]==joooob[ia+2]){
                    if (experiencefff[ia]>=experienceff[ia]){
                        cout<<cur_user1<<endl;
                        cout<<jooooob<<endl;
                        cout<<experiencefff<<endl;
                    }
                }
            }
            expout.close();
            cout<<"\n\nEnter the username of the employee that you want to heir: \n";
            cout<<"\nThe username must be same as seen on the screen: \n";

            char usrnma[50];
            char nusrnma[50];
            char txt[5]=".txt";
            int ha=0;
            while (ha<50){
                usrnma[ha]=0;
                ha++;
            }
            USER:
            cin.getline(usrnma,50);
            ha = 0;
            while(!(usrnma[ha]==0)){
                nusrnma[ha]=usrnma[ha];
                ha++;
            }
            int la = 0;
            while (la<4){
                nusrnma[ha]=txt[la];
                la++;
                ha++;
            }
            fstream appr;
            appr.open(nusrnma,fstream::app);
            if(false==appr.is_open()){
                cout<<"\n\nYou Enter the wrong username please enter proper username: \n\n";
                goto USER;
            }
            appr<<"AOA"<<endl<<"Hope this notification find you well"<<endl;
            appr<<"we are heiring you for the JOB mention below: "<<endl;
            appr<<"\1GOOD LUCK\1"<<endl;
            appr<<cur_user1<<endl;
            appr<<jooooob<<endl;
            appr<<experiencefff<<endl;
            appr.close();
        }*/
	}


    return 0;
}
int Askoption(){
	cout << "\t\t\t\t      _________________________________";
	cout << "\n\n\t\t\t\t      |  ***Welcome to Freelancer***  |\n";
	cout << "\t\t\t\t      _________________________________\n\n\n";
	while (!(option==1 || option ==2)){
	cout << "For the new user enter 1, for sign in enter 2: ";
	option = _getch();
	option = option-48;
	//cout<<"option: "<<(int)option;
	cout<<"\n";
	}
	return option;
}

